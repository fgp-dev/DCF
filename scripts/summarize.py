#!/usr/bin/env python3
"""Summarize run-level fuzzing measurements; never discard censored events."""
import argparse
import csv
import math
import statistics as st
from collections import defaultdict
from pathlib import Path


def describe(values):
    if not values:
        return "N/A"
    mean = st.mean(values)
    sd = st.stdev(values) if len(values) > 1 else 0.0
    half = 1.96 * sd / math.sqrt(len(values))
    return (f"{mean:.3f} [{mean-half:.3f}, {mean+half:.3f}]; "
            f"median {st.median(values):.3f}, SD {sd:.3f}, "
            f"min {min(values):.3f}, max {max(values):.3f}")


def wilson(successes, total):
    """95% Wilson interval for a binomial success fraction."""
    z = 1.96
    p = successes / total
    denominator = 1 + z*z/total
    center = (p + z*z/(2*total)) / denominator
    half = z*math.sqrt(p*(1-p)/total + z*z/(4*total*total)) / denominator
    return f"[{center-half:.3f}, {center+half:.3f}]"


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--runs", default="results/benchmark_runs.csv")
    parser.add_argument("--out", default="results/summary.md")
    args = parser.parse_args()
    with open(args.runs, newline="", encoding="utf-8") as handle:
        rows = list(csv.DictReader(handle))
    if not rows:
        raise SystemExit("empty run CSV")
    identities = [(r["target"], r["fuzzer"], r["trial"], r["budget"]) for r in rows]
    if len(set(identities)) != len(identities):
        raise SystemExit("duplicate run identity")
    groups = defaultdict(list)
    for row in rows:
        if int(row["target_executions"]) != int(row["budget"]):
            raise SystemExit("unequal execution budget")
        if int(row["false_dependencies"]):
            raise SystemExit("false dependency in run CSV")
        groups[(row["target"], int(row["budget"]), row["fuzzer"])].append(row)
    lines = ["# Fuzzing benchmark summary", "", f"Source: `{args.runs}`; {len(rows)} runs.",
             "95% intervals below use mean ± 1.96×sample SD/√n across seeds on fixed synthetic targets.",
             "They do not measure variation across real programs. Times are machine specific.", ""]
    for key in sorted(groups):
        target, budget, fuzzer = key
        group = groups[key]
        get = lambda field: [float(r[field]) for r in group if r[field] != "" and float(r[field]) >= 0]
        bug_success = sum(bool(r["first_bug_execution"]) for r in group)
        half_success = sum(bool(r["half_coverage_execution"]) for r in group)
        has_bug = target.endswith("_bug")
        has_reference = int(group[0]["reference_dependencies"]) > 0
        lines += [f"## {target} · {fuzzer} · {budget} executions", "",
                  f"Runs: {len(group)}. Reference dependencies: {group[0]['reference_dependencies']}.", "",
                  f"- Final dependencies: {describe(get('final_dependencies'))}",
                  f"- Final dependency coverage: {describe(get('final_dependency_coverage'))}",
                  f"- Normalized coverage area: {describe(get('coverage_auc'))}",
                  f"- Executions per discovered dependency: {describe(get('executions_per_discovered_dependency'))}",
                  f"- Unique behaviors: {describe(get('unique_behaviors'))}",
                  f"- Runtime (µs): {describe(get('runtime_us'))}",
                  f"- Throughput (executions/s): {describe(get('executions_per_second'))}",
                  f"- Target time (µs): {describe(get('target_us'))}",
                  f"- Detector time (µs): {describe(get('feedback_us'))}"]
        if has_bug:
            lines += [f"- Bug success: {bug_success}/{len(group)} (Wilson 95% {wilson(bug_success, len(group))}); first-bug execution among successes: {describe(get('first_bug_execution'))}. "
                      f"Censored at budget: {len(group)-bug_success}.",
                      f"- First-bug elapsed time among successes (µs): {describe(get('first_bug_elapsed_us'))}."]
        else:
            lines.append("- Bug success: N/A (no bug condition in this target).")
        if has_reference:
            lines += [f"- Half-coverage success: {half_success}/{len(group)} (Wilson 95% {wilson(half_success, len(group))}); execution among successes: {describe(get('half_coverage_execution'))}. "
                      f"Censored at budget: {len(group)-half_success}.",
                      f"- Half-coverage elapsed time among successes (µs): {describe(get('half_coverage_elapsed_us'))}."]
        else:
            lines.append("- Half-coverage success: N/A (reference set is empty).")
        lines.append("")
    output = Path(args.out)
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text("\n".join(lines), encoding="utf-8")
    print(f"wrote {output}")


if __name__ == "__main__":
    main()
