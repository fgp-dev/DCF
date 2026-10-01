# Second-pass result provenance

- Source: current C++ source tree, `PAPER.pdf` dated 1 October 2026.
- Compiler: GCC 13.3.0; C++20; CMake Release; benchmark compiled with `-O3 -DNDEBUG`.
- Command: `./build/benchmarks/benchmark --target all --fuzzer all --runs 30 --budgets 32,64,128,192`.
- Base seed: 12345; each trial uses `12345 + 1009×trial + k`, with paper offsets `k=0` for DCF and `fixed_parent`, `k=1` for random and `mutation_feedback`, and `k=2` for uniform.
- Conditions: six eight-bit deterministic targets, five policies, four budgets, 30 trials; 3,600 run rows and 374,400 execution rows.
- `benchmark_runs.csv` SHA-256: `a3f92b99bdf8ad2c114b0db78486c63d2ff736f74fbc9d06cac726e77c760a72`.
- `benchmark_progress.csv` SHA-256: `4927c4e5c48a90f240f7a901da0712cc5ef40410dd9597ecc588e16e9cb6f9bf`.
- Validation: Release CTest passed; `scripts/validate_results.py` accepted all 3,600 runs. Debug CTest with ASan and UBSan passed with `ASAN_OPTIONS=detect_leaks=0`; LeakSanitizer itself cannot run in this sandbox because it is under ptrace.
- Generated files: `summary.md` from `scripts/summarize.py`; `plots/` from `scripts/plot.py --budget 128`; `ANALYSIS.md` interprets these CSVs only.

The prior run used the first-pass benchmark schema and is isolated in `legacy/`. Its numbers must not be pooled with this experiment.
