# Fuzzing benchmark summary

Source: `results/benchmark_runs.csv`; 3600 runs.
95% intervals below use mean ± 1.96×sample SD/√n across seeds on fixed synthetic targets.
They do not measure variation across real programs. Times are machine specific.

## and3 · dcf · 32 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 1.900 [1.628, 2.172]; median 2.000, SD 0.759, min 1.000, max 3.000
- Final dependency coverage: 0.633 [0.543, 0.724]; median 0.667, SD 0.253, min 0.333, max 1.000
- Normalized coverage area: 0.253 [0.204, 0.302]; median 0.250, SD 0.136, min 0.042, max 0.469
- Executions per discovered dependency: 20.089 [16.932, 23.246]; median 16.000, SD 8.823, min 10.667, max 32.000
- Unique behaviors: 3.867 [3.506, 4.227]; median 4.000, SD 1.008, min 2.000, max 6.000
- Runtime (µs): 45.288 [44.451, 46.126]; median 44.824, SD 2.341, min 42.140, max 53.691
- Throughput (executions/s): 708261.270 [696190.217, 720332.324]; median 713903.586, SD 33732.593, min 596003.055, max 759373.517
- Target time (µs): 0.927 [0.917, 0.937]; median 0.923, SD 0.028, min 0.872, max 1.032
- Detector time (µs): 38.402 [37.656, 39.147]; median 38.069, SD 2.083, min 35.137, max 47.068
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 20/30 (Wilson 95% [0.488, 0.808]); execution among successes: 24.200 [21.861, 26.539]; median 24.000, SD 5.337, min 12.000, max 31.000. Censored at budget: 10.
- Half-coverage elapsed time among successes (µs): 34.082 [30.458, 37.706]; median 33.608, SD 8.269, min 16.922, max 47.249.

## and3 · fixed_parent · 32 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 1.867 [1.589, 2.144]; median 2.000, SD 0.776, min 0.000, max 3.000
- Final dependency coverage: 0.622 [0.530, 0.715]; median 0.667, SD 0.259, min 0.000, max 1.000
- Normalized coverage area: 0.260 [0.201, 0.319]; median 0.250, SD 0.165, min 0.000, max 0.625
- Executions per discovered dependency: 19.310 [16.311, 22.309]; median 16.000, SD 8.239, min 10.667, max 32.000
- Unique behaviors: 3.600 [3.253, 3.947]; median 4.000, SD 0.968, min 2.000, max 6.000
- Runtime (µs): 44.677 [43.996, 45.359]; median 44.319, SD 1.905, min 41.538, max 51.127
- Throughput (executions/s): 717451.975 [706981.772, 727922.179]; median 722038.402, SD 29259.014, min 625892.386, max 770378.930
- Target time (µs): 0.941 [0.925, 0.958]; median 0.932, SD 0.045, min 0.891, max 1.144
- Detector time (µs): 37.954 [37.336, 38.573]; median 37.612, SD 1.729, min 35.266, max 43.854
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 21/30 (Wilson 95% [0.521, 0.833]); execution among successes: 23.095 [20.387, 25.803]; median 25.000, SD 6.332, min 12.000, max 32.000. Censored at budget: 9.
- Half-coverage elapsed time among successes (µs): 32.094 [28.212, 35.975]; median 32.812, SD 9.074, min 15.800, max 46.798.

## and3 · mutation_feedback · 32 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 1.600 [1.324, 1.876]; median 1.500, SD 0.770, min 0.000, max 3.000
- Final dependency coverage: 0.533 [0.441, 0.625]; median 0.500, SD 0.257, min 0.000, max 1.000
- Normalized coverage area: 0.163 [0.126, 0.200]; median 0.146, SD 0.104, min 0.000, max 0.365
- Executions per discovered dependency: 22.989 [19.703, 26.274]; median 16.000, SD 9.027, min 10.667, max 32.000
- Unique behaviors: 3.633 [3.360, 3.907]; median 4.000, SD 0.765, min 2.000, max 5.000
- Runtime (µs): 47.135 [46.400, 47.871]; median 46.694, SD 2.056, min 44.314, max 55.465
- Throughput (executions/s): 680038.040 [670302.733, 689773.347]; median 685320.601, SD 27205.343, min 576940.413, max 722119.420
- Target time (µs): 0.944 [0.927, 0.961]; median 0.936, SD 0.047, min 0.871, max 1.083
- Detector time (µs): 38.656 [38.007, 39.304]; median 38.459, SD 1.812, min 36.489, max 46.256
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 15/30 (Wilson 95% [0.332, 0.668]); execution among successes: 26.467 [24.086, 28.847]; median 29.000, SD 4.704, min 19.000, max 32.000. Censored at budget: 15.
- Half-coverage elapsed time among successes (µs): 38.429 [34.702, 42.156]; median 42.510, SD 7.365, min 26.941, max 46.999.

## and3 · random · 32 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 0.667 [0.395, 0.938]; median 0.500, SD 0.758, min 0.000, max 2.000
- Final dependency coverage: 0.222 [0.132, 0.313]; median 0.167, SD 0.253, min 0.000, max 0.667
- Normalized coverage area: 0.082 [0.037, 0.127]; median 0.005, SD 0.126, min 0.000, max 0.417
- Executions per discovered dependency: 26.667 [22.716, 30.618]; median 32.000, SD 7.807, min 16.000, max 32.000
- Unique behaviors: 5.467 [5.009, 5.924]; median 5.500, SD 1.279, min 3.000, max 8.000
- Runtime (µs): 48.419 [47.545, 49.293]; median 48.286, SD 2.442, min 44.043, max 56.597
- Throughput (executions/s): 662463.889 [650940.972, 673986.807]; median 662718.832, SD 32200.826, min 565400.993, max 726562.677
- Target time (µs): 0.930 [0.915, 0.945]; median 0.923, SD 0.042, min 0.861, max 1.082
- Detector time (µs): 41.062 [40.231, 41.893]; median 41.140, SD 2.322, min 36.599, max 49.015
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 5/30 (Wilson 95% [0.073, 0.336]); execution among successes: 25.800 [20.277, 31.323]; median 27.000, SD 6.301, min 17.000, max 32.000. Censored at budget: 25.
- Half-coverage elapsed time among successes (µs): 37.769 [28.746, 46.793]; median 38.262, SD 10.294, min 22.953, max 48.392.

## and3 · uniform · 32 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 0.033 [-0.032, 0.099]; median 0.000, SD 0.183, min 0.000, max 1.000
- Final dependency coverage: 0.011 [-0.011, 0.033]; median 0.000, SD 0.061, min 0.000, max 0.333
- Normalized coverage area: 0.002 [-0.002, 0.007]; median 0.000, SD 0.013, min 0.000, max 0.073
- Executions per discovered dependency: 32.000 [32.000, 32.000]; median 32.000, SD 0.000, min 32.000, max 32.000
- Unique behaviors: 7.067 [6.819, 7.314]; median 7.000, SD 0.691, min 6.000, max 8.000
- Runtime (µs): 48.100 [47.306, 48.894]; median 47.569, SD 2.220, min 45.376, max 56.897
- Throughput (executions/s): 666532.817 [656474.205, 676591.428]; median 672699.977, SD 28108.818, min 562419.811, max 705218.618
- Target time (µs): 0.931 [0.915, 0.947]; median 0.923, SD 0.045, min 0.841, max 1.073
- Detector time (µs): 42.767 [42.040, 43.494]; median 42.425, SD 2.032, min 40.115, max 51.155
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## and3 · dcf · 64 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 2.967 [2.901, 3.032]; median 3.000, SD 0.183, min 2.000, max 3.000
- Final dependency coverage: 0.989 [0.967, 1.011]; median 1.000, SD 0.061, min 0.667, max 1.000
- Normalized coverage area: 0.553 [0.511, 0.596]; median 0.562, SD 0.118, min 0.339, max 0.729
- Executions per discovered dependency: 21.689 [20.992, 22.386]; median 21.333, SD 1.947, min 21.333, max 32.000
- Unique behaviors: 5.600 [5.253, 5.947]; median 5.000, SD 0.968, min 4.000, max 7.000
- Runtime (µs): 88.688 [87.194, 90.182]; median 87.796, SD 4.176, min 82.466, max 100.189
- Throughput (executions/s): 723102.600 [711505.691, 734699.508]; median 728962.633, SD 32407.595, min 638792.682, max 776077.414
- Target time (µs): 2.019 [1.751, 2.288]; median 1.829, SD 0.750, min 1.732, max 5.851
- Detector time (µs): 75.813 [74.574, 77.053]; median 75.282, SD 3.464, min 70.209, max 84.116
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 28.833 [25.884, 31.783]; median 29.000, SD 8.242, min 12.000, max 47.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 40.576 [36.523, 44.629]; median 41.163, SD 11.326, min 19.968, max 64.242.

## and3 · fixed_parent · 64 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 3.000 [3.000, 3.000]; median 3.000, SD 0.000, min 3.000, max 3.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.582 [0.541, 0.622]; median 0.555, SD 0.113, min 0.349, max 0.812
- Executions per discovered dependency: 21.333 [21.333, 21.333]; median 21.333, SD 0.000, min 21.333, max 21.333
- Unique behaviors: 5.567 [5.260, 5.874]; median 6.000, SD 0.858, min 4.000, max 7.000
- Runtime (µs): 88.460 [86.621, 90.300]; median 86.689, SD 5.141, min 83.137, max 102.003
- Throughput (executions/s): 725696.522 [711609.393, 739783.650]; median 738275.852, SD 39366.520, min 627432.526, max 769813.681
- Target time (µs): 1.888 [1.821, 1.955]; median 1.829, SD 0.186, min 1.762, max 2.505
- Detector time (µs): 75.209 [73.687, 76.731]; median 74.020, SD 4.253, min 71.097, max 85.749
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 27.200 [24.173, 30.227]; median 27.500, SD 8.458, min 12.000, max 44.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 38.630 [34.356, 42.903]; median 38.633, SD 11.943, min 16.131, max 69.942.

## and3 · mutation_feedback · 64 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 2.900 [2.791, 3.009]; median 3.000, SD 0.305, min 2.000, max 3.000
- Final dependency coverage: 0.967 [0.930, 1.003]; median 1.000, SD 0.102, min 0.667, max 1.000
- Normalized coverage area: 0.489 [0.454, 0.524]; median 0.484, SD 0.097, min 0.286, max 0.682
- Executions per discovered dependency: 22.400 [21.235, 23.565]; median 21.333, SD 3.255, min 21.333, max 32.000
- Unique behaviors: 5.433 [5.099, 5.768]; median 5.000, SD 0.935, min 4.000, max 7.000
- Runtime (µs): 96.770 [94.452, 99.087]; median 93.953, SD 6.477, min 89.739, max 112.593
- Throughput (executions/s): 664011.040 [649340.574, 678681.506]; median 681195.438, SD 40996.659, min 568418.996, max 713179.331
- Target time (µs): 1.917 [1.842, 1.993]; median 1.841, SD 0.212, min 1.754, max 2.588
- Detector time (µs): 76.897 [75.274, 78.519]; median 75.236, SD 4.533, min 71.991, max 90.659
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 32.333 [29.693, 34.974]; median 33.000, SD 7.378, min 19.000, max 46.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 48.730 [44.691, 52.769]; median 49.709, SD 11.287, min 27.051, max 66.315.

## and3 · random · 64 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 1.867 [1.545, 2.189]; median 2.000, SD 0.900, min 0.000, max 3.000
- Final dependency coverage: 0.622 [0.515, 0.730]; median 0.667, SD 0.300, min 0.000, max 1.000
- Normalized coverage area: 0.254 [0.194, 0.314]; median 0.258, SD 0.168, min 0.000, max 0.583
- Executions per discovered dependency: 38.095 [31.695, 44.496]; median 32.000, SD 17.280, min 21.333, max 64.000
- Unique behaviors: 7.000 [6.718, 7.282]; median 7.000, SD 0.788, min 5.000, max 8.000
- Runtime (µs): 96.657 [94.901, 98.414]; median 95.821, SD 4.909, min 88.347, max 111.771
- Throughput (executions/s): 663704.103 [652227.544, 675180.662]; median 667912.052, SD 32071.278, min 572599.333, max 724416.222
- Target time (µs): 1.872 [1.822, 1.923]; median 1.833, SD 0.142, min 1.771, max 2.378
- Detector time (µs): 82.185 [80.682, 83.689]; median 81.741, SD 4.202, min 74.322, max 93.348
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 20/30 (Wilson 95% [0.488, 0.808]); execution among successes: 43.550 [38.031, 49.069]; median 48.500, SD 12.593, min 17.000, max 63.000. Censored at budget: 10.
- Half-coverage elapsed time among successes (µs): 66.487 [57.532, 75.443]; median 72.231, SD 20.434, min 23.545, max 98.916.

## and3 · uniform · 64 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 0.933 [0.669, 1.198]; median 1.000, SD 0.740, min 0.000, max 2.000
- Final dependency coverage: 0.311 [0.223, 0.399]; median 0.333, SD 0.247, min 0.000, max 0.667
- Normalized coverage area: 0.056 [0.032, 0.081]; median 0.031, SD 0.068, min 0.000, max 0.250
- Executions per discovered dependency: 53.333 [46.722, 59.945]; median 64.000, SD 15.457, min 32.000, max 64.000
- Unique behaviors: 7.767 [7.613, 7.921]; median 8.000, SD 0.430, min 7.000, max 8.000
- Runtime (µs): 94.412 [93.165, 95.660]; median 93.612, SD 3.486, min 90.862, max 107.123
- Throughput (executions/s): 678701.331 [670434.815, 686967.847]; median 683673.191, SD 23100.804, min 597444.060, max 704364.861
- Target time (µs): 1.866 [1.808, 1.924]; median 1.829, SD 0.163, min 1.763, max 2.514
- Detector time (µs): 85.610 [84.607, 86.613]; median 84.840, SD 2.803, min 82.505, max 95.551
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 7/30 (Wilson 95% [0.118, 0.409]); execution among successes: 58.143 [53.793, 62.493]; median 58.000, SD 5.872, min 49.000, max 64.000. Censored at budget: 23.
- Half-coverage elapsed time among successes (µs): 84.803 [78.766, 90.840]; median 84.139, SD 8.150, min 71.485, max 93.777.

## and3 · dcf · 128 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 3.000 [3.000, 3.000]; median 3.000, SD 0.000, min 3.000, max 3.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.777 [0.756, 0.798]; median 0.781, SD 0.059, min 0.669, max 0.865
- Executions per discovered dependency: 42.667 [42.667, 42.667]; median 42.667, SD 0.000, min 42.667, max 42.667
- Unique behaviors: 7.767 [7.613, 7.921]; median 8.000, SD 0.430, min 7.000, max 8.000
- Runtime (µs): 164.624 [160.752, 168.496]; median 161.144, SD 10.819, min 153.219, max 197.293
- Throughput (executions/s): 780425.579 [764085.280, 796765.877]; median 794321.207, SD 45663.010, min 648781.254, max 835405.531
- Target time (µs): 3.684 [3.552, 3.815]; median 3.580, SD 0.367, min 3.434, max 4.972
- Detector time (µs): 143.426 [140.533, 146.319]; median 141.197, SD 8.084, min 134.148, max 169.999
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 28.833 [25.884, 31.783]; median 29.000, SD 8.242, min 12.000, max 47.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 42.277 [38.074, 46.480]; median 43.688, SD 11.745, min 17.794, max 66.446.

## and3 · fixed_parent · 128 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 3.000 [3.000, 3.000]; median 3.000, SD 0.000, min 3.000, max 3.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.791 [0.771, 0.811]; median 0.777, SD 0.057, min 0.674, max 0.906
- Executions per discovered dependency: 42.667 [42.667, 42.667]; median 42.667, SD 0.000, min 42.667, max 42.667
- Unique behaviors: 7.767 [7.613, 7.921]; median 8.000, SD 0.430, min 7.000, max 8.000
- Runtime (µs): 163.224 [160.881, 165.567]; median 161.310, SD 6.547, min 155.193, max 182.614
- Throughput (executions/s): 785362.672 [774600.769, 796124.574]; median 793509.292, SD 30074.168, min 700932.021, max 824779.468
- Target time (µs): 3.667 [3.554, 3.780]; median 3.572, SD 0.315, min 3.485, max 4.875
- Detector time (µs): 142.661 [140.747, 144.575]; median 141.356, SD 5.349, min 135.820, max 156.962
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 27.200 [24.173, 30.227]; median 27.500, SD 8.458, min 12.000, max 44.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 39.847 [35.601, 44.093]; median 40.757, SD 11.865, min 17.062, max 63.460.

## and3 · mutation_feedback · 128 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 3.000 [3.000, 3.000]; median 3.000, SD 0.000, min 3.000, max 3.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.743 [0.724, 0.761]; median 0.742, SD 0.051, min 0.620, max 0.841
- Executions per discovered dependency: 42.667 [42.667, 42.667]; median 42.667, SD 0.000, min 42.667, max 42.667
- Unique behaviors: 6.967 [6.747, 7.187]; median 7.000, SD 0.615, min 6.000, max 8.000
- Runtime (µs): 198.178 [194.768, 201.588]; median 197.343, SD 9.529, min 183.958, max 224.253
- Throughput (executions/s): 647288.175 [636461.091, 658115.260]; median 648627.676, SD 30256.320, min 570783.891, max 695811.000
- Target time (µs): 3.635 [3.559, 3.711]; median 3.603, SD 0.213, min 3.416, max 4.637
- Detector time (µs): 139.067 [137.411, 140.724]; median 138.002, SD 4.630, min 132.044, max 151.794
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 32.333 [29.693, 34.974]; median 33.000, SD 7.378, min 19.000, max 46.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 48.555 [44.883, 52.227]; median 49.779, SD 10.262, min 29.165, max 66.927.

## and3 · random · 128 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 3.000 [3.000, 3.000]; median 3.000, SD 0.000, min 3.000, max 3.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.579 [0.538, 0.620]; median 0.582, SD 0.115, min 0.396, max 0.792
- Executions per discovered dependency: 42.667 [42.667, 42.667]; median 42.667, SD 0.000, min 42.667, max 42.667
- Unique behaviors: 7.933 [7.843, 8.024]; median 8.000, SD 0.254, min 7.000, max 8.000
- Runtime (µs): 181.841 [179.479, 184.202]; median 180.361, SD 6.600, min 171.705, max 203.705
- Throughput (executions/s): 704766.905 [696044.187, 713489.623]; median 709702.142, SD 24375.661, min 628359.638, max 745464.605
- Target time (µs): 3.605 [3.535, 3.675]; median 3.567, SD 0.195, min 3.424, max 4.591
- Detector time (µs): 151.022 [149.065, 152.979]; median 149.927, SD 5.469, min 142.237, max 167.312
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 53.300 [46.941, 59.659]; median 52.500, SD 17.771, min 17.000, max 85.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 79.814 [70.693, 88.935]; median 82.681, SD 25.489, min 24.407, max 124.685.

## and3 · uniform · 128 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 3.000 [3.000, 3.000]; median 3.000, SD 0.000, min 3.000, max 3.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.378 [0.343, 0.414]; median 0.402, SD 0.099, min 0.203, max 0.555
- Executions per discovered dependency: 42.667 [42.667, 42.667]; median 42.667, SD 0.000, min 42.667, max 42.667
- Unique behaviors: 7.967 [7.901, 8.032]; median 8.000, SD 0.183, min 7.000, max 8.000
- Runtime (µs): 173.298 [170.907, 175.688]; median 172.245, SD 6.680, min 166.454, max 204.667
- Throughput (executions/s): 739555.010 [730495.023, 748614.998]; median 743125.527, SD 25318.161, min 625406.148, max 768981.220
- Target time (µs): 3.593 [3.512, 3.673]; median 3.537, SD 0.225, min 3.456, max 4.729
- Detector time (µs): 158.149 [155.978, 160.319]; median 157.232, SD 6.065, min 151.498, max 186.045
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 78.900 [73.018, 84.782]; median 77.500, SD 16.437, min 49.000, max 119.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 112.792 [105.338, 120.246]; median 114.231, SD 20.831, min 71.906, max 161.475.

## and3 · dcf · 192 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 3.000 [3.000, 3.000]; median 3.000, SD 0.000, min 3.000, max 3.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.851 [0.837, 0.865]; median 0.854, SD 0.039, min 0.780, max 0.910
- Executions per discovered dependency: 64.000 [64.000, 64.000]; median 64.000, SD 0.000, min 64.000, max 64.000
- Unique behaviors: 7.967 [7.901, 8.032]; median 8.000, SD 0.183, min 7.000, max 8.000
- Runtime (µs): 210.096 [206.465, 213.727]; median 207.196, SD 10.146, min 198.224, max 252.837
- Throughput (executions/s): 915700.233 [901607.410, 929793.057]; median 926659.209, SD 39382.436, min 759382.527, max 968601.178
- Target time (µs): 5.190 [5.128, 5.253]; median 5.143, SD 0.174, min 5.001, max 5.798
- Detector time (µs): 183.636 [180.655, 186.617]; median 181.880, SD 8.331, min 173.250, max 221.237
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 28.833 [25.884, 31.783]; median 29.000, SD 8.242, min 12.000, max 47.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 41.568 [37.156, 45.980]; median 42.776, SD 12.330, min 18.004, max 71.194.

## and3 · fixed_parent · 192 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 3.000 [3.000, 3.000]; median 3.000, SD 0.000, min 3.000, max 3.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.861 [0.847, 0.874]; median 0.852, SD 0.038, min 0.783, max 0.938
- Executions per discovered dependency: 64.000 [64.000, 64.000]; median 64.000, SD 0.000, min 64.000, max 64.000
- Unique behaviors: 7.967 [7.901, 8.032]; median 8.000, SD 0.183, min 7.000, max 8.000
- Runtime (µs): 210.021 [207.460, 212.581]; median 208.608, SD 7.155, min 199.416, max 237.338
- Throughput (executions/s): 915167.284 [904591.496, 925743.072]; median 920385.339, SD 29554.069, min 808972.857, max 962811.409
- Target time (µs): 5.228 [5.121, 5.335]; median 5.152, SD 0.299, min 4.911, max 6.633
- Detector time (µs): 183.891 [181.765, 186.018]; median 182.874, SD 5.942, min 174.465, max 203.407
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 27.200 [24.173, 30.227]; median 27.500, SD 8.458, min 12.000, max 44.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 39.104 [34.835, 43.372]; median 38.463, SD 11.929, min 17.293, max 64.341.

## and3 · mutation_feedback · 192 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 3.000 [3.000, 3.000]; median 3.000, SD 0.000, min 3.000, max 3.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.828 [0.816, 0.841]; median 0.828, SD 0.034, min 0.747, max 0.894
- Executions per discovered dependency: 64.000 [64.000, 64.000]; median 64.000, SD 0.000, min 64.000, max 64.000
- Unique behaviors: 7.833 [7.698, 7.969]; median 8.000, SD 0.379, min 7.000, max 8.000
- Runtime (µs): 379.883 [365.643, 394.124]; median 378.224, SD 39.795, min 322.258, max 504.683
- Throughput (executions/s): 510426.011 [492545.453, 528306.570]; median 507661.080, SD 49967.272, min 380436.829, max 595795.915
- Target time (µs): 5.352 [5.172, 5.531]; median 5.210, SD 0.502, min 4.959, max 7.116
- Detector time (µs): 176.199 [173.294, 179.104]; median 174.406, SD 8.117, min 165.641, max 198.394
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 32.333 [29.693, 34.974]; median 33.000, SD 7.378, min 19.000, max 46.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 49.238 [44.933, 53.542]; median 49.473, SD 12.029, min 27.933, max 73.659.

## and3 · random · 192 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 3.000 [3.000, 3.000]; median 3.000, SD 0.000, min 3.000, max 3.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.719 [0.692, 0.747]; median 0.721, SD 0.077, min 0.597, max 0.861
- Executions per discovered dependency: 64.000 [64.000, 64.000]; median 64.000, SD 0.000, min 64.000, max 64.000
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 242.863 [236.731, 248.995]; median 236.857, SD 17.136, min 229.073, max 297.101
- Throughput (executions/s): 793881.914 [776469.476, 811294.352]; median 810615.724, SD 48659.108, min 646244.880, max 838160.761
- Target time (µs): 5.360 [5.152, 5.569]; median 5.146, SD 0.582, min 5.031, max 7.220
- Detector time (µs): 193.297 [189.436, 197.159]; median 190.796, SD 10.791, min 181.179, max 227.915
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 53.300 [46.941, 59.659]; median 52.500, SD 17.771, min 17.000, max 85.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 79.932 [70.744, 89.120]; median 79.600, SD 25.676, min 24.516, max 128.983.

## and3 · uniform · 192 executions

Runs: 30. Reference dependencies: 3.

- Final dependencies: 3.000 [3.000, 3.000]; median 3.000, SD 0.000, min 3.000, max 3.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.585 [0.562, 0.609]; median 0.602, SD 0.066, min 0.469, max 0.703
- Executions per discovered dependency: 64.000 [64.000, 64.000]; median 64.000, SD 0.000, min 64.000, max 64.000
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 219.451 [215.971, 222.930]; median 218.252, SD 9.723, min 208.795, max 259.249
- Throughput (executions/s): 876411.728 [863845.437, 888978.018]; median 879717.209, SD 35116.536, min 740600.735, max 919562.250
- Target time (µs): 5.267 [5.112, 5.422]; median 5.166, SD 0.433, min 4.904, max 7.284
- Detector time (µs): 198.114 [195.106, 201.122]; median 196.746, SD 8.405, min 188.512, max 232.779
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 78.900 [73.018, 84.782]; median 77.500, SD 16.437, min 49.000, max 119.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 110.415 [102.721, 118.109]; median 108.415, SD 21.501, min 72.868, max 154.652.

## constant · dcf · 32 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 37.813 [37.111, 38.515]; median 37.105, SD 1.961, min 35.828, max 43.122
- Throughput (executions/s): 848327.897 [833650.446, 863005.348]; median 862420.987, SD 41016.180, min 742080.609, max 893156.191
- Target time (µs): 0.734 [0.723, 0.745]; median 0.731, SD 0.031, min 0.690, max 0.842
- Detector time (µs): 32.181 [31.570, 32.792]; median 31.567, SD 1.707, min 30.176, max 37.662
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · fixed_parent · 32 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 37.989 [37.291, 38.686]; median 37.506, SD 1.950, min 35.667, max 45.005
- Throughput (executions/s): 844340.152 [829985.383, 858694.921]; median 853201.204, SD 40114.444, min 711032.108, max 897187.877
- Target time (µs): 0.727 [0.714, 0.739]; median 0.720, SD 0.035, min 0.651, max 0.821
- Detector time (µs): 32.014 [31.604, 32.425]; median 31.747, SD 1.148, min 30.468, max 34.633
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · mutation_feedback · 32 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 39.454 [38.823, 40.084]; median 39.089, SD 1.762, min 37.491, max 46.237
- Throughput (executions/s): 812506.221 [800614.592, 824397.850]; median 818644.645, SD 33231.191, min 692086.424, max 853538.182
- Target time (µs): 0.731 [0.721, 0.741]; median 0.730, SD 0.028, min 0.681, max 0.802
- Detector time (µs): 31.777 [31.498, 32.056]; median 31.635, SD 0.780, min 30.509, max 34.014
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · random · 32 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 40.488 [39.703, 41.274]; median 39.955, SD 2.195, min 36.960, max 46.949
- Throughput (executions/s): 792482.437 [777889.605, 807075.269]; median 800901.214, SD 40779.710, min 681590.662, max 865800.866
- Target time (µs): 0.734 [0.723, 0.744]; median 0.727, SD 0.030, min 0.690, max 0.791
- Detector time (µs): 34.227 [33.617, 34.837]; median 33.861, SD 1.706, min 30.799, max 38.821
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · uniform · 32 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 39.657 [39.250, 40.063]; median 39.535, SD 1.137, min 37.801, max 42.901
- Throughput (executions/s): 807554.552 [799450.532, 815658.573]; median 809414.563, SD 22646.709, min 745903.359, max 846538.451
- Target time (µs): 0.722 [0.714, 0.730]; median 0.721, SD 0.023, min 0.671, max 0.762
- Detector time (µs): 35.335 [34.966, 35.704]; median 35.319, SD 1.031, min 33.684, max 37.932
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · dcf · 64 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 75.713 [74.332, 77.094]; median 74.561, SD 3.860, min 70.683, max 91.513
- Throughput (executions/s): 847200.669 [833342.369, 861058.970]; median 858357.602, SD 38727.059, min 699354.190, max 905451.099
- Target time (µs): 1.457 [1.441, 1.472]; median 1.461, SD 0.043, min 1.351, max 1.556
- Detector time (µs): 64.818 [63.647, 65.990]; median 63.864, SD 3.274, min 60.234, max 78.720
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · fixed_parent · 64 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 76.031 [74.887, 77.175]; median 75.412, SD 3.198, min 72.517, max 85.882
- Throughput (executions/s): 843127.794 [831091.477, 855164.111]; median 848665.905, SD 33635.522, min 745208.542, max 882551.678
- Target time (µs): 1.463 [1.448, 1.478]; median 1.450, SD 0.043, min 1.391, max 1.590
- Detector time (µs): 65.012 [64.222, 65.802]; median 64.519, SD 2.207, min 62.125, max 71.187
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · mutation_feedback · 64 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 86.719 [83.897, 89.542]; median 84.951, SD 7.888, min 78.919, max 121.570
- Throughput (executions/s): 742735.426 [723326.412, 762144.439]; median 753375.486, SD 54238.542, min 526445.669, max 810958.071
- Target time (µs): 1.471 [1.453, 1.489]; median 1.473, SD 0.050, min 1.371, max 1.593
- Detector time (µs): 64.711 [62.453, 66.969]; median 63.314, SD 6.309, min 60.510, max 94.943
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · random · 64 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 82.521 [81.312, 83.731]; median 81.630, SD 3.380, min 77.877, max 96.111
- Throughput (executions/s): 776716.288 [766228.854, 787203.722]; median 784030.286, SD 29307.164, min 665896.724, max 821808.750
- Target time (µs): 1.460 [1.443, 1.477]; median 1.448, SD 0.048, min 1.375, max 1.582
- Detector time (µs): 70.510 [69.412, 71.608]; median 69.831, SD 3.068, min 65.996, max 83.406
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · uniform · 64 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 80.234 [78.583, 81.885]; median 78.513, SD 4.614, min 76.805, max 95.691
- Throughput (executions/s): 799942.919 [785300.023, 814585.815]; median 815146.526, SD 40919.615, min 668819.429, max 833279.083
- Target time (µs): 1.457 [1.434, 1.480]; median 1.437, SD 0.064, min 1.372, max 1.733
- Detector time (µs): 72.871 [71.416, 74.326]; median 71.444, SD 4.066, min 69.869, max 86.914
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · dcf · 128 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 146.125 [144.045, 148.205]; median 144.057, SD 5.813, min 140.525, max 167.215
- Throughput (executions/s): 877200.688 [865665.266, 888736.111]; median 888537.203, SD 32235.771, min 765481.566, max 910869.952
- Target time (µs): 2.913 [2.875, 2.951]; median 2.885, SD 0.105, min 2.795, max 3.307
- Detector time (µs): 128.616 [126.971, 130.262]; median 127.301, SD 4.598, min 123.883, max 144.665
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · fixed_parent · 128 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 146.890 [145.207, 148.573]; median 145.610, SD 4.703, min 140.896, max 157.628
- Throughput (executions/s): 872234.530 [862578.623, 881890.438]; median 879060.505, SD 26983.461, min 812038.470, max 908471.497
- Target time (µs): 2.910 [2.885, 2.935]; median 2.899, SD 0.069, min 2.785, max 3.079
- Detector time (µs): 129.819 [128.286, 131.351]; median 128.590, SD 4.282, min 124.436, max 140.436
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · mutation_feedback · 128 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 324.494 [315.997, 332.991]; median 319.924, SD 23.744, min 301.590, max 428.609
- Throughput (executions/s): 396164.432 [387481.902, 404846.963]; median 400095.032, SD 24263.356, min 298640.486, max 424417.255
- Target time (µs): 2.947 [2.917, 2.978]; median 2.918, SD 0.085, min 2.846, max 3.208
- Detector time (µs): 120.531 [119.057, 122.004]; median 119.736, SD 4.117, min 115.238, max 134.724
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · random · 128 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 160.789 [159.295, 162.283]; median 161.190, SD 4.175, min 152.808, max 173.958
- Throughput (executions/s): 796581.369 [789368.945, 803793.793]; median 794094.019, SD 20155.139, min 735809.793, max 837652.479
- Target time (µs): 2.929 [2.912, 2.947]; median 2.922, SD 0.050, min 2.836, max 3.036
- Detector time (µs): 135.564 [134.150, 136.978]; median 135.142, SD 3.951, min 127.487, max 147.912
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · uniform · 128 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 152.474 [150.980, 153.967]; median 151.435, SD 4.173, min 146.687, max 166.434
- Throughput (executions/s): 840073.717 [832175.237, 847972.197]; median 845244.528, SD 22072.326, min 769073.627, max 872606.298
- Target time (µs): 2.916 [2.886, 2.945]; median 2.901, SD 0.083, min 2.785, max 3.196
- Detector time (µs): 139.629 [138.201, 141.056]; median 138.742, SD 3.990, min 134.050, max 153.035
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · dcf · 192 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 195.948 [194.305, 197.592]; median 195.750, SD 4.593, min 189.779, max 212.771
- Throughput (executions/s): 980352.987 [972413.114, 988292.860]; median 980845.627, SD 22187.998, min 902378.614, max 1011703.086
- Target time (µs): 4.391 [4.364, 4.419]; median 4.394, SD 0.076, min 4.253, max 4.517
- Detector time (µs): 172.520 [171.032, 174.009]; median 171.986, SD 4.160, min 167.051, max 187.980
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · fixed_parent · 192 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 199.112 [195.445, 202.779]; median 196.291, SD 10.247, min 189.919, max 234.253
- Throughput (executions/s): 966488.762 [950584.379, 982393.146]; median 978139.662, SD 44444.846, min 819626.643, max 1010957.303
- Target time (µs): 4.412 [4.353, 4.470]; median 4.380, SD 0.165, min 4.248, max 5.037
- Detector time (µs): 175.573 [172.655, 178.491]; median 173.217, SD 8.154, min 167.733, max 201.505
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · mutation_feedback · 192 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 597.737 [593.926, 601.548]; median 594.372, SD 10.651, min 576.890, max 617.136
- Throughput (executions/s): 321309.765 [319267.166, 323352.364]; median 323030.022, SD 5708.049, min 311114.568, max 332819.082
- Target time (µs): 4.436 [4.383, 4.490]; median 4.389, SD 0.149, min 4.268, max 4.943
- Detector time (µs): 164.763 [163.237, 166.289]; median 163.036, SD 4.264, min 160.070, max 176.794
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · random · 192 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 223.917 [220.182, 227.652]; median 221.147, SD 10.437, min 215.757, max 272.405
- Throughput (executions/s): 859026.380 [846553.270, 871499.490]; median 868201.263, SD 34856.141, min 704832.878, max 889890.015
- Target time (µs): 4.422 [4.371, 4.473]; median 4.393, SD 0.142, min 4.286, max 5.109
- Detector time (µs): 180.548 [178.104, 182.991]; median 178.995, SD 6.828, min 171.563, max 206.906
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## constant · uniform · 192 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Runtime (µs): 200.922 [198.933, 202.912]; median 199.257, SD 5.560, min 194.878, max 223.533
- Throughput (executions/s): 956257.925 [947346.332, 965169.517]; median 963582.237, SD 24903.470, min 858933.580, max 985231.786
- Target time (µs): 4.373 [4.330, 4.416]; median 4.354, SD 0.121, min 4.231, max 4.829
- Detector time (µs): 182.486 [180.699, 184.272]; median 180.894, SD 4.992, min 177.025, max 202.178
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · dcf · 32 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 6.500 [6.127, 6.873]; median 6.000, SD 1.042, min 4.000, max 8.000
- Runtime (µs): 37.716 [36.884, 38.549]; median 37.005, SD 2.327, min 34.986, max 46.197
- Throughput (executions/s): 851246.395 [834333.052, 868159.738]; median 864748.402, SD 47264.386, min 692685.672, max 914651.575
- Target time (µs): 0.736 [0.723, 0.749]; median 0.726, SD 0.037, min 0.682, max 0.814
- Detector time (µs): 31.955 [31.432, 32.478]; median 31.576, SD 1.462, min 29.647, max 36.103
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · fixed_parent · 32 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 6.300 [5.972, 6.628]; median 6.000, SD 0.915, min 5.000, max 8.000
- Runtime (µs): 37.565 [36.967, 38.162]; median 37.180, SD 1.670, min 35.787, max 43.713
- Throughput (executions/s): 853343.149 [840963.837, 865722.461]; median 860678.344, SD 34594.022, min 732047.675, max 894179.451
- Target time (µs): 0.722 [0.714, 0.730]; median 0.721, SD 0.023, min 0.691, max 0.773
- Detector time (µs): 32.086 [31.547, 32.625]; median 31.639, SD 1.507, min 30.695, max 37.963
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · mutation_feedback · 32 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 6.600 [6.378, 6.822]; median 7.000, SD 0.621, min 5.000, max 8.000
- Runtime (µs): 39.454 [38.850, 40.058]; median 39.224, SD 1.688, min 37.321, max 44.414
- Throughput (executions/s): 812429.646 [800736.008, 824123.284]; median 815827.257, SD 32677.906, min 720493.538, max 857426.114
- Target time (µs): 0.730 [0.720, 0.740]; median 0.727, SD 0.028, min 0.691, max 0.801
- Detector time (µs): 32.013 [31.567, 32.458]; median 31.680, SD 1.245, min 30.199, max 36.085
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · random · 32 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 7.133 [6.856, 7.411]; median 7.000, SD 0.776, min 5.000, max 8.000
- Runtime (µs): 39.997 [39.277, 40.717]; median 39.905, SD 2.011, min 37.009, max 48.621
- Throughput (executions/s): 801815.064 [788804.580, 814825.549]; median 801904.976, SD 36357.836, min 658151.827, max 864654.543
- Target time (µs): 0.734 [0.725, 0.744]; median 0.731, SD 0.026, min 0.690, max 0.792
- Detector time (µs): 34.019 [33.306, 34.731]; median 33.946, SD 1.992, min 30.995, max 42.529
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · uniform · 32 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 7.967 [7.901, 8.032]; median 8.000, SD 0.183, min 7.000, max 8.000
- Runtime (µs): 39.707 [39.167, 40.247]; median 39.600, SD 1.510, min 37.261, max 44.344
- Throughput (executions/s): 806982.390 [796464.649, 817500.131]; median 808092.078, SD 29391.858, min 721630.886, max 858806.795
- Target time (µs): 0.734 [0.723, 0.745]; median 0.730, SD 0.030, min 0.682, max 0.804
- Detector time (µs): 35.405 [34.915, 35.895]; median 35.380, SD 1.369, min 33.044, max 39.946
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · dcf · 64 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 7.667 [7.471, 7.862]; median 8.000, SD 0.547, min 6.000, max 8.000
- Runtime (µs): 76.059 [74.900, 77.217]; median 75.302, SD 3.237, min 71.685, max 87.595
- Throughput (executions/s): 842823.184 [830918.232, 854728.137]; median 849911.265, SD 33268.423, min 730635.310, max 892794.866
- Target time (µs): 1.467 [1.451, 1.483]; median 1.463, SD 0.044, min 1.402, max 1.636
- Detector time (µs): 65.175 [64.124, 66.226]; median 64.523, SD 2.937, min 60.877, max 77.157
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · fixed_parent · 64 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 7.833 [7.698, 7.969]; median 8.000, SD 0.379, min 7.000, max 8.000
- Runtime (µs): 76.898 [75.448, 78.347]; median 76.184, SD 4.050, min 72.787, max 93.146
- Throughput (executions/s): 834272.591 [820186.766, 848358.416]; median 840077.449, SD 39362.878, min 687093.380, max 879277.893
- Target time (µs): 1.474 [1.458, 1.490]; median 1.470, SD 0.045, min 1.403, max 1.572
- Detector time (µs): 66.128 [64.786, 67.471]; median 65.584, SD 3.752, min 62.049, max 82.013
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · mutation_feedback · 64 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 7.633 [7.458, 7.809]; median 8.000, SD 0.490, min 7.000, max 8.000
- Runtime (µs): 87.250 [85.015, 89.486]; median 85.812, SD 6.248, min 78.929, max 111.460
- Throughput (executions/s): 736737.119 [720002.477, 753471.762]; median 745817.256, SD 46765.006, min 574197.021, max 810855.326
- Target time (µs): 1.472 [1.454, 1.490]; median 1.469, SD 0.050, min 1.351, max 1.602
- Detector time (µs): 65.128 [63.629, 66.628]; median 63.724, SD 4.190, min 60.551, max 80.592
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · random · 64 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 7.933 [7.843, 8.024]; median 8.000, SD 0.254, min 7.000, max 8.000
- Runtime (µs): 83.802 [82.292, 85.312]; median 83.212, SD 4.220, min 75.403, max 92.294
- Throughput (executions/s): 765554.952 [751949.420, 779160.484]; median 769130.930, SD 38020.698, min 693436.193, max 848772.595
- Target time (µs): 1.477 [1.460, 1.493]; median 1.474, SD 0.046, min 1.403, max 1.572
- Detector time (µs): 71.498 [70.201, 72.795]; median 71.650, SD 3.624, min 63.401, max 78.950
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · uniform · 64 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 81.122 [79.464, 82.780]; median 79.475, SD 4.633, min 77.476, max 100.920
- Throughput (executions/s): 791103.358 [776985.006, 805221.710]; median 805285.831, SD 39453.776, min 634165.676, max 826062.264
- Target time (µs): 1.473 [1.453, 1.494]; median 1.462, SD 0.057, min 1.363, max 1.621
- Detector time (µs): 73.337 [72.282, 74.392]; median 72.346, SD 2.948, min 70.325, max 82.005
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · dcf · 128 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 149.525 [146.461, 152.589]; median 146.286, SD 8.563, min 141.628, max 175.422
- Throughput (executions/s): 858557.826 [842295.101, 874820.552]; median 874998.700, SD 45446.233, min 729669.027, max 903776.089
- Target time (µs): 2.965 [2.925, 3.005]; median 2.937, SD 0.111, min 2.790, max 3.277
- Detector time (µs): 131.695 [129.055, 134.334]; median 129.026, SD 7.376, min 124.941, max 154.149
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · fixed_parent · 128 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 147.863 [145.537, 150.188]; median 145.851, SD 6.498, min 141.206, max 162.788
- Throughput (executions/s): 867200.129 [854291.740, 880108.517]; median 877611.355, SD 36072.529, min 786298.744, max 906477.062
- Target time (µs): 2.916 [2.896, 2.935]; median 2.899, SD 0.054, min 2.834, max 3.096
- Detector time (µs): 131.694 [129.536, 133.851]; median 130.192, SD 6.030, min 125.284, max 146.229
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · mutation_feedback · 128 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 324.974 [314.618, 335.329]; median 315.405, SD 28.938, min 303.754, max 435.192
- Throughput (executions/s): 396361.172 [385993.037, 406729.306]; median 405827.041, SD 28973.781, min 294123.054, max 421393.628
- Target time (µs): 2.954 [2.910, 2.997]; median 2.924, SD 0.122, min 2.803, max 3.407
- Detector time (µs): 121.211 [119.456, 122.967]; median 120.094, SD 4.906, min 117.286, max 137.465
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · random · 128 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 164.150 [161.877, 166.424]; median 162.652, SD 6.354, min 155.795, max 190.340
- Throughput (executions/s): 780813.997 [770834.807, 790793.187]; median 786957.011, SD 27886.874, min 672480.824, max 821592.477
- Target time (µs): 2.939 [2.911, 2.967]; median 2.940, SD 0.078, min 2.832, max 3.138
- Detector time (µs): 138.077 [136.408, 139.747]; median 136.916, SD 4.666, min 131.394, max 154.930
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · uniform · 128 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 154.165 [152.030, 156.300]; median 152.082, SD 5.966, min 147.929, max 178.858
- Throughput (executions/s): 831382.635 [820824.715, 841940.556]; median 841651.259, SD 29504.138, min 715651.522, max 865279.965
- Target time (µs): 2.945 [2.908, 2.982]; median 2.928, SD 0.103, min 2.820, max 3.336
- Detector time (µs): 140.993 [139.145, 142.841]; median 139.508, SD 5.164, min 135.015, max 162.499
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · dcf · 192 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 197.962 [196.494, 199.431]; median 197.163, SD 4.104, min 192.223, max 208.214
- Throughput (executions/s): 970279.574 [963180.620, 977378.528]; median 973816.924, SD 19838.047, min 922128.195, max 998839.889
- Target time (µs): 4.398 [4.362, 4.435]; median 4.423, SD 0.102, min 4.202, max 4.665
- Detector time (µs): 174.059 [172.697, 175.420]; median 172.767, SD 3.805, min 168.531, max 184.265
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · fixed_parent · 192 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 197.513 [196.155, 198.872]; median 197.052, SD 3.797, min 191.291, max 206.069
- Throughput (executions/s): 972430.887 [965780.268, 979081.506]; median 974366.273, SD 18585.173, min 931726.752, max 1003706.395
- Target time (µs): 4.372 [4.343, 4.401]; median 4.349, SD 0.080, min 4.225, max 4.528
- Detector time (µs): 173.676 [172.376, 174.975]; median 172.851, SD 3.632, min 168.219, max 183.153
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · mutation_feedback · 192 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 596.478 [593.118, 599.838]; median 594.974, SD 9.390, min 579.975, max 616.945
- Throughput (executions/s): 321966.221 [320162.133, 323770.310]; median 322703.530, SD 5041.530, min 311210.886, max 331048.752
- Target time (µs): 4.410 [4.381, 4.440]; median 4.397, SD 0.082, min 4.297, max 4.639
- Detector time (µs): 164.779 [163.619, 165.939]; median 163.887, SD 3.241, min 160.868, max 175.251
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · random · 192 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 223.787 [221.784, 225.790]; median 223.627, SD 5.597, min 213.223, max 234.031
- Throughput (executions/s): 858476.396 [850798.569, 866154.222]; median 858575.364, SD 21455.708, min 820404.134, max 900465.710
- Target time (µs): 4.415 [4.386, 4.444]; median 4.406, SD 0.082, min 4.276, max 4.590
- Detector time (µs): 180.233 [178.506, 181.960]; median 178.506, SD 4.826, min 171.166, max 189.873
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## direct · uniform · 192 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 201.940 [200.456, 203.425]; median 201.070, SD 4.148, min 194.788, max 212.752
- Throughput (executions/s): 951159.759 [944242.643, 958076.874]; median 954891.794, SD 19329.899, min 902459.201, max 985687.003
- Target time (µs): 4.387 [4.354, 4.419]; median 4.382, SD 0.090, min 4.247, max 4.661
- Detector time (µs): 183.322 [181.920, 184.725]; median 182.659, SD 3.920, min 176.435, max 192.206
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · dcf · 32 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 6.367 [6.009, 6.724]; median 6.000, SD 0.999, min 5.000, max 8.000
- Runtime (µs): 42.855 [41.558, 44.151]; median 41.148, SD 3.624, min 38.091, max 53.401
- Throughput (executions/s): 751556.687 [730266.144, 772847.229]; median 777693.780, SD 59496.481, min 599239.715, max 840093.460
- Target time (µs): 1.182 [0.628, 1.736]; median 0.857, SD 1.549, min 0.781, max 9.361
- Detector time (µs): 35.782 [34.849, 36.715]; median 34.853, SD 2.607, min 32.413, max 45.075
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · fixed_parent · 32 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 6.733 [6.395, 7.071]; median 7.000, SD 0.944, min 4.000, max 8.000
- Runtime (µs): 41.703 [40.984, 42.423]; median 41.323, SD 2.012, min 38.963, max 46.097
- Throughput (executions/s): 768989.113 [756178.396, 781799.829]; median 774378.347, SD 35799.584, min 694188.342, max 821291.995
- Target time (µs): 0.883 [0.848, 0.917]; median 0.857, SD 0.097, min 0.782, max 1.122
- Detector time (µs): 35.423 [34.872, 35.974]; median 35.046, SD 1.540, min 33.282, max 38.612
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · mutation_feedback · 32 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 6.533 [6.289, 6.777]; median 6.500, SD 0.681, min 5.000, max 8.000
- Runtime (µs): 44.172 [43.043, 45.301]; median 42.941, SD 3.155, min 41.098, max 52.549
- Throughput (executions/s): 727683.674 [710877.061, 744490.286]; median 745208.704, SD 46966.127, min 608955.451, max 778626.697
- Target time (µs): 0.891 [0.845, 0.937]; median 0.843, SD 0.129, min 0.741, max 1.212
- Detector time (µs): 35.532 [34.808, 36.256]; median 34.727, SD 2.023, min 33.483, max 40.594
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · random · 32 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 7.333 [7.079, 7.588]; median 7.000, SD 0.711, min 6.000, max 8.000
- Runtime (µs): 45.372 [44.068, 46.677]; median 43.863, SD 3.645, min 41.308, max 53.180
- Throughput (executions/s): 709444.183 [690188.482, 728699.884]; median 729544.870, SD 53810.111, min 601729.974, max 774668.345
- Target time (µs): 0.878 [0.841, 0.915]; median 0.837, SD 0.104, min 0.792, max 1.151
- Detector time (µs): 38.391 [37.296, 39.486]; median 37.245, SD 3.061, min 34.277, max 46.099
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · uniform · 32 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 7.967 [7.901, 8.032]; median 8.000, SD 0.183, min 7.000, max 8.000
- Runtime (µs): 45.060 [43.579, 46.541]; median 43.828, SD 4.138, min 40.416, max 61.015
- Throughput (executions/s): 715117.583 [694977.904, 735257.263]; median 730137.968, SD 56280.391, min 524461.198, max 791765.637
- Target time (µs): 0.884 [0.846, 0.923]; median 0.833, SD 0.109, min 0.791, max 1.163
- Detector time (µs): 40.042 [38.698, 41.386]; median 38.713, SD 3.756, min 35.796, max 54.996
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · dcf · 64 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 7.767 [7.613, 7.921]; median 8.000, SD 0.430, min 7.000, max 8.000
- Runtime (µs): 82.482 [80.728, 84.235]; median 80.782, SD 4.900, min 77.226, max 101.242
- Throughput (executions/s): 778303.643 [763445.250, 793162.036]; median 792251.584, SD 41521.821, min 632148.713, max 828736.436
- Target time (µs): 1.692 [1.634, 1.750]; median 1.643, SD 0.162, min 1.553, max 2.265
- Detector time (µs): 70.474 [68.970, 71.978]; median 69.140, SD 4.203, min 65.778, max 85.975
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · fixed_parent · 64 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 7.967 [7.901, 8.032]; median 8.000, SD 0.183, min 7.000, max 8.000
- Runtime (µs): 82.979 [81.636, 84.322]; median 82.260, SD 3.753, min 78.718, max 94.809
- Throughput (executions/s): 772723.168 [760858.543, 784587.793]; median 778021.395, SD 33155.728, min 675041.399, max 813028.786
- Target time (µs): 1.667 [1.637, 1.697]; median 1.653, SD 0.084, min 1.583, max 2.027
- Detector time (µs): 71.356 [70.126, 72.585]; median 70.672, SD 3.435, min 67.310, max 81.092
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · mutation_feedback · 64 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 7.333 [7.162, 7.505]; median 7.000, SD 0.479, min 7.000, max 8.000
- Runtime (µs): 92.832 [91.161, 94.503]; median 92.178, SD 4.670, min 84.931, max 109.066
- Throughput (executions/s): 691010.861 [679234.027, 702787.695]; median 694313.205, SD 32910.397, min 586800.653, max 753552.884
- Target time (µs): 1.711 [1.660, 1.762]; median 1.671, SD 0.142, min 1.583, max 2.258
- Detector time (µs): 68.785 [68.024, 69.546]; median 68.481, SD 2.127, min 65.427, max 74.467
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · random · 64 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 7.900 [7.791, 8.009]; median 8.000, SD 0.305, min 7.000, max 8.000
- Runtime (µs): 89.217 [87.617, 90.816]; median 88.537, SD 4.470, min 80.933, max 100.971
- Throughput (executions/s): 719012.224 [706737.520, 731286.929]; median 722859.635, SD 34301.697, min 633845.362, max 790777.557
- Target time (µs): 1.680 [1.630, 1.729]; median 1.648, SD 0.139, min 1.490, max 2.201
- Detector time (µs): 76.000 [74.693, 77.306]; median 75.892, SD 3.651, min 68.094, max 85.219
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · uniform · 64 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 87.024 [85.492, 88.556]; median 85.436, SD 4.281, min 82.656, max 98.737
- Throughput (executions/s): 737049.657 [724857.299, 749242.016]; median 749101.591, SD 34071.580, min 648186.597, max 774293.457
- Target time (µs): 1.705 [1.652, 1.757]; median 1.653, SD 0.146, min 1.574, max 2.243
- Detector time (µs): 78.780 [77.468, 80.091]; median 77.634, SD 3.665, min 75.024, max 88.457
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · dcf · 128 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 153.083 [151.262, 154.903]; median 151.947, SD 5.087, min 147.289, max 171.805
- Throughput (executions/s): 836992.136 [827585.487, 846398.785]; median 842401.480, SD 26286.908, min 745030.703, max 869039.779
- Target time (µs): 3.264 [3.187, 3.342]; median 3.207, SD 0.216, min 3.074, max 4.258
- Detector time (µs): 135.337 [133.791, 136.883]; median 134.038, SD 4.320, min 130.165, max 150.464
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · fixed_parent · 128 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 153.917 [152.078, 155.756]; median 151.972, SD 5.139, min 148.170, max 172.626
- Throughput (executions/s): 832460.185 [823106.444, 841813.926]; median 842261.293, SD 26139.056, min 741487.377, max 863872.579
- Target time (µs): 3.262 [3.187, 3.338]; median 3.212, SD 0.211, min 3.109, max 4.143
- Detector time (µs): 136.496 [134.879, 138.113]; median 134.906, SD 4.519, min 132.004, max 152.906
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · mutation_feedback · 128 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 334.156 [329.757, 338.556]; median 331.275, SD 12.294, min 318.823, max 379.747
- Throughput (executions/s): 383524.417 [378785.380, 388263.455]; median 386385.647, SD 13243.253, min 337066.521, max 401476.681
- Target time (µs): 3.436 [3.075, 3.796]; median 3.216, SD 1.007, min 3.107, max 8.697
- Detector time (µs): 126.422 [125.278, 127.565]; median 125.626, SD 3.196, min 122.210, max 136.321
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · random · 128 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 171.129 [169.196, 173.061]; median 169.650, SD 5.400, min 162.096, max 185.591
- Throughput (executions/s): 748674.975 [740451.559, 756898.391]; median 754509.165, SD 22980.360, min 689688.616, max 789655.513
- Target time (µs): 3.239 [3.204, 3.273]; median 3.224, SD 0.096, min 3.106, max 3.621
- Detector time (µs): 144.637 [142.880, 146.394]; median 143.489, SD 4.909, min 135.886, max 158.257
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · uniform · 128 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 160.356 [159.061, 161.652]; median 159.421, SD 3.621, min 155.734, max 170.292
- Throughput (executions/s): 798606.350 [792297.088, 804915.613]; median 802903.455, SD 17631.253, min 751650.107, max 821914.290
- Target time (µs): 3.233 [3.199, 3.268]; median 3.232, SD 0.096, min 3.063, max 3.526
- Detector time (µs): 146.946 [145.657, 148.236]; median 146.079, SD 3.604, min 142.362, max 156.872
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · dcf · 192 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 199.537 [196.867, 202.208]; median 197.698, SD 7.462, min 190.230, max 225.075
- Throughput (executions/s): 963430.626 [951483.467, 975377.785]; median 971178.602, SD 33386.371, min 853048.984, max 1009304.526
- Target time (µs): 4.709 [4.597, 4.822]; median 4.652, SD 0.314, min 4.426, max 6.190
- Detector time (µs): 175.429 [173.246, 177.612]; median 173.981, SD 6.101, min 167.266, max 198.125
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · fixed_parent · 192 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 199.933 [198.265, 201.602]; median 198.966, SD 4.663, min 193.135, max 211.129
- Throughput (executions/s): 960820.412 [952886.678, 968754.145]; median 964990.283, SD 22170.841, min 909396.625, max 994123.282
- Target time (µs): 4.916 [4.484, 5.349]; median 4.678, SD 1.208, min 4.498, max 11.277
- Detector time (µs): 175.778 [174.621, 176.935]; median 175.127, SD 3.233, min 170.661, max 183.123
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · mutation_feedback · 192 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 609.140 [598.707, 619.574]; median 604.466, SD 29.155, min 582.099, max 740.508
- Throughput (executions/s): 315810.690 [311055.996, 320565.384]; median 317637.142, SD 13287.007, min 259281.466, max 329840.800
- Target time (µs): 4.720 [4.629, 4.811]; median 4.645, SD 0.255, min 4.517, max 5.790
- Detector time (µs): 167.699 [165.532, 169.866]; median 166.021, SD 6.056, min 161.818, max 193.523
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · random · 192 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 225.171 [223.609, 226.733]; median 225.536, SD 4.365, min 215.577, max 232.529
- Throughput (executions/s): 852997.591 [847018.649, 858976.534]; median 851305.342, SD 16708.173, min 825703.461, max 890633.045
- Target time (µs): 4.861 [4.482, 5.240]; median 4.662, SD 1.059, min 4.494, max 10.447
- Detector time (µs): 182.021 [180.699, 183.343]; median 182.794, SD 3.694, min 172.963, max 188.246
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## independent · uniform · 192 executions

Runs: 30. Reference dependencies: 0.

- Final dependencies: 0.000 [0.000, 0.000]; median 0.000, SD 0.000, min 0.000, max 0.000
- Final dependency coverage: N/A
- Normalized coverage area: N/A
- Executions per discovered dependency: N/A
- Unique behaviors: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000
- Runtime (µs): 204.549 [202.832, 206.265]; median 204.086, SD 4.796, min 197.643, max 214.345
- Throughput (executions/s): 939143.255 [931381.396, 946905.113]; median 940785.978, SD 21690.536, min 895752.175, max 971448.521
- Target time (µs): 4.681 [4.623, 4.739]; median 4.673, SD 0.162, min 4.424, max 5.090
- Detector time (µs): 185.505 [183.923, 187.087]; median 185.028, SD 4.421, min 179.022, max 195.324
- Bug success: N/A (no bug condition in this target).
- Half-coverage success: N/A (reference set is empty).

## nested_bug · dcf · 32 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 0.967 [0.635, 1.299]; median 1.000, SD 0.928, min 0.000, max 3.000
- Final dependency coverage: 0.242 [0.159, 0.325]; median 0.250, SD 0.232, min 0.000, max 0.750
- Normalized coverage area: 0.091 [0.061, 0.122]; median 0.094, SD 0.085, min 0.000, max 0.344
- Executions per discovered dependency: 26.400 [22.498, 30.302]; median 32.000, SD 8.903, min 10.667, max 32.000
- Unique behaviors: 2.133 [1.856, 2.411]; median 2.000, SD 0.776, min 1.000, max 4.000
- Runtime (µs): 37.652 [36.886, 38.417]; median 37.151, SD 2.139, min 35.196, max 46.037
- Throughput (executions/s): 852234.342 [836928.316, 867540.369]; median 861361.220, SD 42772.735, min 695093.077, max 909194.227
- Target time (µs): 0.754 [0.741, 0.766]; median 0.747, SD 0.036, min 0.711, max 0.884
- Detector time (µs): 32.000 [31.326, 32.674]; median 31.565, SD 1.884, min 29.544, max 40.212
- Bug success: 3/30 (Wilson 95% [0.035, 0.256]); first-bug execution among successes: 25.333 [19.638, 31.029]; median 26.000, SD 5.033, min 20.000, max 30.000. Censored at budget: 27.
- First-bug elapsed time among successes (µs): 31.977 [23.403, 40.551]; median 34.244, SD 7.577, min 23.525, max 38.162.
- Half-coverage success: 6/30 (Wilson 95% [0.095, 0.373]); execution among successes: 27.333 [23.490, 31.176]; median 30.000, SD 4.803, min 19.000, max 31.000. Censored at budget: 24.
- Half-coverage elapsed time among successes (µs): 33.002 [27.113, 38.892]; median 34.395, SD 7.361, min 22.162, max 43.913.

## nested_bug · fixed_parent · 32 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 0.733 [0.525, 0.942]; median 1.000, SD 0.583, min 0.000, max 2.000
- Final dependency coverage: 0.183 [0.131, 0.236]; median 0.250, SD 0.146, min 0.000, max 0.500
- Normalized coverage area: 0.072 [0.047, 0.097]; median 0.070, SD 0.069, min 0.000, max 0.203
- Executions per discovered dependency: 30.400 [28.242, 32.558]; median 32.000, SD 4.925, min 16.000, max 32.000
- Unique behaviors: 1.933 [1.704, 2.162]; median 2.000, SD 0.640, min 1.000, max 3.000
- Runtime (µs): 38.352 [37.418, 39.285]; median 37.436, SD 2.608, min 35.708, max 46.838
- Throughput (executions/s): 837650.530 [819795.181, 855505.879]; median 854795.610, SD 49896.824, min 683205.944, max 896157.724
- Target time (µs): 0.750 [0.740, 0.761]; median 0.742, SD 0.029, min 0.704, max 0.812
- Detector time (µs): 32.655 [31.723, 33.587]; median 31.965, SD 2.604, min 30.345, max 41.527
- Bug success: 1/30 (Wilson 95% [0.006, 0.167]); first-bug execution among successes: 20.000 [20.000, 20.000]; median 20.000, SD 0.000, min 20.000, max 20.000. Censored at budget: 29.
- First-bug elapsed time among successes (µs): 22.703 [22.703, 22.703]; median 22.703, SD 0.000, min 22.703, max 22.703.
- Half-coverage success: 2/30 (Wilson 95% [0.018, 0.213]); execution among successes: 30.000 [28.040, 31.960]; median 30.000, SD 1.414, min 29.000, max 31.000. Censored at budget: 28.
- Half-coverage elapsed time among successes (µs): 35.632 [34.993, 36.271]; median 35.632, SD 0.461, min 35.306, max 35.958.

## nested_bug · mutation_feedback · 32 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 0.567 [0.363, 0.770]; median 1.000, SD 0.568, min 0.000, max 2.000
- Final dependency coverage: 0.142 [0.091, 0.193]; median 0.250, SD 0.142, min 0.000, max 0.500
- Normalized coverage area: 0.036 [0.017, 0.054]; median 0.008, SD 0.052, min 0.000, max 0.164
- Executions per discovered dependency: 31.000 [29.040, 32.960]; median 32.000, SD 4.000, min 16.000, max 32.000
- Unique behaviors: 2.000 [1.812, 2.188]; median 2.000, SD 0.525, min 1.000, max 3.000
- Runtime (µs): 40.031 [38.911, 41.151]; median 39.575, SD 3.129, min 37.451, max 55.034
- Throughput (executions/s): 803091.933 [785372.328, 820811.538]; median 808593.812, SD 49517.486, min 581458.735, max 854449.814
- Target time (µs): 0.748 [0.735, 0.761]; median 0.750, SD 0.035, min 0.690, max 0.831
- Detector time (µs): 32.512 [31.459, 33.565]; median 32.244, SD 2.942, min 30.459, max 47.480
- Bug success: 1/30 (Wilson 95% [0.006, 0.167]); first-bug execution among successes: 28.000 [28.000, 28.000]; median 28.000, SD 0.000, min 28.000, max 28.000. Censored at budget: 29.
- First-bug elapsed time among successes (µs): 34.385 [34.385, 34.385]; median 34.385, SD 0.000, min 34.385, max 34.385.
- Half-coverage success: 1/30 (Wilson 95% [0.006, 0.167]); execution among successes: 25.000 [25.000, 25.000]; median 25.000, SD 0.000, min 25.000, max 25.000. Censored at budget: 29.
- Half-coverage elapsed time among successes (µs): 29.255 [29.255, 29.255]; median 29.255, SD 0.000, min 29.255, max 29.255.

## nested_bug · random · 32 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 0.400 [0.222, 0.578]; median 0.000, SD 0.498, min 0.000, max 1.000
- Final dependency coverage: 0.100 [0.055, 0.145]; median 0.000, SD 0.125, min 0.000, max 0.250
- Normalized coverage area: 0.029 [0.011, 0.048]; median 0.000, SD 0.053, min 0.000, max 0.203
- Executions per discovered dependency: 32.000 [32.000, 32.000]; median 32.000, SD 0.000, min 32.000, max 32.000
- Unique behaviors: 2.967 [2.693, 3.240]; median 3.000, SD 0.765, min 2.000, max 4.000
- Runtime (µs): 39.940 [39.470, 40.409]; median 39.910, SD 1.311, min 37.651, max 44.394
- Throughput (executions/s): 802021.592 [792875.830, 811167.354]; median 801815.272, SD 25557.858, min 720818.129, max 849911.025
- Target time (µs): 0.743 [0.734, 0.752]; median 0.732, SD 0.025, min 0.680, max 0.782
- Detector time (µs): 33.800 [33.362, 34.239]; median 33.898, SD 1.225, min 31.259, max 37.599
- Bug success: 9/30 (Wilson 95% [0.167, 0.479]); first-bug execution among successes: 23.333 [16.982, 29.684]; median 27.000, SD 9.721, min 6.000, max 32.000. Censored at budget: 21.
- First-bug elapsed time among successes (µs): 29.697 [21.269, 38.126]; median 34.455, SD 12.900, min 6.793, max 44.324.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## nested_bug · uniform · 32 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 0.033 [-0.032, 0.099]; median 0.000, SD 0.183, min 0.000, max 1.000
- Final dependency coverage: 0.008 [-0.008, 0.025]; median 0.000, SD 0.046, min 0.000, max 0.250
- Normalized coverage area: 0.002 [-0.002, 0.007]; median 0.000, SD 0.013, min 0.000, max 0.070
- Executions per discovered dependency: 32.000 [32.000, 32.000]; median 32.000, SD 0.000, min 32.000, max 32.000
- Unique behaviors: 3.700 [3.533, 3.867]; median 4.000, SD 0.466, min 3.000, max 4.000
- Runtime (µs): 39.825 [39.127, 40.522]; median 39.460, SD 1.948, min 37.180, max 48.611
- Throughput (executions/s): 805154.989 [792760.521, 817549.456]; median 810958.384, SD 34636.375, min 658287.219, max 860677.784
- Target time (µs): 0.755 [0.746, 0.763]; median 0.752, SD 0.024, min 0.711, max 0.821
- Detector time (µs): 35.398 [34.761, 36.035]; median 35.144, SD 1.780, min 32.901, max 43.333
- Bug success: 22/30 (Wilson 95% [0.556, 0.858]); first-bug execution among successes: 16.864 [13.493, 20.235]; median 15.000, SD 8.067, min 3.000, max 32.000. Censored at budget: 8.
- First-bug elapsed time among successes (µs): 21.096 [17.004, 25.187]; median 20.178, SD 9.792, min 4.438, max 39.254.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## nested_bug · dcf · 64 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 1.900 [1.532, 2.268]; median 2.000, SD 1.029, min 1.000, max 4.000
- Final dependency coverage: 0.475 [0.383, 0.567]; median 0.500, SD 0.257, min 0.250, max 1.000
- Normalized coverage area: 0.241 [0.185, 0.298]; median 0.193, SD 0.159, min 0.043, max 0.602
- Executions per discovered dependency: 43.022 [36.079, 49.966]; median 32.000, SD 19.404, min 16.000, max 64.000
- Unique behaviors: 3.100 [2.813, 3.387]; median 3.000, SD 0.803, min 2.000, max 4.000
- Runtime (µs): 74.760 [73.568, 75.951]; median 73.919, SD 3.329, min 69.762, max 83.578
- Throughput (executions/s): 857648.579 [844550.114, 870747.043]; median 865806.870, SD 36603.696, min 765751.753, max 917404.891
- Target time (µs): 1.490 [1.473, 1.507]; median 1.485, SD 0.047, min 1.370, max 1.622
- Detector time (µs): 64.215 [63.073, 65.358]; median 63.171, SD 3.193, min 59.381, max 72.680
- Bug success: 14/30 (Wilson 95% [0.302, 0.639]); first-bug execution among successes: 49.500 [41.501, 57.499]; median 55.500, SD 15.271, min 20.000, max 64.000. Censored at budget: 16.
- First-bug elapsed time among successes (µs): 57.808 [48.338, 67.277]; median 64.752, SD 18.078, min 24.266, max 77.215.
- Half-coverage success: 17/30 (Wilson 95% [0.392, 0.726]); execution among successes: 40.353 [34.572, 46.133]; median 40.000, SD 12.160, min 19.000, max 64.000. Censored at budget: 13.
- Half-coverage elapsed time among successes (µs): 47.198 [40.323, 54.073]; median 48.522, SD 14.463, min 22.743, max 80.281.

## nested_bug · fixed_parent · 64 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 2.000 [1.559, 2.441]; median 1.500, SD 1.232, min 1.000, max 4.000
- Final dependency coverage: 0.500 [0.390, 0.610]; median 0.375, SD 0.308, min 0.250, max 1.000
- Normalized coverage area: 0.230 [0.189, 0.271]; median 0.193, SD 0.115, min 0.074, max 0.488
- Executions per discovered dependency: 43.911 [36.332, 51.490]; median 48.000, SD 21.180, min 16.000, max 64.000
- Unique behaviors: 3.067 [2.858, 3.275]; median 3.000, SD 0.583, min 2.000, max 4.000
- Runtime (µs): 74.753 [73.701, 75.806]; median 74.556, SD 2.941, min 70.022, max 84.650
- Throughput (executions/s): 857373.094 [845837.181, 868909.006]; median 858415.464, SD 32237.141, min 756054.341, max 913998.458
- Target time (µs): 1.507 [1.492, 1.523]; median 1.499, SD 0.043, min 1.432, max 1.593
- Detector time (µs): 64.149 [63.124, 65.174]; median 63.918, SD 2.864, min 59.423, max 73.000
- Bug success: 7/30 (Wilson 95% [0.118, 0.409]); first-bug execution among successes: 53.286 [41.528, 65.043]; median 62.000, SD 15.872, min 20.000, max 64.000. Censored at budget: 23.
- First-bug elapsed time among successes (µs): 61.413 [47.883, 74.943]; median 70.313, SD 18.264, min 23.495, max 73.819.
- Half-coverage success: 15/30 (Wilson 95% [0.332, 0.668]); execution among successes: 42.733 [37.707, 47.759]; median 40.000, SD 9.932, min 29.000, max 64.000. Censored at budget: 15.
- Half-coverage elapsed time among successes (µs): 50.036 [44.350, 55.722]; median 47.420, SD 11.235, min 33.904, max 74.942.

## nested_bug · mutation_feedback · 64 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 1.667 [1.287, 2.046]; median 1.000, SD 1.061, min 1.000, max 4.000
- Final dependency coverage: 0.417 [0.322, 0.512]; median 0.250, SD 0.265, min 0.250, max 1.000
- Normalized coverage area: 0.174 [0.143, 0.206]; median 0.156, SD 0.088, min 0.066, max 0.484
- Executions per discovered dependency: 49.778 [42.773, 56.783]; median 64.000, SD 19.575, min 16.000, max 64.000
- Unique behaviors: 2.733 [2.452, 3.014]; median 3.000, SD 0.785, min 2.000, max 4.000
- Runtime (µs): 80.422 [79.461, 81.383]; median 80.657, SD 2.685, min 74.060, max 87.205
- Throughput (executions/s): 796657.098 [787182.827, 806131.370]; median 793480.519, SD 26475.879, min 733902.873, max 864164.191
- Target time (µs): 1.496 [1.480, 1.512]; median 1.493, SD 0.046, min 1.402, max 1.623
- Detector time (µs): 63.395 [62.891, 63.898]; median 63.391, SD 1.408, min 59.576, max 65.994
- Bug success: 10/30 (Wilson 95% [0.192, 0.512]); first-bug execution among successes: 48.600 [42.625, 54.575]; median 49.500, SD 9.640, min 28.000, max 61.000. Censored at budget: 20.
- First-bug elapsed time among successes (µs): 60.775 [53.019, 68.531]; median 61.475, SD 12.514, min 35.046, max 77.136.
- Half-coverage success: 11/30 (Wilson 95% [0.219, 0.545]); execution among successes: 45.091 [40.108, 50.074]; median 47.000, SD 8.432, min 25.000, max 54.000. Censored at budget: 19.
- Half-coverage elapsed time among successes (µs): 56.388 [49.731, 63.045]; median 58.079, SD 11.265, min 29.716, max 68.188.

## nested_bug · random · 64 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 1.367 [1.077, 1.656]; median 1.000, SD 0.809, min 0.000, max 3.000
- Final dependency coverage: 0.342 [0.269, 0.414]; median 0.250, SD 0.202, min 0.000, max 0.750
- Normalized coverage area: 0.125 [0.093, 0.158]; median 0.129, SD 0.091, min 0.000, max 0.375
- Executions per discovered dependency: 49.778 [43.082, 56.473]; median 64.000, SD 17.750, min 21.333, max 64.000
- Unique behaviors: 3.667 [3.471, 3.862]; median 4.000, SD 0.547, min 2.000, max 4.000
- Runtime (µs): 81.688 [80.708, 82.668]; median 81.474, SD 2.738, min 75.182, max 88.307
- Throughput (executions/s): 784318.056 [774941.990, 793694.122]; median 785534.932, SD 26201.443, min 724744.358, max 851267.591
- Target time (µs): 1.508 [1.490, 1.527]; median 1.508, SD 0.051, min 1.424, max 1.655
- Detector time (µs): 69.309 [68.418, 70.199]; median 69.049, SD 2.488, min 63.274, max 76.375
- Bug success: 21/30 (Wilson 95% [0.521, 0.833]); first-bug execution among successes: 35.524 [29.570, 41.477]; median 35.000, SD 13.920, min 6.000, max 57.000. Censored at budget: 9.
- First-bug elapsed time among successes (µs): 45.118 [37.465, 52.770]; median 44.645, SD 17.892, min 7.254, max 71.755.
- Half-coverage success: 11/30 (Wilson 95% [0.219, 0.545]); execution among successes: 50.364 [44.482, 56.245]; median 52.000, SD 9.953, min 33.000, max 64.000. Censored at budget: 19.
- Half-coverage elapsed time among successes (µs): 63.626 [56.043, 71.208]; median 65.975, SD 12.831, min 42.050, max 86.433.

## nested_bug · uniform · 64 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 0.767 [0.445, 1.088]; median 0.500, SD 0.898, min 0.000, max 3.000
- Final dependency coverage: 0.192 [0.111, 0.272]; median 0.125, SD 0.224, min 0.000, max 0.750
- Normalized coverage area: 0.037 [0.018, 0.057]; median 0.002, SD 0.056, min 0.000, max 0.180
- Executions per discovered dependency: 48.356 [39.493, 57.218]; median 64.000, SD 17.512, min 21.333, max 64.000
- Unique behaviors: 3.967 [3.901, 4.032]; median 4.000, SD 0.183, min 3.000, max 4.000
- Runtime (µs): 79.182 [78.199, 80.164]; median 78.614, SD 2.745, min 76.154, max 89.619
- Throughput (executions/s): 809135.660 [799848.341, 818422.979]; median 814109.564, SD 25953.440, min 714134.280, max 840402.343
- Target time (µs): 1.483 [1.471, 1.495]; median 1.473, SD 0.033, min 1.431, max 1.561
- Detector time (µs): 71.659 [70.976, 72.341]; median 71.531, SD 1.907, min 69.013, max 79.009
- Bug success: 29/30 (Wilson 95% [0.833, 0.994]); first-bug execution among successes: 25.000 [18.752, 31.248]; median 19.000, SD 17.167, min 3.000, max 64.000. Censored at budget: 1.
- First-bug elapsed time among successes (µs): 31.207 [23.654, 38.760]; median 24.045, SD 20.752, min 4.899, max 77.306.
- Half-coverage success: 7/30 (Wilson 95% [0.118, 0.409]); execution among successes: 56.143 [51.469, 60.817]; median 56.000, SD 6.309, min 49.000, max 64.000. Censored at budget: 23.
- Half-coverage elapsed time among successes (µs): 68.568 [62.553, 74.583]; median 68.819, SD 8.120, min 59.423, max 78.268.

## nested_bug · dcf · 128 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 3.400 [3.178, 3.622]; median 3.000, SD 0.621, min 2.000, max 4.000
- Final dependency coverage: 0.850 [0.794, 0.906]; median 0.750, SD 0.155, min 0.500, max 1.000
- Normalized coverage area: 0.434 [0.373, 0.495]; median 0.384, SD 0.170, min 0.211, max 0.801
- Executions per discovered dependency: 39.111 [36.049, 42.173]; median 42.667, SD 8.558, min 32.000, max 64.000
- Unique behaviors: 3.967 [3.901, 4.032]; median 4.000, SD 0.183, min 3.000, max 4.000
- Runtime (µs): 142.551 [140.826, 144.275]; median 142.474, SD 4.819, min 134.444, max 159.150
- Throughput (executions/s): 898885.571 [888370.608, 909400.535]; median 898408.437, SD 29384.095, min 804272.699, max 952069.263
- Target time (µs): 2.999 [2.972, 3.025]; median 2.974, SD 0.074, min 2.902, max 3.229
- Detector time (µs): 124.922 [123.594, 126.251]; median 125.202, SD 3.713, min 117.297, max 133.441
- Bug success: 29/30 (Wilson 95% [0.833, 0.994]); first-bug execution among successes: 69.621 [60.942, 78.300]; median 68.000, SD 23.845, min 20.000, max 119.000. Censored at budget: 1.
- First-bug elapsed time among successes (µs): 81.401 [71.841, 90.960]; median 78.348, SD 26.265, min 25.679, max 131.147.
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 63.567 [52.689, 74.444]; median 55.000, SD 30.397, min 19.000, max 124.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 74.581 [62.655, 86.507]; median 67.067, SD 33.327, min 23.805, max 141.166.

## nested_bug · fixed_parent · 128 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 3.633 [3.413, 3.853]; median 4.000, SD 0.615, min 2.000, max 4.000
- Final dependency coverage: 0.908 [0.853, 0.963]; median 1.000, SD 0.154, min 0.500, max 1.000
- Normalized coverage area: 0.473 [0.416, 0.529]; median 0.451, SD 0.157, min 0.221, max 0.744
- Executions per discovered dependency: 36.622 [33.503, 39.741]; median 32.000, SD 8.717, min 32.000, max 64.000
- Unique behaviors: 3.933 [3.843, 4.024]; median 4.000, SD 0.254, min 3.000, max 4.000
- Runtime (µs): 141.542 [139.647, 143.436]; median 140.591, SD 5.295, min 133.642, max 157.357
- Throughput (executions/s): 905491.642 [893954.014, 917029.270]; median 910449.339, SD 32241.935, min 813436.962, max 957782.733
- Target time (µs): 2.996 [2.979, 3.014]; median 3.001, SD 0.049, min 2.905, max 3.113
- Detector time (µs): 124.287 [122.475, 126.099]; median 123.821, SD 5.063, min 116.805, max 139.297
- Bug success: 28/30 (Wilson 95% [0.787, 0.982]); first-bug execution among successes: 77.214 [69.701, 84.728]; median 76.000, SD 20.284, min 20.000, max 109.000. Censored at budget: 2.
- First-bug elapsed time among successes (µs): 89.738 [81.484, 97.991]; median 93.898, SD 22.282, min 24.747, max 133.011.
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 66.100 [56.620, 75.580]; median 67.500, SD 26.493, min 29.000, max 109.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 78.469 [67.713, 89.226]; median 78.724, SD 30.059, min 36.669, max 134.534.

## nested_bug · mutation_feedback · 128 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 4.000 [4.000, 4.000]; median 4.000, SD 0.000, min 4.000, max 4.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.461 [0.412, 0.510]; median 0.481, SD 0.137, min 0.176, max 0.742
- Executions per discovered dependency: 32.000 [32.000, 32.000]; median 32.000, SD 0.000, min 32.000, max 32.000
- Unique behaviors: 3.933 [3.843, 4.024]; median 4.000, SD 0.254, min 3.000, max 4.000
- Runtime (µs): 173.312 [168.784, 177.840]; median 170.121, SD 12.654, min 157.958, max 214.625
- Throughput (executions/s): 742037.251 [724286.984, 759787.518]; median 752446.193, SD 49603.171, min 596389.051, max 810341.990
- Target time (µs): 3.041 [3.007, 3.075]; median 3.026, SD 0.095, min 2.942, max 3.436
- Detector time (µs): 120.892 [119.450, 122.333]; median 119.847, SD 4.027, min 115.539, max 133.905
- Bug success: 29/30 (Wilson 95% [0.833, 0.994]); first-bug execution among successes: 84.241 [73.367, 95.116]; median 95.000, SD 29.878, min 28.000, max 128.000. Censored at budget: 1.
- First-bug elapsed time among successes (µs): 114.536 [97.966, 131.106]; median 119.706, SD 45.528, min 36.810, max 205.478.
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 74.367 [64.439, 84.294]; median 73.500, SD 27.743, min 25.000, max 128.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 102.388 [86.535, 118.240]; median 101.958, SD 44.300, min 31.469, max 204.446.

## nested_bug · random · 128 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 3.833 [3.698, 3.969]; median 4.000, SD 0.379, min 3.000, max 4.000
- Final dependency coverage: 0.958 [0.924, 0.992]; median 1.000, SD 0.095, min 0.750, max 1.000
- Normalized coverage area: 0.411 [0.374, 0.448]; median 0.411, SD 0.104, min 0.176, max 0.643
- Executions per discovered dependency: 33.778 [32.331, 35.225]; median 32.000, SD 4.043, min 32.000, max 42.667
- Unique behaviors: 4.000 [4.000, 4.000]; median 4.000, SD 0.000, min 4.000, max 4.000
- Runtime (µs): 157.341 [155.649, 159.033]; median 157.197, SD 4.729, min 146.887, max 170.061
- Throughput (executions/s): 814223.324 [805547.533, 822899.114]; median 814269.729, SD 24244.522, min 752671.100, max 871418.165
- Target time (µs): 3.012 [2.987, 3.037]; median 3.013, SD 0.071, min 2.909, max 3.248
- Detector time (µs): 131.567 [129.986, 133.149]; median 130.419, SD 4.420, min 121.500, max 142.040
- Bug success: 30/30 (Wilson 95% [0.886, 1.000]); first-bug execution among successes: 50.600 [41.027, 60.173]; median 43.000, SD 26.751, min 6.000, max 109.000. Censored at budget: 0.
- First-bug elapsed time among successes (µs): 65.027 [53.159, 76.895]; median 54.728, SD 33.165, min 9.378, max 133.332.
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 71.733 [64.428, 79.039]; median 72.500, SD 20.415, min 33.000, max 115.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 91.992 [83.186, 100.797]; median 93.436, SD 24.606, min 43.331, max 143.401.

## nested_bug · uniform · 128 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 3.700 [3.487, 3.913]; median 4.000, SD 0.596, min 2.000, max 4.000
- Final dependency coverage: 0.925 [0.872, 0.978]; median 1.000, SD 0.149, min 0.500, max 1.000
- Normalized coverage area: 0.308 [0.273, 0.344]; median 0.322, SD 0.099, min 0.137, max 0.475
- Executions per discovered dependency: 35.911 [32.824, 38.998]; median 32.000, SD 8.626, min 32.000, max 64.000
- Unique behaviors: 4.000 [4.000, 4.000]; median 4.000, SD 0.000, min 4.000, max 4.000
- Runtime (µs): 150.302 [148.485, 152.119]; median 148.806, SD 5.078, min 142.078, max 162.667
- Throughput (executions/s): 852534.714 [842502.693, 862566.734]; median 860180.588, SD 28034.510, min 786883.633, max 900913.583
- Target time (µs): 3.019 [2.997, 3.041]; median 3.025, SD 0.061, min 2.924, max 3.156
- Detector time (µs): 137.318 [135.541, 139.095]; median 135.834, SD 4.966, min 129.385, max 149.402
- Bug success: 30/30 (Wilson 95% [0.886, 1.000]); first-bug execution among successes: 26.567 [19.794, 33.339]; median 19.000, SD 18.926, min 3.000, max 72.000. Censored at budget: 0.
- First-bug elapsed time among successes (µs): 34.661 [26.455, 42.868]; median 25.834, SD 22.933, min 5.771, max 87.395.
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 82.200 [75.454, 88.946]; median 85.000, SD 18.852, min 49.000, max 122.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 101.363 [93.763, 108.962]; median 102.143, SD 21.237, min 61.556, max 143.281.

## nested_bug · dcf · 192 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 4.000 [4.000, 4.000]; median 4.000, SD 0.000, min 4.000, max 4.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.615 [0.573, 0.657]; median 0.587, SD 0.117, min 0.452, max 0.867
- Executions per discovered dependency: 48.000 [48.000, 48.000]; median 48.000, SD 0.000, min 48.000, max 48.000
- Unique behaviors: 4.000 [4.000, 4.000]; median 4.000, SD 0.000, min 4.000, max 4.000
- Runtime (µs): 188.595 [186.893, 190.297]; median 187.600, SD 4.757, min 179.639, max 202.603
- Throughput (executions/s): 1018670.026 [1009617.295, 1027722.757]; median 1023456.886, SD 25297.883, min 947666.125, max 1068810.225
- Target time (µs): 4.530 [4.498, 4.563]; median 4.547, SD 0.091, min 4.369, max 4.729
- Detector time (µs): 165.290 [163.672, 166.909]; median 164.409, SD 4.522, min 157.146, max 178.831
- Bug success: 30/30 (Wilson 95% [0.886, 1.000]); first-bug execution among successes: 71.800 [62.390, 81.210]; median 71.000, SD 26.296, min 20.000, max 135.000. Censored at budget: 0.
- First-bug elapsed time among successes (µs): 84.454 [74.602, 94.307]; median 83.563, SD 27.533, min 28.013, max 148.351.
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 63.567 [52.689, 74.444]; median 55.000, SD 30.397, min 19.000, max 124.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 75.173 [63.315, 87.031]; median 67.943, SD 33.137, min 25.488, max 136.768.

## nested_bug · fixed_parent · 192 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 4.000 [4.000, 4.000]; median 4.000, SD 0.000, min 4.000, max 4.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.645 [0.606, 0.683]; median 0.628, SD 0.108, min 0.458, max 0.829
- Executions per discovered dependency: 48.000 [48.000, 48.000]; median 48.000, SD 0.000, min 48.000, max 48.000
- Unique behaviors: 4.000 [4.000, 4.000]; median 4.000, SD 0.000, min 4.000, max 4.000
- Runtime (µs): 186.391 [184.391, 188.391]; median 185.685, SD 5.588, min 178.367, max 201.701
- Throughput (executions/s): 1030954.581 [1020304.947, 1041604.215]; median 1034006.644, SD 29760.432, min 951904.056, max 1076432.300
- Target time (µs): 4.496 [4.466, 4.526]; median 4.498, SD 0.084, min 4.314, max 4.650
- Detector time (µs): 164.410 [162.485, 166.336]; median 163.185, SD 5.381, min 155.115, max 178.795
- Bug success: 30/30 (Wilson 95% [0.886, 1.000]); first-bug execution among successes: 81.733 [72.408, 91.059]; median 79.500, SD 26.060, min 20.000, max 147.000. Censored at budget: 0.
- First-bug elapsed time among successes (µs): 93.778 [84.263, 103.293]; median 90.305, SD 26.590, min 24.276, max 154.812.
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 66.100 [56.620, 75.580]; median 67.500, SD 26.493, min 29.000, max 109.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 77.875 [67.428, 88.323]; median 81.804, SD 29.195, min 36.108, max 125.166.

## nested_bug · mutation_feedback · 192 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 4.000 [4.000, 4.000]; median 4.000, SD 0.000, min 4.000, max 4.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.641 [0.608, 0.674]; median 0.654, SD 0.091, min 0.451, max 0.828
- Executions per discovered dependency: 48.000 [48.000, 48.000]; median 48.000, SD 0.000, min 48.000, max 48.000
- Unique behaviors: 4.000 [4.000, 4.000]; median 4.000, SD 0.000, min 4.000, max 4.000
- Runtime (µs): 315.370 [304.596, 326.143]; median 315.837, SD 30.107, min 260.332, max 385.327
- Throughput (executions/s): 614321.564 [592811.867, 635831.261]; median 607915.831, SD 60108.910, min 498278.086, max 737519.782
- Target time (µs): 4.511 [4.483, 4.538]; median 4.508, SD 0.076, min 4.328, max 4.697
- Detector time (µs): 156.352 [155.033, 157.671]; median 156.925, SD 3.686, min 147.877, max 163.068
- Bug success: 30/30 (Wilson 95% [0.886, 1.000]); first-bug execution among successes: 87.067 [75.191, 98.942]; median 96.000, SD 33.187, min 28.000, max 169.000. Censored at budget: 0.
- First-bug elapsed time among successes (µs): 118.738 [99.938, 137.538]; median 119.811, SD 52.537, min 37.581, max 262.145.
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 74.367 [64.439, 84.294]; median 73.500, SD 27.743, min 25.000, max 128.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 101.802 [85.912, 117.692]; median 99.237, SD 44.405, min 31.610, max 202.081.

## nested_bug · random · 192 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 4.000 [4.000, 4.000]; median 4.000, SD 0.000, min 4.000, max 4.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.606 [0.581, 0.631]; median 0.599, SD 0.070, min 0.451, max 0.762
- Executions per discovered dependency: 48.000 [48.000, 48.000]; median 48.000, SD 0.000, min 48.000, max 48.000
- Unique behaviors: 4.000 [4.000, 4.000]; median 4.000, SD 0.000, min 4.000, max 4.000
- Runtime (µs): 215.333 [212.001, 218.665]; median 214.114, SD 9.311, min 204.286, max 248.840
- Throughput (executions/s): 893115.939 [880481.083, 905750.794]; median 896718.766, SD 35308.140, min 771580.132, max 939858.825
- Target time (µs): 4.545 [4.500, 4.590]; median 4.519, SD 0.126, min 4.430, max 5.059
- Detector time (µs): 171.783 [169.325, 174.241]; median 170.215, SD 6.870, min 161.194, max 193.587
- Bug success: 30/30 (Wilson 95% [0.886, 1.000]); first-bug execution among successes: 50.600 [41.027, 60.173]; median 43.000, SD 26.751, min 6.000, max 109.000. Censored at budget: 0.
- First-bug elapsed time among successes (µs): 67.103 [54.965, 79.242]; median 55.290, SD 33.921, min 10.610, max 145.885.
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 71.733 [64.428, 79.039]; median 72.500, SD 20.415, min 33.000, max 115.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 94.044 [85.061, 103.026]; median 94.934, SD 25.102, min 45.295, max 147.849.

## nested_bug · uniform · 192 executions

Runs: 30. Reference dependencies: 4.

- Final dependencies: 4.000 [4.000, 4.000]; median 4.000, SD 0.000, min 4.000, max 4.000
- Final dependency coverage: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Normalized coverage area: 0.536 [0.510, 0.561]; median 0.548, SD 0.071, min 0.408, max 0.650
- Executions per discovered dependency: 48.000 [48.000, 48.000]; median 48.000, SD 0.000, min 48.000, max 48.000
- Unique behaviors: 4.000 [4.000, 4.000]; median 4.000, SD 0.000, min 4.000, max 4.000
- Runtime (µs): 195.908 [193.190, 198.627]; median 193.469, SD 7.597, min 186.322, max 220.406
- Throughput (executions/s): 981405.367 [968445.799, 994364.934]; median 992406.803, SD 36215.548, min 871119.661, max 1030474.125
- Target time (µs): 4.526 [4.482, 4.570]; median 4.520, SD 0.124, min 4.332, max 5.026
- Detector time (µs): 177.117 [174.648, 179.585]; median 174.991, SD 6.898, min 167.871, max 198.752
- Bug success: 30/30 (Wilson 95% [0.886, 1.000]); first-bug execution among successes: 26.567 [19.794, 33.339]; median 19.000, SD 18.926, min 3.000, max 72.000. Censored at budget: 0.
- First-bug elapsed time among successes (µs): 36.554 [28.237, 44.870]; median 27.772, SD 23.240, min 6.492, max 90.340.
- Half-coverage success: 30/30 (Wilson 95% [0.886, 1.000]); execution among successes: 82.200 [75.454, 88.946]; median 85.000, SD 18.852, min 49.000, max 122.000. Censored at budget: 0.
- Half-coverage elapsed time among successes (µs): 104.076 [96.091, 112.062]; median 107.853, SD 22.317, min 61.156, max 143.952.

## rare_bug · dcf · 32 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 0.800 [0.654, 0.946]; median 1.000, SD 0.407, min 0.000, max 1.000
- Final dependency coverage: 0.029 [0.023, 0.034]; median 0.036, SD 0.015, min 0.000, max 0.036
- Normalized coverage area: 0.012 [0.009, 0.016]; median 0.013, SD 0.010, min 0.000, max 0.032
- Executions per discovered dependency: 32.000 [32.000, 32.000]; median 32.000, SD 0.000, min 32.000, max 32.000
- Unique behaviors: 1.867 [1.743, 1.990]; median 2.000, SD 0.346, min 1.000, max 2.000
- Runtime (µs): 37.331 [36.794, 37.868]; median 37.020, SD 1.500, min 35.266, max 41.899
- Throughput (executions/s): 858474.118 [846672.311, 870275.925]; median 864398.632, SD 32980.183, min 763741.378, max 907389.554
- Target time (µs): 0.735 [0.724, 0.747]; median 0.731, SD 0.031, min 0.681, max 0.821
- Detector time (µs): 31.703 [31.298, 32.108]; median 31.645, SD 1.132, min 29.867, max 34.394
- Bug success: 0/30 (Wilson 95% [-0.000, 0.114]); first-bug execution among successes: N/A. Censored at budget: 30.
- First-bug elapsed time among successes (µs): N/A.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## rare_bug · fixed_parent · 32 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 0.700 [0.533, 0.867]; median 1.000, SD 0.466, min 0.000, max 1.000
- Final dependency coverage: 0.025 [0.019, 0.031]; median 0.036, SD 0.017, min 0.000, max 0.036
- Normalized coverage area: 0.011 [0.007, 0.014]; median 0.009, SD 0.010, min 0.000, max 0.032
- Executions per discovered dependency: 32.000 [32.000, 32.000]; median 32.000, SD 0.000, min 32.000, max 32.000
- Unique behaviors: 1.833 [1.698, 1.969]; median 2.000, SD 0.379, min 1.000, max 2.000
- Runtime (µs): 37.651 [37.225, 38.077]; median 37.646, SD 1.191, min 35.146, max 40.997
- Throughput (executions/s): 850721.945 [841179.466, 860264.424]; median 850025.121, SD 26666.484, min 780544.918, max 910487.680
- Target time (µs): 0.739 [0.728, 0.751]; median 0.736, SD 0.032, min 0.682, max 0.851
- Detector time (µs): 32.086 [31.695, 32.476]; median 32.154, SD 1.092, min 29.942, max 34.987
- Bug success: 0/30 (Wilson 95% [-0.000, 0.114]); first-bug execution among successes: N/A. Censored at budget: 30.
- First-bug elapsed time among successes (µs): N/A.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## rare_bug · mutation_feedback · 32 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 0.500 [0.318, 0.682]; median 0.500, SD 0.509, min 0.000, max 1.000
- Final dependency coverage: 0.018 [0.011, 0.024]; median 0.018, SD 0.018, min 0.000, max 0.036
- Normalized coverage area: 0.004 [0.002, 0.007]; median 0.001, SD 0.007, min 0.000, max 0.023
- Executions per discovered dependency: 32.000 [32.000, 32.000]; median 32.000, SD 0.000, min 32.000, max 32.000
- Unique behaviors: 1.800 [1.654, 1.946]; median 2.000, SD 0.407, min 1.000, max 2.000
- Runtime (µs): 39.724 [39.157, 40.292]; median 39.380, SD 1.587, min 36.879, max 44.184
- Throughput (executions/s): 806741.573 [795683.020, 817800.126]; median 812605.858, SD 30903.158, min 724244.070, max 867702.487
- Target time (µs): 0.743 [0.733, 0.752]; median 0.742, SD 0.026, min 0.690, max 0.822
- Detector time (µs): 32.338 [31.825, 32.850]; median 32.177, SD 1.433, min 30.716, max 36.998
- Bug success: 0/30 (Wilson 95% [-0.000, 0.114]); first-bug execution among successes: N/A. Censored at budget: 30.
- First-bug elapsed time among successes (µs): N/A.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## rare_bug · random · 32 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 0.233 [0.079, 0.387]; median 0.000, SD 0.430, min 0.000, max 1.000
- Final dependency coverage: 0.008 [0.003, 0.014]; median 0.000, SD 0.015, min 0.000, max 0.036
- Normalized coverage area: 0.004 [0.001, 0.007]; median 0.000, SD 0.009, min 0.000, max 0.032
- Executions per discovered dependency: 32.000 [32.000, 32.000]; median 32.000, SD 0.000, min 32.000, max 32.000
- Unique behaviors: 2.000 [1.906, 2.094]; median 2.000, SD 0.263, min 1.000, max 3.000
- Runtime (µs): 40.181 [39.625, 40.738]; median 40.306, SD 1.556, min 36.669, max 43.342
- Throughput (executions/s): 797567.900 [786310.604, 808825.196]; median 793916.658, SD 31458.546, min 738313.876, max 872671.739
- Target time (µs): 0.740 [0.730, 0.750]; median 0.742, SD 0.028, min 0.682, max 0.793
- Detector time (µs): 33.994 [33.490, 34.498]; median 34.073, SD 1.408, min 30.640, max 36.478
- Bug success: 1/30 (Wilson 95% [0.006, 0.167]); first-bug execution among successes: 8.000 [8.000, 8.000]; median 8.000, SD 0.000, min 8.000, max 8.000. Censored at budget: 29.
- First-bug elapsed time among successes (µs): 9.037 [9.037, 9.037]; median 9.037, SD 0.000, min 9.037, max 9.037.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## rare_bug · uniform · 32 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 0.033 [-0.032, 0.099]; median 0.000, SD 0.183, min 0.000, max 1.000
- Final dependency coverage: 0.001 [-0.001, 0.004]; median 0.000, SD 0.007, min 0.000, max 0.036
- Normalized coverage area: 0.000 [-0.000, 0.001]; median 0.000, SD 0.002, min 0.000, max 0.010
- Executions per discovered dependency: 32.000 [32.000, 32.000]; median 32.000, SD 0.000, min 32.000, max 32.000
- Unique behaviors: 2.167 [2.031, 2.302]; median 2.000, SD 0.379, min 2.000, max 3.000
- Runtime (µs): 40.301 [39.531, 41.071]; median 40.050, SD 2.151, min 37.030, max 48.501
- Throughput (executions/s): 796038.565 [782047.758, 810029.372]; median 798991.393, SD 39097.351, min 659780.211, max 864164.191
- Target time (µs): 0.753 [0.740, 0.766]; median 0.750, SD 0.037, min 0.693, max 0.830
- Detector time (µs): 35.864 [35.125, 36.603]; median 35.692, SD 2.065, min 32.730, max 44.150
- Bug success: 5/30 (Wilson 95% [0.073, 0.336]); first-bug execution among successes: 17.000 [10.529, 23.471]; median 14.000, SD 7.382, min 11.000, max 29.000. Censored at budget: 25.
- First-bug elapsed time among successes (µs): 21.661 [13.145, 30.177]; median 18.956, SD 9.716, min 13.175, max 37.571.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## rare_bug · dcf · 64 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 1.033 [0.968, 1.099]; median 1.000, SD 0.183, min 1.000, max 2.000
- Final dependency coverage: 0.037 [0.035, 0.039]; median 0.036, SD 0.007, min 0.036, max 0.071
- Normalized coverage area: 0.023 [0.021, 0.026]; median 0.024, SD 0.007, min 0.010, max 0.040
- Executions per discovered dependency: 62.933 [60.843, 65.024]; median 64.000, SD 5.842, min 32.000, max 64.000
- Unique behaviors: 2.067 [1.976, 2.157]; median 2.000, SD 0.254, min 2.000, max 3.000
- Runtime (µs): 75.057 [74.521, 75.593]; median 74.982, SD 1.498, min 72.357, max 78.688
- Throughput (executions/s): 853010.803 [846948.009, 859073.597]; median 853538.319, SD 16942.496, min 813338.756, max 884503.227
- Target time (µs): 1.478 [1.465, 1.491]; median 1.477, SD 0.036, min 1.400, max 1.544
- Detector time (µs): 64.153 [63.624, 64.682]; median 64.209, SD 1.478, min 61.217, max 68.170
- Bug success: 2/30 (Wilson 95% [0.018, 0.213]); first-bug execution among successes: 56.000 [42.280, 69.720]; median 56.000, SD 9.899, min 49.000, max 63.000. Censored at budget: 28.
- First-bug elapsed time among successes (µs): 65.283 [51.518, 79.048]; median 65.283, SD 9.932, min 58.260, max 72.306.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## rare_bug · fixed_parent · 64 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Final dependency coverage: 0.036 [0.036, 0.036]; median 0.036, SD 0.000, min 0.036, max 0.036
- Normalized coverage area: 0.022 [0.019, 0.024]; median 0.023, SD 0.007, min 0.004, max 0.034
- Executions per discovered dependency: 64.000 [64.000, 64.000]; median 64.000, SD 0.000, min 64.000, max 64.000
- Unique behaviors: 2.000 [2.000, 2.000]; median 2.000, SD 0.000, min 2.000, max 2.000
- Runtime (µs): 75.568 [74.546, 76.590]; median 75.207, SD 2.855, min 71.665, max 84.279
- Throughput (executions/s): 848039.315 [837043.021, 859035.609]; median 850985.462, SD 30729.175, min 759382.527, max 893044.024
- Target time (µs): 1.481 [1.450, 1.512]; median 1.464, SD 0.086, min 1.403, max 1.892
- Detector time (µs): 64.833 [63.866, 65.799]; median 64.447, SD 2.700, min 61.127, max 73.276
- Bug success: 0/30 (Wilson 95% [-0.000, 0.114]); first-bug execution among successes: N/A. Censored at budget: 30.
- First-bug elapsed time among successes (µs): N/A.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## rare_bug · mutation_feedback · 64 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Final dependency coverage: 0.036 [0.036, 0.036]; median 0.036, SD 0.000, min 0.036, max 0.036
- Normalized coverage area: 0.018 [0.016, 0.020]; median 0.018, SD 0.005, min 0.006, max 0.030
- Executions per discovered dependency: 64.000 [64.000, 64.000]; median 64.000, SD 0.000, min 64.000, max 64.000
- Unique behaviors: 2.000 [2.000, 2.000]; median 2.000, SD 0.000, min 2.000, max 2.000
- Runtime (µs): 81.723 [80.494, 82.952]; median 81.243, SD 3.435, min 77.036, max 91.994
- Throughput (executions/s): 784419.606 [773069.457, 795769.755]; median 787760.606, SD 31718.024, min 695697.545, max 830780.414
- Target time (µs): 1.491 [1.478, 1.504]; median 1.491, SD 0.036, min 1.432, max 1.610
- Detector time (µs): 64.326 [63.363, 65.289]; median 63.767, SD 2.692, min 61.149, max 74.464
- Bug success: 0/30 (Wilson 95% [-0.000, 0.114]); first-bug execution among successes: N/A. Censored at budget: 30.
- First-bug elapsed time among successes (µs): N/A.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## rare_bug · random · 64 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 0.567 [0.386, 0.747]; median 1.000, SD 0.504, min 0.000, max 1.000
- Final dependency coverage: 0.020 [0.014, 0.027]; median 0.036, SD 0.018, min 0.000, max 0.036
- Normalized coverage area: 0.010 [0.006, 0.014]; median 0.005, SD 0.011, min 0.000, max 0.034
- Executions per discovered dependency: 64.000 [64.000, 64.000]; median 64.000, SD 0.000, min 64.000, max 64.000
- Unique behaviors: 2.133 [2.010, 2.257]; median 2.000, SD 0.346, min 2.000, max 3.000
- Runtime (µs): 82.513 [81.216, 83.809]; median 81.689, SD 3.624, min 76.234, max 91.553
- Throughput (executions/s): 777059.173 [765078.034, 789040.313]; median 783469.504, SD 33481.329, min 699048.638, max 839520.424
- Target time (µs): 1.481 [1.464, 1.499]; median 1.464, SD 0.049, min 1.423, max 1.643
- Detector time (µs): 70.460 [69.224, 71.695]; median 69.722, SD 3.453, min 64.334, max 79.145
- Bug success: 4/30 (Wilson 95% [0.053, 0.297]); first-bug execution among successes: 33.750 [14.095, 53.405]; median 35.000, SD 20.056, min 8.000, max 57.000. Censored at budget: 26.
- First-bug elapsed time among successes (µs): 41.779 [17.391, 66.167]; median 43.502, SD 24.886, min 9.688, max 70.423.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## rare_bug · uniform · 64 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 0.433 [0.173, 0.694]; median 0.000, SD 0.728, min 0.000, max 3.000
- Final dependency coverage: 0.015 [0.006, 0.025]; median 0.000, SD 0.026, min 0.000, max 0.107
- Normalized coverage area: 0.003 [0.001, 0.006]; median 0.000, SD 0.006, min 0.000, max 0.023
- Executions per discovered dependency: 56.533 [46.653, 66.413]; median 64.000, SD 15.941, min 21.333, max 64.000
- Unique behaviors: 2.300 [2.133, 2.467]; median 2.000, SD 0.466, min 2.000, max 3.000
- Runtime (µs): 79.823 [79.017, 80.630]; median 79.441, SD 2.254, min 77.266, max 86.584
- Throughput (executions/s): 802367.267 [794532.426, 810202.107]; median 805634.873, SD 21894.483, min 739166.590, max 828307.406
- Target time (µs): 1.469 [1.457, 1.482]; median 1.463, SD 0.035, min 1.412, max 1.541
- Detector time (µs): 72.557 [71.754, 73.361]; median 72.269, SD 2.246, min 70.043, max 79.382
- Bug success: 9/30 (Wilson 95% [0.167, 0.479]); first-bug execution among successes: 29.667 [19.229, 40.105]; median 29.000, SD 15.977, min 11.000, max 49.000. Censored at budget: 21.
- First-bug elapsed time among successes (µs): 37.119 [24.550, 49.688]; median 37.911, SD 19.239, min 14.207, max 60.303.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## rare_bug · dcf · 128 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 1.233 [0.990, 1.476]; median 1.000, SD 0.679, min 1.000, max 4.000
- Final dependency coverage: 0.044 [0.035, 0.053]; median 0.036, SD 0.024, min 0.036, max 0.143
- Normalized coverage area: 0.031 [0.029, 0.033]; median 0.030, SD 0.007, min 0.023, max 0.057
- Executions per discovered dependency: 117.689 [107.945, 127.432]; median 128.000, SD 27.228, min 32.000, max 128.000
- Unique behaviors: 2.367 [2.191, 2.542]; median 2.000, SD 0.490, min 2.000, max 3.000
- Runtime (µs): 144.349 [143.122, 145.576]; median 144.412, SD 3.429, min 138.992, max 150.303
- Throughput (executions/s): 887222.066 [879685.284, 894758.848]; median 886351.749, SD 21061.560, min 851613.075, max 920916.312
- Target time (µs): 2.978 [2.941, 3.015]; median 2.967, SD 0.104, min 2.826, max 3.316
- Detector time (µs): 126.917 [125.775, 128.058]; median 126.403, SD 3.190, min 122.042, max 133.088
- Bug success: 11/30 (Wilson 95% [0.219, 0.545]); first-bug execution among successes: 93.182 [78.422, 107.941]; median 94.000, SD 24.975, min 49.000, max 125.000. Censored at budget: 19.
- First-bug elapsed time among successes (µs): 107.915 [92.049, 123.780]; median 110.649, SD 26.847, min 62.057, max 142.700.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## rare_bug · fixed_parent · 128 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 1.233 [1.053, 1.414]; median 1.000, SD 0.504, min 1.000, max 3.000
- Final dependency coverage: 0.044 [0.038, 0.050]; median 0.036, SD 0.018, min 0.036, max 0.107
- Normalized coverage area: 0.030 [0.028, 0.032]; median 0.029, SD 0.005, min 0.021, max 0.043
- Executions per discovered dependency: 114.489 [104.569, 124.409]; median 128.000, SD 27.721, min 42.667, max 128.000
- Unique behaviors: 2.333 [2.162, 2.505]; median 2.000, SD 0.479, min 2.000, max 3.000
- Runtime (µs): 143.944 [142.715, 145.173]; median 143.647, SD 3.436, min 138.421, max 153.300
- Throughput (executions/s): 889715.517 [882244.743, 897186.291]; median 891076.673, SD 20877.100, min 834964.123, max 924715.181
- Target time (µs): 2.972 [2.933, 3.010]; median 2.947, SD 0.107, min 2.848, max 3.366
- Detector time (µs): 126.788 [125.658, 127.919]; median 126.310, SD 3.159, min 121.240, max 134.740
- Bug success: 10/30 (Wilson 95% [0.192, 0.512]); first-bug execution among successes: 101.700 [90.612, 112.788]; median 98.500, SD 17.889, min 78.000, max 125.000. Censored at budget: 20.
- First-bug elapsed time among successes (µs): 115.641 [102.875, 128.407]; median 111.585, SD 20.596, min 90.681, max 149.002.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## rare_bug · mutation_feedback · 128 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 1.000 [1.000, 1.000]; median 1.000, SD 0.000, min 1.000, max 1.000
- Final dependency coverage: 0.036 [0.036, 0.036]; median 0.036, SD 0.000, min 0.036, max 0.036
- Normalized coverage area: 0.027 [0.026, 0.028]; median 0.027, SD 0.003, min 0.021, max 0.033
- Executions per discovered dependency: 128.000 [128.000, 128.000]; median 128.000, SD 0.000, min 128.000, max 128.000
- Unique behaviors: 2.033 [1.968, 2.099]; median 2.000, SD 0.183, min 2.000, max 3.000
- Runtime (µs): 212.625 [207.561, 217.690]; median 214.911, SD 14.152, min 183.636, max 242.017
- Throughput (executions/s): 604645.640 [589865.085, 619426.196]; median 595596.225, SD 41304.305, min 528888.467, max 697031.083
- Target time (µs): 2.956 [2.935, 2.977]; median 2.956, SD 0.059, min 2.844, max 3.114
- Detector time (µs): 120.303 [119.335, 121.272]; median 120.242, SD 2.707, min 115.849, max 128.582
- Bug success: 1/30 (Wilson 95% [0.006, 0.167]); first-bug execution among successes: 127.000 [127.000, 127.000]; median 127.000, SD 0.000, min 127.000, max 127.000. Censored at budget: 29.
- First-bug elapsed time among successes (µs): 201.701 [201.701, 201.701]; median 201.701, SD 0.000, min 201.701, max 201.701.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## rare_bug · random · 128 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 1.933 [1.355, 2.512]; median 1.000, SD 1.617, min 1.000, max 7.000
- Final dependency coverage: 0.069 [0.048, 0.090]; median 0.036, SD 0.058, min 0.036, max 0.250
- Normalized coverage area: 0.025 [0.021, 0.029]; median 0.024, SD 0.011, min 0.008, max 0.056
- Executions per discovered dependency: 98.458 [82.927, 113.990]; median 128.000, SD 43.404, min 18.286, max 128.000
- Unique behaviors: 2.400 [2.222, 2.578]; median 2.000, SD 0.498, min 2.000, max 3.000
- Runtime (µs): 160.106 [158.573, 161.638]; median 159.365, SD 4.283, min 151.667, max 176.102
- Throughput (executions/s): 800004.442 [792606.248, 807402.635]; median 803186.600, SD 20674.273, min 726851.484, max 843954.189
- Target time (µs): 2.992 [2.964, 3.020]; median 2.991, SD 0.078, min 2.855, max 3.248
- Detector time (µs): 134.445 [132.980, 135.911]; median 134.177, SD 4.095, min 126.136, max 148.979
- Bug success: 12/30 (Wilson 95% [0.246, 0.577]); first-bug execution among successes: 74.417 [55.565, 93.268]; median 81.500, SD 33.318, min 8.000, max 111.000. Censored at budget: 18.
- First-bug elapsed time among successes (µs): 95.686 [71.771, 119.602]; median 102.364, SD 42.269, min 10.480, max 142.840.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## rare_bug · uniform · 128 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 2.567 [1.738, 3.395]; median 1.000, SD 2.315, min 1.000, max 8.000
- Final dependency coverage: 0.092 [0.062, 0.121]; median 0.036, SD 0.083, min 0.036, max 0.286
- Normalized coverage area: 0.023 [0.016, 0.030]; median 0.018, SD 0.020, min 0.000, max 0.095
- Executions per discovered dependency: 89.214 [71.635, 106.793]; median 128.000, SD 49.126, min 16.000, max 128.000
- Unique behaviors: 2.467 [2.285, 2.648]; median 2.000, SD 0.507, min 2.000, max 3.000
- Runtime (µs): 151.009 [149.794, 152.224]; median 150.269, SD 3.394, min 145.274, max 159.211
- Throughput (executions/s): 848038.777 [841321.100, 854756.455]; median 851809.289, SD 18772.569, min 803964.550, max 881093.658
- Target time (µs): 2.960 [2.934, 2.985]; median 2.944, SD 0.071, min 2.838, max 3.184
- Detector time (µs): 137.914 [136.760, 139.068]; median 137.269, SD 3.225, min 132.645, max 146.264
- Bug success: 14/30 (Wilson 95% [0.302, 0.639]); first-bug execution among successes: 59.214 [36.393, 82.036]; median 45.000, SD 43.566, min 11.000, max 127.000. Censored at budget: 16.
- First-bug elapsed time among successes (µs): 73.159 [46.906, 99.411]; median 56.647, SD 50.116, min 14.988, max 151.667.
- Half-coverage success: 0/30 (Wilson 95% [-0.000, 0.114]); execution among successes: N/A. Censored at budget: 30.
- Half-coverage elapsed time among successes (µs): N/A.

## rare_bug · dcf · 192 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 5.800 [4.179, 7.421]; median 5.500, SD 4.529, min 1.000, max 16.000
- Final dependency coverage: 0.207 [0.149, 0.265]; median 0.196, SD 0.162, min 0.036, max 0.571
- Normalized coverage area: 0.054 [0.044, 0.064]; median 0.045, SD 0.028, min 0.028, max 0.125
- Executions per discovered dependency: 83.819 [55.450, 112.188]; median 35.200, SD 79.276, min 12.000, max 192.000
- Unique behaviors: 2.667 [2.495, 2.838]; median 3.000, SD 0.479, min 2.000, max 3.000
- Runtime (µs): 190.898 [189.499, 192.298]; median 190.234, SD 3.911, min 183.056, max 200.147
- Throughput (executions/s): 1006176.440 [998862.957, 1013489.922]; median 1009283.974, SD 20437.547, min 959294.918, max 1048859.365
- Target time (µs): 4.411 [4.381, 4.442]; median 4.416, SD 0.086, min 4.227, max 4.566
- Detector time (µs): 167.587 [166.215, 168.958]; median 167.154, SD 3.832, min 159.606, max 176.521
- Bug success: 20/30 (Wilson 95% [0.488, 0.808]); first-bug execution among successes: 124.750 [106.653, 142.847]; median 123.000, SD 41.291, min 49.000, max 192.000. Censored at budget: 10.
- First-bug elapsed time among successes (µs): 136.739 [119.840, 153.638]; median 137.274, SD 38.559, min 61.356, max 190.339.
- Half-coverage success: 2/30 (Wilson 95% [0.018, 0.213]); execution among successes: 173.500 [158.800, 188.200]; median 173.500, SD 10.607, min 166.000, max 181.000. Censored at budget: 28.
- Half-coverage elapsed time among successes (µs): 175.011 [165.840, 184.182]; median 175.011, SD 6.617, min 170.332, max 179.690.

## rare_bug · fixed_parent · 192 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 5.867 [4.197, 7.536]; median 5.000, SD 4.666, min 1.000, max 16.000
- Final dependency coverage: 0.210 [0.150, 0.269]; median 0.179, SD 0.167, min 0.036, max 0.571
- Normalized coverage area: 0.052 [0.043, 0.061]; median 0.042, SD 0.025, min 0.029, max 0.118
- Executions per discovered dependency: 83.148 [54.829, 111.466]; median 38.400, SD 79.137, min 12.000, max 192.000
- Unique behaviors: 2.667 [2.495, 2.838]; median 3.000, SD 0.479, min 2.000, max 3.000
- Runtime (µs): 190.199 [188.406, 191.992]; median 188.901, SD 5.010, min 181.343, max 204.827
- Throughput (executions/s): 1010134.322 [1000779.987, 1019488.656]; median 1016403.606, SD 26140.714, min 937376.420, max 1058767.088
- Target time (µs): 4.463 [4.420, 4.506]; median 4.441, SD 0.119, min 4.275, max 4.858
- Detector time (µs): 168.590 [166.951, 170.230]; median 167.673, SD 4.582, min 160.268, max 182.892
- Bug success: 20/30 (Wilson 95% [0.488, 0.808]); first-bug execution among successes: 131.100 [116.117, 146.083]; median 131.500, SD 34.187, min 78.000, max 189.000. Censored at budget: 10.
- First-bug elapsed time among successes (µs): 141.817 [127.869, 155.766]; median 151.165, SD 31.827, min 90.942, max 186.232.
- Half-coverage success: 2/30 (Wilson 95% [0.018, 0.213]); execution among successes: 171.000 [171.000, 171.000]; median 171.000, SD 0.000, min 171.000, max 171.000. Censored at budget: 28.
- Half-coverage elapsed time among successes (µs): 172.440 [169.878, 175.003]; median 172.440, SD 1.849, min 171.133, max 173.748.

## rare_bug · mutation_feedback · 192 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 4.067 [2.291, 5.842]; median 1.000, SD 4.961, min 1.000, max 20.000
- Final dependency coverage: 0.145 [0.082, 0.209]; median 0.036, SD 0.177, min 0.036, max 0.714
- Normalized coverage area: 0.037 [0.030, 0.044]; median 0.031, SD 0.019, min 0.026, max 0.130
- Executions per discovered dependency: 124.532 [95.851, 153.213]; median 192.000, SD 80.150, min 9.600, max 192.000
- Unique behaviors: 2.533 [2.352, 2.715]; median 3.000, SD 0.507, min 2.000, max 3.000
- Runtime (µs): 449.961 [435.234, 464.688]; median 465.358, SD 41.156, min 343.058, max 501.517
- Throughput (executions/s): 430578.519 [414811.082, 446345.956]; median 412591.967, SD 44062.148, min 382838.468, max 559672.125
- Target time (µs): 4.465 [4.428, 4.502]; median 4.424, SD 0.103, min 4.298, max 4.663
- Detector time (µs): 160.760 [159.911, 161.609]; median 160.359, SD 2.373, min 154.692, max 164.945
- Bug success: 16/30 (Wilson 95% [0.361, 0.698]); first-bug execution among successes: 163.750 [152.943, 174.557]; median 167.500, SD 22.056, min 127.000, max 191.000. Censored at budget: 14.
- First-bug elapsed time among successes (µs): 345.467 [302.282, 388.653]; median 339.416, SD 88.133, min 210.397, max 454.568.
- Half-coverage success: 2/30 (Wilson 95% [0.018, 0.213]); execution among successes: 183.500 [166.840, 200.160]; median 183.500, SD 12.021, min 175.000, max 192.000. Censored at budget: 28.
- Half-coverage elapsed time among successes (µs): 388.343 [276.019, 500.667]; median 388.343, SD 81.046, min 331.035, max 445.651.

## rare_bug · random · 192 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 8.900 [6.732, 11.068]; median 9.000, SD 6.059, min 1.000, max 22.000
- Final dependency coverage: 0.318 [0.240, 0.395]; median 0.321, SD 0.216, min 0.036, max 0.786
- Normalized coverage area: 0.075 [0.058, 0.092]; median 0.064, SD 0.048, min 0.019, max 0.183
- Executions per discovered dependency: 60.805 [34.251, 87.359]; median 21.333, SD 74.206, min 8.727, max 192.000
- Unique behaviors: 2.767 [2.613, 2.921]; median 3.000, SD 0.430, min 2.000, max 3.000
- Runtime (µs): 214.989 [212.808, 217.170]; median 215.438, SD 6.094, min 203.294, max 226.778
- Throughput (executions/s): 893761.654 [884712.692, 902810.615]; median 891211.258, SD 25287.350, min 846642.972, max 944444.991
- Target time (µs): 4.627 [4.286, 4.967]; median 4.456, SD 0.951, min 4.296, max 9.647
- Detector time (µs): 171.771 [169.782, 173.760]; median 172.302, SD 5.558, min 159.064, max 179.921
- Bug success: 23/30 (Wilson 95% [0.591, 0.882]); first-bug execution among successes: 113.957 [93.667, 134.246]; median 111.000, SD 49.646, min 8.000, max 185.000. Censored at budget: 7.
- First-bug elapsed time among successes (µs): 139.378 [116.291, 162.466]; median 136.137, SD 56.492, min 11.391, max 213.613.
- Half-coverage success: 9/30 (Wilson 95% [0.167, 0.479]); execution among successes: 178.222 [168.700, 187.745]; median 185.000, SD 14.575, min 144.000, max 189.000. Censored at budget: 21.
- Half-coverage elapsed time among successes (µs): 202.080 [192.392, 211.769]; median 204.737, SD 14.830, min 172.506, max 224.814.

## rare_bug · uniform · 192 executions

Runs: 30. Reference dependencies: 28.

- Final dependencies: 10.633 [8.489, 12.777]; median 11.500, SD 5.991, min 1.000, max 22.000
- Final dependency coverage: 0.380 [0.303, 0.456]; median 0.411, SD 0.214, min 0.036, max 0.786
- Normalized coverage area: 0.082 [0.061, 0.102]; median 0.061, SD 0.057, min 0.017, max 0.226
- Executions per discovered dependency: 42.990 [21.313, 64.666]; median 16.727, SD 60.574, min 8.727, max 192.000
- Unique behaviors: 2.867 [2.743, 2.990]; median 3.000, SD 0.346, min 2.000, max 3.000
- Runtime (µs): 193.724 [191.143, 196.305]; median 193.976, SD 7.213, min 178.787, max 208.013
- Throughput (executions/s): 992437.288 [979127.143, 1005747.434]; median 989810.837, SD 37195.239, min 923019.234, max 1073903.584
- Target time (µs): 4.423 [4.387, 4.459]; median 4.425, SD 0.101, min 4.237, max 4.690
- Detector time (µs): 175.070 [172.643, 177.497]; median 175.733, SD 6.782, min 160.678, max 188.498
- Bug success: 26/30 (Wilson 95% [0.703, 0.947]); first-bug execution among successes: 109.115 [84.196, 134.035]; median 126.000, SD 64.829, min 11.000, max 191.000. Censored at budget: 4.
- First-bug elapsed time among successes (µs): 124.154 [98.691, 149.618]; median 148.039, SD 66.244, min 16.241, max 202.713.
- Half-coverage success: 12/30 (Wilson 95% [0.246, 0.577]); execution among successes: 175.167 [165.574, 184.759]; median 184.500, SD 16.954, min 142.000, max 191.000. Censored at budget: 18.
- Half-coverage elapsed time among successes (µs): 182.816 [174.909, 190.723]; median 182.995, SD 13.975, min 158.820, max 202.713.
