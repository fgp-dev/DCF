#include "depcover/depcover.hpp"

#include <algorithm>
#ifdef NDEBUG
#undef NDEBUG
#endif
#include <cassert>
#include <stdexcept>
#include <vector>

using namespace depcover;

int main() {
    Detector detector(3);
    assert(detector.observation_count() == 0);
    assert(detector.edge_count() == 0);
    assert(detector.discoverers() == std::vector<Input>{0});
    // The four observations share the third-bit context z=0.
    assert(detector.insert(0, 0));
    assert(detector.insert(1, 0));
    assert(detector.insert(2, 0));
    assert(detector.edge_count() == 0);
    assert(detector.insert(3, 1));
    assert(detector.has_edge(0, 1));
    assert(detector.edge_count() == 1);
    // A second matching context cannot count the already covered pair twice.
    for (Input input = 4; input < 8; ++input) detector.insert(input, and_pairs(input, 1));
    assert(detector.edge_count() == 1);
    assert(detector.discoverers().size() == 2);
    assert(detector.discoverers().back() == 3);
    assert(!detector.insert(3, 99)); // Cached outcome must remain unchanged.
    assert(detector.edge_count() == 1);

    // Mismatched z cannot complete a quartet.
    Detector mismatch(3);
    mismatch.insert(0, 0);
    mismatch.insert(1, 0);
    mismatch.insert(2, 0);
    mismatch.insert(7, 1);
    assert(!mismatch.has_edge(0, 1));

    // Eq. (2) is asymmetric in the enabling A value.
    Detector enabled_at_zero(2);
    enabled_at_zero.insert(0, 0);
    enabled_at_zero.insert(1, 0);
    enabled_at_zero.insert(2, 1);
    enabled_at_zero.insert(3, 0);
    assert(enabled_at_zero.edge_count() == 0);

    // B changes the output in both A contexts: there is no conditional edge.
    Detector independent_effect(2);
    for (Input input = 0; input < 4; ++input)
        independent_effect.insert(input, (input >> 1) & 1);
    assert(independent_effect.edge_count() == 0);

    // Changing several bits between two executions is insufficient: a full
    // quartet with the same other-bit context is required.
    Detector simultaneous(3);
    simultaneous.insert(0, 0);
    simultaneous.insert(3, 1);
    simultaneous.insert(4, 0);
    simultaneous.insert(7, 1);
    assert(simultaneous.edge_count() == 0);

    // Every binary truth table on two inputs must match Eq. (2), independent
    // of the order in which the four observations become available.
    for (unsigned truth = 0; truth < 16; ++truth) {
        Detector small(2);
        for (Input input : {Input{3}, Input{0}, Input{2}, Input{1}})
            small.insert(input, (truth >> input) & 1U);
        const bool expected_witness = (((truth >> 0) & 1U) == ((truth >> 2) & 1U)) &&
                                      (((truth >> 1) & 1U) != ((truth >> 3) & 1U));
        assert(small.has_edge(0, 1) == expected_witness);
    }

    const std::vector<Edge> expected{{0, 1}, {2, 3}, {4, 5}};
    for (int target = 0; target < 3; ++target) {
        Detector exhaustive(8);
        for (Input input = 0; input < 256; ++input) {
            const Outcome output = target == 0 ? and_pairs(input, 3) :
                                   target == 1 ? independent_bits(input, 3) : xor_pairs(input, 3);
            exhaustive.insert(input, output);
        }
        assert(exhaustive.observation_count() == 256);
        assert(exhaustive.edges() == (target == 0 ? expected : std::vector<Edge>{}));
    }

    for (Policy policy : {Policy::guided, Policy::mutation, Policy::uniform,
                          Policy::fixed_parent, Policy::mutation_feedback}) {
        auto oracle = [](Input x) { return and_pairs(x, 3); };
        const auto a = run(8, 64, policy, oracle, 12345);
        const auto b = run(8, 64, policy, oracle, 12345);
        assert(a.target_executions == 64);
        assert(a.detector.observation_count() == 64);
        assert(a.detector.observed_inputs() == b.detector.observed_inputs());
        assert(a.detector.edges() == b.detector.edges());
        assert(a.detector.pair_checks() == 64 * 28);
        const auto recorded = run(8, 64, policy, oracle, 12345, true);
        assert(recorded.progress.size() == 64);
        assert(recorded.progress.back().dependencies == recorded.detector.edge_count());
        const auto full = run(8, 256, policy, oracle, 999);
        assert(full.detector.edges() == expected);
        assert(full.target_executions == 256);
        const auto tiny = run(2, 4, policy, [](Input x) { return and_pairs(x, 1); }, 7);
        assert(tiny.detector.edge_count() == 1);
        assert(tiny.target_executions == 4);
    }
    bool threw = false;
    try { (void)run(8, 257, Policy::guided, [](Input) { return Outcome{0}; }, 0); }
    catch (const std::invalid_argument&) { threw = true; }
    assert(threw);
    threw = false;
    try { (void)run(64, 1, Policy::guided, [](Input) { return Outcome{0}; }, 0); }
    catch (const std::invalid_argument&) { threw = true; }
    assert(threw);
}
