#!/usr/bin/env python3
"""Generate SVG plots from raw execution and run CSVs, using only stdlib."""
import argparse
import csv
import statistics as st
from collections import defaultdict
from pathlib import Path

COLORS = {"dcf": "#1769aa", "random": "#c45100", "uniform": "#40916c",
          "fixed_parent": "#7b2cbf", "mutation_feedback": "#bc5090"}


def draw(path, title, xlabel, ylabel, series, xmax, ymax, labels=None):
    left, right, top, bottom = 82, 780, 48, 420
    xmax, ymax = max(xmax, 1), max(ymax, 1)
    sx = lambda x: left + x * (right - left) / xmax
    sy = lambda y: bottom - y * (bottom - top) / ymax
    parts = ['<svg xmlns="http://www.w3.org/2000/svg" width="900" height="510" viewBox="0 0 900 510">',
             '<rect width="900" height="510" fill="white"/>',
             f'<text x="450" y="27" text-anchor="middle" font-size="17" font-family="sans-serif">{title}</text>',
             f'<path d="M {left} {top} V {bottom} H {right}" fill="none" stroke="black"/>']
    for i in range(6):
        xx, yy = sx(xmax * i / 5), sy(ymax * i / 5)
        parts += [f'<path d="M {xx:.1f} {bottom} v 5" stroke="black"/>',
                  f'<text x="{xx:.1f}" y="{bottom+23}" text-anchor="middle" font-size="11">{xmax*i/5:.1f}</text>',
                  f'<path d="M {left} {yy:.1f} H {right}" stroke="#ddd"/>',
                  f'<text x="{left-9}" y="{yy+4:.1f}" text-anchor="end" font-size="11">{ymax*i/5:.2f}</text>']
    for j, (name, points) in enumerate(sorted(series.items())):
        if not points:
            continue
        color = COLORS.get(name, "#444")
        xy = " ".join(f"{sx(x):.1f},{sy(y):.1f}" for x, y in points)
        parts += [f'<polyline points="{xy}" fill="none" stroke="{color}" stroke-width="2.5"/>',
                  f'<text x="{right+8}" y="{top+18*j}" font-size="11" fill="{color}">{name}</text>']
        if len(points) == 1:
            parts.append(f'<circle cx="{sx(points[0][0]):.1f}" cy="{sy(points[0][1]):.1f}" r="6" fill="{color}"/>')
    parts += [f'<text x="450" y="485" text-anchor="middle" font-size="13">{xlabel}</text>',
              f'<text transform="translate(18 230) rotate(-90)" text-anchor="middle" font-size="13">{ylabel}</text>',
              '</svg>']
    path.write_text("\n".join(parts) + "\n", encoding="utf-8")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--progress", default="results/benchmark_progress.csv")
    parser.add_argument("--runs", default="results/benchmark_runs.csv")
    parser.add_argument("--outdir", default="results/plots")
    parser.add_argument("--budget", type=int, default=128)
    args = parser.parse_args()
    outdir = Path(args.outdir)
    outdir.mkdir(parents=True, exist_ok=True)
    grouped = defaultdict(list)
    with open(args.progress, newline="", encoding="utf-8") as handle:
        for row in csv.DictReader(handle):
            if int(row["budget"]) == args.budget:
                grouped[(row["target"], row["fuzzer"], row["trial"])].append(row)
    run_groups = defaultdict(list)
    with open(args.runs, newline="", encoding="utf-8") as handle:
        for row in csv.DictReader(handle):
            if int(row["budget"]) == args.budget:
                run_groups[(row["target"], row["fuzzer"])].append(row)
    for target in sorted({key[0] for key in grouped}):
        names = sorted({key[1] for key in grouped if key[0] == target})
        reference = int(next(rows[0]["reference_dependencies"] for key, rows in grouped.items() if key[0] == target))
        by_execution, by_time, by_bug = {}, {}, {}
        max_time = max(float(rows[-1]["elapsed_us"]) for key, rows in grouped.items() if key[0] == target)
        for name in names:
            trials = [rows for (t, f, _), rows in grouped.items() if t == target and f == name]
            if reference:
                by_execution[name] = [(i, st.mean(float(rows[i-1]["dependency_coverage"]) for rows in trials))
                                      for i in range(1, args.budget + 1)]
                samples = []
                for j in range(61):
                    time = max_time * j / 60
                    values = []
                    for rows in trials:
                        value = 0.0
                        for row in rows:
                            if float(row["elapsed_us"]) > time:
                                break
                            value = float(row["dependency_coverage"])
                        values.append(value)
                    samples.append((time, st.mean(values)))
                by_time[name] = samples
            by_bug[name] = [(i, st.mean(float(rows[i-1]["bugs_found"]) for rows in trials))
                            for i in range(1, args.budget + 1)]
        if reference:
            draw(outdir / f"{target}_coverage_executions.svg", f"{target}: coverage over executions",
                 "Distinct target executions", "Mean dependency coverage", by_execution, args.budget, 1)
            draw(outdir / f"{target}_coverage_time.svg", f"{target}: coverage over time",
                 "Elapsed microseconds", "Mean dependency coverage", by_time, max_time, 1)
        if any(int(r["bugs_found"]) for name in names for r in run_groups[target, name]):
            draw(outdir / f"{target}_bugs_executions.svg", f"{target}: bug discovery",
                 "Distinct target executions", "Fraction of runs finding bug", by_bug, args.budget, 1)
            # Censored runs remain in the denominator of this cumulative incidence curve.
            first = {name: [(i, sum(r["first_bug_execution"] != "" and
                                     int(r["first_bug_execution"]) <= i for r in run_groups[target, name]) /
                              len(run_groups[target, name])) for i in range(1, args.budget + 1)]
                     for name in names}
            draw(outdir / f"{target}_first_bug.svg", f"{target}: first bug by execution",
                 "Distinct target executions", "Successful runs / all runs", first, args.budget, 1)
        throughput = {name: [(j+1, st.mean(float(r["executions_per_second"])
                                          for r in run_groups[target, name]))]
                      for j, name in enumerate(names)}
        draw(outdir / f"{target}_throughput.svg", f"{target}: throughput",
             "Fuzzer index (alphabetical legend)", "Mean executions / second", throughput,
             len(names), max(y for points in throughput.values() for _, y in points) * 1.1)
    print(f"wrote plots in {outdir}")


if __name__ == "__main__":
    main()
