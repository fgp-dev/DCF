#pragma once

#include <cstddef>
#include <cstdint>
#include <functional>
#include <optional>
#include <random>
#include <unordered_map>
#include <utility>
#include <vector>

namespace depcover {

using Input = std::uint64_t;
using Outcome = std::uint64_t;
using Oracle = std::function<Outcome(Input)>;
using Edge = std::pair<unsigned, unsigned>;

enum class Policy { guided, mutation, uniform, fixed_parent, mutation_feedback };

struct Progress {
    Input input;
    Outcome outcome;
    std::size_t execution;
    std::size_t dependencies;
    double elapsed_us;
    double target_us;
    double feedback_us;
    std::optional<Input> parent;
    std::optional<Outcome> parent_outcome;
    int pair_a;
    int pair_b;
};

class Detector {
public:
    explicit Detector(unsigned bits);
    // Returns true only if a new observation was inserted.
    bool insert(Input input, Outcome outcome);
    unsigned bits() const noexcept { return bits_; }
    std::size_t observation_count() const noexcept { return observations_.size(); }
    std::size_t edge_count() const noexcept { return edge_count_; }
    std::uint64_t pair_checks() const noexcept { return pair_checks_; }
    bool has_observation(Input input) const;
    std::optional<Outcome> observed_outcome(Input input) const;
    bool has_edge(unsigned a, unsigned b) const;
    std::vector<Edge> edges() const;
    const std::vector<Input>& observed_inputs() const noexcept { return inputs_; }
    const std::vector<Input>& discoverers() const noexcept { return discoverers_; }
    std::size_t estimated_state_bytes() const noexcept;
private:
    unsigned bits_;
    std::unordered_map<Input, Outcome> observations_;
    std::vector<Input> inputs_;
    std::vector<Input> discoverers_;
    std::vector<bool> edges_;
    std::size_t edge_count_ = 0;
    std::uint64_t pair_checks_ = 0;
};

struct RunResult {
    explicit RunResult(unsigned bits) : detector(bits) {}
    Detector detector;
    std::size_t target_executions = 0;
    std::uint64_t candidate_proposals = 0;
    double elapsed_us = 0.0;
    double target_us = 0.0;
    double feedback_us = 0.0;
    std::vector<Progress> progress;
    std::size_t estimated_state_bytes = 0;
    std::size_t scheduling_bytes = 0;
    std::size_t peak_working_bytes = 0;
};

RunResult run(unsigned bits, std::size_t budget, Policy policy,
              const Oracle& oracle, std::uint64_t seed, bool record_progress = false);

Outcome and_pairs(Input input, unsigned pairs);
Outcome independent_bits(Input input, unsigned pairs);
Outcome xor_pairs(Input input, unsigned pairs);
const char* policy_name(Policy policy) noexcept;

} // namespace depcover
