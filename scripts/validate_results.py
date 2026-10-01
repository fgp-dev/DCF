#!/usr/bin/env python3
"""Check consistency between the raw per-execution and per-run benchmark files."""
import argparse
import csv
from collections import defaultdict


def key(row):
    return row["target"], row["fuzzer"], row["trial"], row["seed"], row["budget"]


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--progress", default="results/benchmark_progress.csv")
    parser.add_argument("--runs", default="results/benchmark_runs.csv")
    args = parser.parse_args()
    grouped = defaultdict(list)
    with open(args.progress, newline="", encoding="utf-8") as handle:
        for row in csv.DictReader(handle):
            grouped[key(row)].append(row)
    with open(args.runs, newline="", encoding="utf-8") as handle:
        runs = list(csv.DictReader(handle))
    if len(runs) != len(grouped):
        raise SystemExit("run/progress group count mismatch")
    for run in runs:
        rows = grouped.pop(key(run), None)
        budget = int(run["budget"])
        if rows is None or len(rows) != budget or int(run["target_executions"]) != budget:
            raise SystemExit(f"budget mismatch: {key(run)}")
        dependencies = bugs = behaviors = 0
        seen_outcomes = set()
        for i, row in enumerate(rows, 1):
            if int(row["execution"]) != i:
                raise SystemExit(f"execution sequence mismatch: {key(run)}")
            d = int(row["unique_dependencies"])
            b = int(row["bugs_found"])
            if d < dependencies or b < bugs:
                raise SystemExit(f"nonmonotone progress: {key(run)}")
            dependencies, bugs = d, b
            seen_outcomes.add(row["outcome"])
            if int(row["unique_behaviors"]) != len(seen_outcomes):
                raise SystemExit(f"behavior mismatch: {key(run)}")
        if dependencies != int(run["final_dependencies"]) or bugs != int(run["bugs_found"]) or \
           len(seen_outcomes) != int(run["unique_behaviors"]):
            raise SystemExit(f"final summary mismatch: {key(run)}")
    if grouped:
        raise SystemExit("orphan progress rows")
    print(f"validated {len(runs)} runs")


if __name__ == "__main__":
    main()
