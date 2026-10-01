# Dependency Coverage Fuzzing: experimental artifact

This repository implements the three-page proof-of-concept paper [`PAPER.pdf`](PAPER.pdf), *Dependency Coverage Fuzzing: Black-Box Exploration by Controlled Input Interactions*. The question tested here is whether controlled, dependency-guided queries find the paper's observable interactions sooner than unguided black-box sampling under equal numbers of **distinct target executions**. The new results also test whether that signal helps find separate, explicit synthetic bugs. See [the audit](docs/PAPER_IMPLEMENTATION_AUDIT.md) for what was retained or changed from the first pass.

## What is covered

For input bits `A < B`, DCF fixes every other bit to one context and observes four inputs. It covers `(A,B)` only if changing `B` leaves the complete outcome unchanged with `A=0` but changes it with `A=1`. A pair counts once, regardless of later witnesses. This is an indexed, observable interaction; the arrow is not a program data-flow claim. See [the exact definition and hand example](docs/DEPENDENCY_COVERAGE_DEFINITION.md). It is distinct from branch, edge, line, and path coverage.

The engine knows only input/outcome pairs. It does not read target source, internal state, branches, or a coverage bitmap. Ground-truth edge sets are obtained by exhaustive enumeration in the **benchmark evaluator** and never passed to the engine. The targets are deterministic and stateless. Bugs are represented by a distinct observable outcome bit, not undefined behavior.

## Search policies and fairness

`dcf` is the paper's policy: shuffle input-bit pairs, choose a corpus parent, perturb other bits at probability 0.15, and request a matched quartet. Cached inputs do not consume another target execution. The corpus begins with zero, even if not executed; an input is added only when its insertion witnesses at least one previously unseen pair. After all pair requests, the remaining budget uses unseen random inputs. Pairs are not prioritized by a learned score.

`random` is the paper's black-box mutation baseline: start by executing zero, choose a prior distinct observation uniformly, and flip one, two or three distinct bits with weights 3:2:1. It retains every distinct input and never uses the detector for selection. `uniform` visits a random permutation of the input domain. All policies run the same detector for measurement. They use the same target, binary input format, seed index, exact target-execution budget, and no timeout because each target is an in-process finite function. Candidate proposals and wall time are recorded separately.

The paper's DCF and mutation policies use different query generators, so their direct comparison measures the complete policies. `mutation_feedback` is an extra ablation that uses the **same mutation operator** as `random` but chooses parents from the discoverer corpus. `fixed_parent` keeps quartet probing but always starts from zero. These are extensions, not changes to paper DCF. They help distinguish corpus effects from query construction.

## Build and run

Requires C++20, CMake 3.16+, and Python 3 standard library for analysis.

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j
ctest --test-dir build --output-on-failure
./build/benchmarks/benchmark --target all --fuzzer all --runs 30 --budgets 32,64,128,192
python3 scripts/summarize.py
python3 scripts/plot.py
```

`scripts/reproduce.sh` runs that sequence. An isolated comparison is:

```bash
./build/benchmarks/benchmark --target and3 --fuzzer dcf --runs 30 --budget 128 --out results/and3_dcf
./build/benchmarks/benchmark --target and3 --fuzzer random --runs 30 --budget 128 --out results/and3_random
```

For sanitizer verification, configure a separate Debug build with `-DDEPCOVER_SANITIZE=ON`. In environments where LeakSanitizer cannot operate under ptrace, run CTest with `ASAN_OPTIONS=detect_leaks=0`; AddressSanitizer and UBSan checks still run.

`--help` lists every CLI option. `--target` accepts `all`, `and3`, `independent`, `constant`, `direct`, `nested_bug`, or `rare_bug`. `--fuzzer` accepts `all`, `dcf`, `random`, `uniform`, `fixed_parent`, or `mutation_feedback`. `--runs` sets independent seed indices; `--seed` sets the base seed, and the paper's formula is `base+1009×trial+k` (`k=0,1,2` for DCF, random, uniform; ablations reuse their parent policy's offset). `--budget` accepts one execution count and `--budgets` accepts comma-separated counts. `--out` is a file prefix for two CSVs. `--trace` prints each executed query with its query context or mutation parent, changed-bit mask, previous observable outcome if cached, new outcome, selected pair, new-dependency flag, and corpus-insertion flag. `--all` remains a legacy alias for all targets and fuzzers. Old `--out path.csv` is interpreted as prefix `path`. No `-t`, `-b`, `-i`, `-T`, `-m`, `-o`, `-s`, or `-q` flags existed in this repository.

## Targets and results

| Target | Experimental role | Exhaustive indexed dependencies | Bug condition |
|---|---|---:|---|
| `and3` | Paper target: three separate AND gates, two irrelevant bits | 3 | None |
| `independent` | Independent output bits; negative interaction control | 0 | None |
| `constant` | No observable changes | 0 | None |
| `direct` | Direct input-to-output effects, with no conditional interaction | 0 | None |
| `nested_bug` | Three-way AND plus separate AND; overlapping rare outcome | 4 | Inputs 0–4 all one |
| `rare_bug` | One direct AND plus a very rare full-input condition | 28 | All eight inputs one |

The reference counts are checked by exhaustive enumeration before benchmark runs. In `and3`, bits 6 and 7 are irrelevant. In `rare_bug`, the bug outcome itself creates many valid witnesses under the paper's definition; the large reference count does not mean the fuzzer has found many bugs.

New raw data are [per-execution CSV](results/benchmark_progress.csv) and [per-run CSV](results/benchmark_runs.csv). The former preserves coverage, time, behaviors and bugs after **every** target execution. The latter includes final true/false edges, first-event executions and elapsed times, runtime, throughput and normalized coverage area. A blank event time means “not reached within budget”; the summary reports successes over all runs and never drops censored runs from that denominator. Coverage percentage and area are marked `-1` when exhaustive reference size is zero, since division by zero is undefined. Area is `sum_{e=1}^B DC_e / (B × |E_ref|)`, a right-step area over executions; it rewards earlier coverage without asserting any statistical interpretation. The [summary](results/summary.md) and [plots](results/plots/) are generated from these CSVs. Time plots hold each run's final value after that run ends so all runs share one time grid; compare those curves only with this convention in mind. Earlier measurements are isolated in [legacy results](results/legacy/).

The [analysis](results/ANALYSIS.md) reports both wins and losses. In particular, finding more dependencies is not synonymous with finding more bugs or more distinct outcomes. Times on these tiny in-process targets are dominated by detector and harness costs; use execution-based comparisons as the primary result and treat throughput as machine-specific. The input domain is only 256 distinct values, so a 100,000 distinct-execution budget is impossible here. The detector's pair scan is quadratic in input width and currently accepts at most 16 bits. Exact outcome equality assumes deterministic targets; noisy, stateful, byte-stream, and real-program targets require additional work. Neither AFL nor other instrumented fuzzers are claimed as the primary baseline.

## License

Copyright 2026 Facundo Gomez Prates. Licensed under the [Apache License, Version 2.0](LICENSE). See [NOTICE](NOTICE) for attribution.
