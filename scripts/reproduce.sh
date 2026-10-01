#!/usr/bin/env bash
set -euo pipefail
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j
ctest --test-dir build --output-on-failure
./build/benchmarks/benchmark --target all --fuzzer all --runs 30 --budgets 32,64,128,192
python3 scripts/validate_results.py
python3 scripts/summarize.py
python3 scripts/plot.py
