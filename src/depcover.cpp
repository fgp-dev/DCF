#include "depcover/depcover.hpp"

#include <algorithm>
#include <chrono>
#include <stdexcept>

namespace depcover {
namespace {
Input bit(unsigned pos) { return Input{1} << pos; }
unsigned checked_bits(unsigned bits) {
    if (bits < 2 || bits > 16) throw std::invalid_argument("bits must be in [2,16]");
    return bits;
}
}

Detector::Detector(unsigned bits) : bits_(checked_bits(bits)), edges_(bits_ * bits_, false) {
    discoverers_.push_back(0); // Algorithm 1: C = {0^n}; this need not be observed.
}

bool Detector::has_observation(Input input) const {
    return observations_.contains(input);
}

std::optional<Outcome> Detector::observed_outcome(Input input) const {
    const auto it = observations_.find(input);
    if (it == observations_.end()) return std::nullopt;
    return it->second;
}

bool Detector::has_edge(unsigned a, unsigned b) const {
    if (a >= b || b >= bits_) throw std::out_of_range("invalid edge");
    return edges_[a * bits_ + b];
}

bool Detector::insert(Input input, Outcome outcome) {
    if (input >= (Input{1} << bits_)) throw std::out_of_range("input exceeds bit width");
    const auto [it, inserted] = observations_.emplace(input, outcome);
    (void)it;
    if (!inserted) return false;
    inputs_.push_back(input);
    bool discovered = false;
    // Eq. (2): inspect the sole quartet for each pair containing this input.
    for (unsigned a = 0; a < bits_; ++a) {
        for (unsigned b = a + 1; b < bits_; ++b) {
            ++pair_checks_;
            if (edges_[a * bits_ + b]) continue;
            const Input base = input & ~bit(a) & ~bit(b);
            const auto q00 = observations_.find(base);
            const auto q01 = observations_.find(base | bit(b));
            const auto q10 = observations_.find(base | bit(a));
            const auto q11 = observations_.find(base | bit(a) | bit(b));
            if (q00 == observations_.end() || q01 == observations_.end() ||
                q10 == observations_.end() || q11 == observations_.end()) continue;
            if (q00->second == q01->second && q10->second != q11->second) {
                edges_[a * bits_ + b] = true;
                ++edge_count_;
                discovered = true;
            }
        }
    }
    if (discovered) discoverers_.push_back(input);
    return true;
}

std::vector<Edge> Detector::edges() const {
    std::vector<Edge> out;
    for (unsigned a = 0; a < bits_; ++a)
        for (unsigned b = a + 1; b < bits_; ++b)
            if (edges_[a * bits_ + b]) out.emplace_back(a, b);
    return out;
}

std::size_t Detector::estimated_state_bytes() const noexcept {
    // Approximation: object + bucket array + one pair and two pointers per hash node.
    return sizeof(*this) + observations_.bucket_count() * sizeof(void*) +
           observations_.size() * (sizeof(std::pair<const Input, Outcome>) + 2 * sizeof(void*)) +
           (inputs_.capacity() + discoverers_.capacity()) * sizeof(Input) +
           (edges_.capacity() + 7) / 8;
}

Outcome and_pairs(Input input, unsigned pairs) {
    Outcome result = 0;
    for (unsigned i = 0; i < pairs; ++i)
        result |= (((input >> (2 * i)) & 1) & ((input >> (2 * i + 1)) & 1)) << i;
    return result;
}

Outcome independent_bits(Input input, unsigned pairs) {
    Outcome result = 0;
    for (unsigned i = 0; i < pairs; ++i) result |= ((input >> (2 * i + 1)) & 1) << i;
    return result;
}

Outcome xor_pairs(Input input, unsigned pairs) {
    Outcome result = 0;
    for (unsigned i = 0; i < pairs; ++i)
        result |= (((input >> (2 * i)) ^ (input >> (2 * i + 1))) & 1) << i;
    return result;
}

const char* policy_name(Policy policy) noexcept {
    switch (policy) {
    case Policy::guided: return "depcover";
    case Policy::mutation: return "mutation";
    case Policy::uniform: return "uniform";
    case Policy::fixed_parent: return "fixed_parent";
    case Policy::mutation_feedback: return "mutation_feedback";
    }
    return "unknown";
}

RunResult run(unsigned bits, std::size_t budget, Policy policy,
              const Oracle& oracle, std::uint64_t seed, bool record_progress) {
    checked_bits(bits);
    const std::size_t domain_size = std::size_t{1} << bits;
    if (budget > domain_size) throw std::invalid_argument("budget exceeds input domain");
    const auto start = std::chrono::steady_clock::now();
    RunResult result(bits);
    if (record_progress) result.progress.reserve(budget);
    std::mt19937_64 rng(seed);
    std::vector<Input> uniform_order;
    std::size_t uniform_cursor = 0;
    if (policy == Policy::uniform) {
        uniform_order.resize(domain_size);
        for (std::size_t i = 0; i < domain_size; ++i) uniform_order[i] = i;
        std::shuffle(uniform_order.begin(), uniform_order.end(), rng);
    }
    auto query = [&](Input input, std::optional<Input> parent = std::nullopt,
                     int pair_a = -1, int pair_b = -1) {
        ++result.candidate_proposals;
        if (result.detector.has_observation(input) || result.target_executions == budget) return;
        const auto parent_outcome = record_progress && parent ? result.detector.observed_outcome(*parent) :
                                                              std::nullopt;
        const auto before_target = std::chrono::steady_clock::now();
        const Outcome outcome = oracle(input);
        const auto after_target = std::chrono::steady_clock::now();
        result.detector.insert(input, outcome);
        const auto after_feedback = std::chrono::steady_clock::now();
        result.target_us += std::chrono::duration<double, std::micro>(after_target - before_target).count();
        result.feedback_us += std::chrono::duration<double, std::micro>(after_feedback - after_target).count();
        ++result.target_executions;
        if (record_progress)
            result.progress.push_back({input, outcome, result.target_executions,
                result.detector.edge_count(),
                std::chrono::duration<double, std::micro>(after_feedback - start).count(),
                result.target_us, result.feedback_us, parent, parent_outcome, pair_a, pair_b});
    };
    auto random_unseen = [&]() {
        if (policy == Policy::uniform) {
            query(uniform_order[uniform_cursor++]);
            return;
        }
        // Rejection sampling is uniform over unseen inputs; the scan terminates
        // near saturation without storing the complete domain.
        for (unsigned attempt = 0; attempt < 64; ++attempt) {
            const Input candidate = std::uniform_int_distribution<Input>(0, domain_size - 1)(rng);
            if (!result.detector.has_observation(candidate)) { query(candidate); return; }
            ++result.candidate_proposals;
        }
        const std::size_t remaining = domain_size - result.target_executions;
        std::size_t rank = std::uniform_int_distribution<std::size_t>(0, remaining - 1)(rng);
        for (Input input = 0; input < domain_size; ++input) {
            if (!result.detector.has_observation(input)) {
                if (rank == 0) { query(input); return; }
                --rank;
            }
        }
    };
    if (policy == Policy::guided || policy == Policy::fixed_parent) {
        std::vector<Edge> pairs;
        for (unsigned a = 0; a < bits; ++a)
            for (unsigned b = a + 1; b < bits; ++b) pairs.emplace_back(a, b);
        std::shuffle(pairs.begin(), pairs.end(), rng);
        result.peak_working_bytes = pairs.capacity() * sizeof(Edge) + 4 * sizeof(Input);
        std::bernoulli_distribution perturb(0.15);
        for (const auto& [a, b] : pairs) {
            if (result.target_executions == budget) break;
            const auto& corpus = result.detector.discoverers();
            Input context = policy == Policy::fixed_parent ? 0 :
                corpus[std::uniform_int_distribution<std::size_t>(0, corpus.size() - 1)(rng)];
            for (unsigned i = 0; i < bits; ++i)
                if (i != a && i != b && perturb(rng)) context ^= bit(i);
            context &= ~bit(a) & ~bit(b);
            std::vector<Input> quartet{context, context | bit(b), context | bit(a),
                                       context | bit(a) | bit(b)};
            std::shuffle(quartet.begin(), quartet.end(), rng);
            for (Input input : quartet) {
                if (result.target_executions == budget) break;
                query(input, context, static_cast<int>(a), static_cast<int>(b));
            }
        }
    } else if ((policy == Policy::mutation || policy == Policy::mutation_feedback) && budget != 0) {
        query(0); // Mutation baseline starts from the observed zero input.
        std::discrete_distribution<int> flip_count({3, 2, 1});
        std::size_t duplicates = 0;
        while (result.target_executions < budget) {
            if (duplicates >= 64) {
                random_unseen();
                duplicates = 0;
                continue;
            }
            const auto& seen = policy == Policy::mutation ? result.detector.observed_inputs() :
                                                        result.detector.discoverers();
            const Input parent = seen[std::uniform_int_distribution<std::size_t>(0, seen.size() - 1)(rng)];
            Input proposal = parent;
            std::vector<unsigned> positions(bits);
            result.peak_working_bytes = positions.capacity() * sizeof(unsigned);
            for (unsigned i = 0; i < bits; ++i) positions[i] = i;
            std::shuffle(positions.begin(), positions.end(), rng);
            const int flips = std::min(flip_count(rng) + 1, static_cast<int>(bits));
            for (int j = 0; j < flips; ++j) proposal ^= bit(positions[static_cast<std::size_t>(j)]);
            const auto before = result.target_executions;
            query(proposal, parent);
            duplicates = result.target_executions == before ? duplicates + 1 : 0;
        }
    }
    while (result.target_executions < budget) random_unseen();
    const auto end = std::chrono::steady_clock::now();
    result.elapsed_us = std::chrono::duration<double, std::micro>(end - start).count();
    result.estimated_state_bytes = result.detector.estimated_state_bytes();
    result.scheduling_bytes = uniform_order.capacity() * sizeof(Input);
    return result;
}

} // namespace depcover
