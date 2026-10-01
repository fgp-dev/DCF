#include "depcover/depcover.hpp"

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <optional>
#include <set>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

using namespace depcover;
namespace {
constexpr Outcome bug_bit = Outcome{1} << 63;
struct Target { std::string name; unsigned bits; Oracle oracle; unsigned known_edges; unsigned bug_trigger_inputs; };
const std::vector<Target>& targets() {
    static const std::vector<Target> all{
        {"and3", 8, [](Input x) { return and_pairs(x, 3); }, 3, false},
        {"independent", 8, [](Input x) { return independent_bits(x, 3); }, 0, false},
        {"constant", 8, [](Input) { return Outcome{0}; }, 0, false},
        {"direct", 8, [](Input x) { return x & 7; }, 0, false},
        {"nested_bug", 8, [](Input x) {
            const Outcome ordinary = ((x & 7) == 7) | (Outcome{((x >> 3) & 3) == 3} << 1);
            return ordinary | ((x & 31) == 31 ? bug_bit : 0);
        }, 4, 8},
        {"rare_bug", 8, [](Input x) {
            return Outcome{(x & 3) == 3} | (x == 255 ? bug_bit : 0);
        }, 28, 1}
    };
    return all;
}
struct Options {
    std::string target = "all", fuzzer = "all", out = "results/benchmark";
    std::vector<std::size_t> budgets{32, 64, 128, 192};
    unsigned runs = 30;
    std::uint64_t seed = 12345;
    bool trace = false;
};
std::vector<std::size_t> parse_budgets(const std::string& value) {
    std::vector<std::size_t> budgets;
    std::istringstream stream(value);
    std::string item;
    while (std::getline(stream, item, ',')) {
        const auto budget = std::stoull(item);
        if (!budget) throw std::invalid_argument("budget must be positive");
        budgets.push_back(budget);
    }
    if (budgets.empty()) throw std::invalid_argument("empty budget list");
    return budgets;
}
Options parse(int argc, char** argv) {
    Options o;
    for (int i = 1; i < argc; ++i) {
        const std::string a = argv[i];
        if (a == "--help" || a == "-h") {
            std::cout << "Usage: benchmark [--target all|NAME] [--fuzzer all|dcf|random|uniform|fixed_parent|mutation_feedback]\n"
                         "                 [--runs N] [--budget N|--budgets N,N,...] [--seed N] [--out PREFIX] [--trace] [--all]\n"
                         "Targets: and3, independent, constant, direct, nested_bug, rare_bug.\n"
                         "--out writes PREFIX_progress.csv and PREFIX_runs.csv. --trace prints every target query to stderr.\n"
                         "Budgets count distinct target executions; maximum is 256 for these eight-bit targets.\n"
                         "Legacy --all means all targets and fuzzers; old --out path.csv is treated as a prefix.\n";
            std::exit(0);
        } else if (a == "--all") { o.target = "all"; o.fuzzer = "all"; }
        else if (a == "--trace") o.trace = true;
        else if (i + 1 < argc && a == "--target") o.target = argv[++i];
        else if (i + 1 < argc && a == "--fuzzer") o.fuzzer = argv[++i];
        else if (i + 1 < argc && a == "--runs") o.runs = std::stoul(argv[++i]);
        else if (i + 1 < argc && a == "--seed") o.seed = std::stoull(argv[++i]);
        else if (i + 1 < argc && a == "--budget") o.budgets = parse_budgets(argv[++i]);
        else if (i + 1 < argc && a == "--budgets") o.budgets = parse_budgets(argv[++i]);
        else if (i + 1 < argc && a == "--out") o.out = argv[++i];
        else throw std::invalid_argument("unknown or incomplete option: " + a + " (see --help)");
    }
    if (!o.runs) throw std::invalid_argument("--runs must be positive");
    if (o.out.ends_with(".csv")) o.out.resize(o.out.size() - 4);
    return o;
}
std::vector<std::pair<std::string, Policy>> policies(const std::string& selected) {
    const std::vector<std::pair<std::string, Policy>> all{
        {"dcf", Policy::guided}, {"random", Policy::mutation},
        {"uniform", Policy::uniform}, {"fixed_parent", Policy::fixed_parent},
        {"mutation_feedback", Policy::mutation_feedback}};
    if (selected == "all") return all;
    for (const auto& entry : all) if (entry.first == selected) return {entry};
    throw std::invalid_argument("unknown fuzzer: " + selected);
}
unsigned paper_seed_offset(Policy policy) {
    switch (policy) {
    case Policy::guided: case Policy::fixed_parent: return 0;
    case Policy::mutation: case Policy::mutation_feedback: return 1;
    case Policy::uniform: return 2;
    }
    throw std::invalid_argument("unknown policy");
}
std::vector<Target> selected_targets(const std::string& selected) {
    if (selected == "all") return targets();
    for (const auto& target : targets()) if (target.name == selected) return {target};
    throw std::invalid_argument("unknown target: " + selected);
}
std::vector<Edge> reference_edges(const Target& target) {
    Detector reference(target.bits);
    unsigned bug_triggers = 0;
    for (Input x = 0; x < (Input{1} << target.bits); ++x) {
        const Outcome outcome = target.oracle(x);
        bug_triggers += (outcome & bug_bit) != 0;
        reference.insert(x, outcome);
    }
    if (bug_triggers != target.bug_trigger_inputs)
        throw std::logic_error("bug trigger count changed for " + target.name);
    if (reference.edge_count() != target.known_edges)
        throw std::logic_error("ground-truth edge count changed for " + target.name +
                               ": expected " + std::to_string(target.known_edges) +
                               ", got " + std::to_string(reference.edge_count()));
    const auto edges = reference.edges();
    if (target.name == "and3" && edges != std::vector<Edge>{{0,1},{2,3},{4,5}})
        throw std::logic_error("and3 exact reference edge set changed");
    if (target.name == "nested_bug" && edges != std::vector<Edge>{{0,1},{0,2},{1,2},{3,4}})
        throw std::logic_error("nested_bug exact reference edge set changed");
    return edges;
}
std::string optional_number(const std::optional<std::size_t>& value) {
    return value ? std::to_string(*value) : "";
}
std::string optional_real(const std::optional<double>& value) {
    return value ? std::to_string(*value) : "";
}
void execute(std::ofstream& progress, std::ofstream& runs, const Target& target,
             const std::vector<Edge>& reference, const std::string& name, Policy policy,
             unsigned trial, std::uint64_t seed, std::size_t budget, bool trace) {
    const auto result = run(target.bits, budget, policy, target.oracle, seed, true);
    if (result.target_executions != budget || result.progress.size() != budget)
        throw std::logic_error("target execution budget violated");
    const auto found = result.detector.edges();
    unsigned true_edges = 0;
    for (const auto& edge : found)
        true_edges += std::binary_search(reference.begin(), reference.end(), edge) ? 1U : 0U;
    const auto false_edges = found.size() - true_edges;
    if (false_edges) throw std::logic_error("detector found edge absent from exhaustive reference");
    std::set<Outcome> behaviors;
    std::optional<std::size_t> first_dep, first_bug, half_coverage;
    std::optional<double> first_bug_us, half_coverage_us;
    std::size_t bugs = 0;
    double area = 0;
    const auto half_count = (reference.size() + 1) / 2;
    std::size_t previous_dependencies = 0;
    for (const auto& point : result.progress) {
        behaviors.insert(point.outcome);
        if (point.dependencies && !first_dep) first_dep = point.execution;
        if (half_count && point.dependencies >= half_count && !half_coverage) {
            half_coverage = point.execution;
            half_coverage_us = point.elapsed_us;
        }
        if ((point.outcome & bug_bit) && !first_bug) {
            first_bug = point.execution;
            first_bug_us = point.elapsed_us;
            bugs = 1;
        }
        area += point.dependencies;
        progress << target.name << ',' << name << ',' << trial << ',' << seed << ',' << budget << ','
                 << point.execution << ',' << point.elapsed_us << ',' << point.target_us << ','
                 << point.feedback_us << ',' << point.input << ',' << point.outcome << ','
                 << point.dependencies << ',' << reference.size() << ','
                 << (reference.empty() ? -1.0 : double(point.dependencies) / reference.size()) << ','
                 << behaviors.size() << ',' << bugs << ','
                 << (point.parent ? std::to_string(*point.parent) : "") << ','
                 << (point.parent_outcome ? std::to_string(*point.parent_outcome) : "") << ','
                 << (point.parent ? std::to_string(point.input ^ *point.parent) : "") << ','
                 << (point.pair_a < 0 ? "" : std::to_string(point.pair_a)) << ','
                 << (point.pair_b < 0 ? "" : std::to_string(point.pair_b)) << '\n';
        if (trace) std::cerr << target.name << ' ' << name << " execution=" << point.execution
                             << " before=" << (point.parent ? std::to_string(*point.parent) : "none")
                             << " after=" << point.input
                             << " changed_mask=" << (point.parent ? std::to_string(point.input ^ *point.parent) : "none")
                             << " output_before=" << (point.parent_outcome ? std::to_string(*point.parent_outcome) : "unobserved")
                             << " output_after=" << point.outcome
                             << " pair=" << (point.pair_a < 0 ? "none" : std::to_string(point.pair_a) + ":" + std::to_string(point.pair_b))
                             << " dependencies=" << point.dependencies
                             << " new=" << (point.dependencies > previous_dependencies)
                             << " corpus=" << (policy == Policy::guided && point.dependencies > previous_dependencies)
                             << '\n';
        previous_dependencies = point.dependencies;
    }
    const double coverage = reference.empty() ? -1.0 : double(found.size()) / reference.size();
    const double auc = reference.empty() ? -1.0 : area / (budget * reference.size());
    runs << target.name << ',' << name << ',' << trial << ',' << seed << ',' << budget << ','
         << result.target_executions << ',' << found.size() << ',' << reference.size() << ','
         << true_edges << ',' << false_edges << ',' << coverage << ',' << auc << ','
         << behaviors.size() << ',' << bugs << ',' << optional_number(first_bug) << ','
         << optional_number(first_dep) << ',' << optional_number(half_coverage) << ','
         << optional_real(first_bug_us) << ',' << optional_real(half_coverage_us) << ','
         << (found.empty() ? -1.0 : double(budget) / found.size()) << ','
         << result.elapsed_us << ',' << result.target_us << ',' << result.feedback_us << ','
         << budget * 1e6 / result.elapsed_us << ',' << result.candidate_proposals << ','
         << result.detector.discoverers().size() << '\n';
}
} // namespace
int main(int argc, char** argv) {
    try {
        const auto options = parse(argc, argv);
        const auto chosen_targets = selected_targets(options.target);
        const auto chosen_policies = policies(options.fuzzer);
        std::filesystem::create_directories(std::filesystem::path(options.out).parent_path().empty() ?
                                            "." : std::filesystem::path(options.out).parent_path());
        std::ofstream progress(options.out + "_progress.csv"), runs(options.out + "_runs.csv");
        if (!progress || !runs) throw std::runtime_error("cannot open result CSVs");
        progress << "target,fuzzer,trial,seed,budget,execution,elapsed_us,target_us,feedback_us,input,outcome,unique_dependencies,reference_dependencies,dependency_coverage,unique_behaviors,bugs_found,input_before,output_before,changed_mask,pair_a,pair_b\n";
        runs << "target,fuzzer,trial,seed,budget,target_executions,final_dependencies,reference_dependencies,true_dependencies,false_dependencies,final_dependency_coverage,coverage_auc,unique_behaviors,bugs_found,first_bug_execution,first_dependency_execution,half_coverage_execution,first_bug_elapsed_us,half_coverage_elapsed_us,executions_per_discovered_dependency,runtime_us,target_us,feedback_us,executions_per_second,candidate_proposals,corpus_size\n";
        progress << std::setprecision(12); runs << std::setprecision(12);
        // Warm code paths outside measured runs; rotate order to reduce a fixed
        // policy-order timing effect. Every policy still receives the same seed.
        for (const auto& target : chosen_targets)
            for (const auto& [name, policy] : chosen_policies) {
                (void)name;
                (void)run(target.bits, 32, policy, target.oracle, options.seed);
            }
        for (const auto& target : chosen_targets) {
            const auto reference = reference_edges(target);
            for (std::size_t budget : options.budgets) {
                if (budget > (std::size_t{1} << target.bits))
                    throw std::invalid_argument("budget exceeds finite target domain");
                for (unsigned trial = 0; trial < options.runs; ++trial) {
                    auto order = chosen_policies;
                    std::rotate(order.begin(), order.begin() + trial % order.size(), order.end());
                    for (const auto& [name, policy] : order)
                        execute(progress, runs, target, reference, name, policy, trial,
                                options.seed + 1009ULL * trial + paper_seed_offset(policy),
                                budget, options.trace);
                }
            }
        }
        std::cout << "wrote " << options.out << "_{progress,runs}.csv\n";
    } catch (const std::exception& e) {
        std::cerr << "benchmark: " << e.what() << '\n';
        return 1;
    }
}
