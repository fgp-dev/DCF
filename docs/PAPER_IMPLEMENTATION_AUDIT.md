# Paper / implementation / benchmark audit

Read against the complete three-page `PAPER.pdf` (1 October 2026) and the files that existed before this pass. The old CSV, plot, summary, and analysis are preserved in `results/legacy/` because the new benchmark records different measurements. The paper's referenced `depcover_demo.py` is absent, so exact Python random streams cannot be reproduced.

| Paper concept | Implementation found at start | Correct? | Change in this pass |
|---|---|---|---|
| Deterministic black-box `f:{0,1}^n -> O`; equality on observable outcome | `Oracle(Input)->Outcome` and cached observations | Yes for binary synthetic targets | Kept; new targets remain deterministic and stateless. |
| Witness uses four outcomes with the **same** other-bit context `z` | `Detector::insert` looks up the quartet from the inserted input | Yes | Kept; added explicit simultaneous-change and independent-effect tests. |
| Eq. (2): no B effect at A=0; B effect at A=1 | Equality/inequality check in detector | Yes | Kept; documented exactly in `DEPENDENCY_COVERAGE_DEFINITION.md`. |
| Edge orientation only for `A<B`; one edge per pair | `vector<bool>` indexed by pair | Yes | Kept; duplicate witness test added. |
| `DC(S)=|E(S)|`, not code coverage or any output change | Edge count; no instrumentation | Yes | Kept; benchmark now records its trajectory. |
| Guided method probes shuffled quartets; starts corpus at zero; keeps discoverers of new edges | Pair shuffle, parent perturbation, cached quartet, discoverer corpus | Yes | Kept. Trace now exposes query context, changed mask and coverage increment. |
| Uniform and mutation black-box baselines; same detector and distinct execution budget | Both existed, but only end-of-run data | Partly | Kept paper policies; added per-execution CSV and budget validation. `random` is the old mutation policy. |
| Paper comparison changes query generation as well as feedback | Old analysis mainly attributed differences to guidance | Incomplete | Added same-mutator `mutation_feedback` ablation; interpretation explicitly separates the two effects. |
| Three AND pairs, two distractor bits; independent-output control | Both present; exhaustive assertion | Yes | Kept; added constant, direct, nested, and rare-bug controls. |
| True edge set known only for evaluation | Oracle/edge assertions were in benchmark, not fuzzer | Yes | Kept; each target is exhaustively checked before measured runs. No reference edge enters `run`. |
| Per-execution efficiency | Only final edges at separate budgets | Incomplete | Added progress rows, first discovery, half coverage, and normalized area under the coverage curve. |
| Wall-clock and feedback cost | Whole-run elapsed time only | Incomplete | Added target and detector time, complete runtime and throughput. Microsecond values are sensitive to machine conditions. |
| Bug discovery | Not measured in paper or first pass | Not applicable to paper claim | Added separate synthetic outcomes with one explicit bug condition each; bugs and edges are reported independently. |
| Thirty seeds for extensions | First pass used 30 for extras and 1,000 for paper recreation | Yes, but no event curves | New experiments use 30 seeds at each of 32, 64, 128 and 192 executions. |
| Real-program or AFL comparison | None | Correct | Kept out of the primary claim. |
| ML training, accuracy, epochs, neural baselines | No such executable artifacts found | Correct | Removed leftover ML framing from active experiment documentation. |

## Remaining differences and limits

The paper's primary DepCover scheduler and its mutational baseline do **not** share a mutator. They also start with zero differently: DCF has it as an unexecuted corpus parent, while random executes it first. The faithful policies remain unchanged; `mutation_feedback` is a separate ablation sharing the baseline mutator. The paper specifies a probability of 0.15 for perturbing other bits but not the exact Python PRNG call sequence or mutation duplicate threshold. C++ uses `mt19937_64`, the paper's seed offsets, and a 64-proposal fallback; numerical trials cannot be bitwise identical to Table 1. The implementation accepts at most 16 input bits, and the included eight-bit targets have only 256 distinct inputs. A request for 100,000 *distinct* executions on these targets must be rejected, rather than silently repeated.

The target-time and detector-time counters instrument the runner itself. They do not enter the DCF selection policy. Timing of these tiny in-process targets is exploratory; fixed policy order is rotated across seeds and all policy paths are warmed before recording.
