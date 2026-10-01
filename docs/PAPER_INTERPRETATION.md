# Interpretation of `PAPER.pdf`

The source is *Dependency Coverage Fuzzing: Black-Box Exploration by Controlled Input Interactions* (Facundo Gomez Prates, 1 October 2026), a three-page proof-of-concept preprint. Equations and sections below refer to that file.

## Specified method

- A deterministic oracle maps an `n`-bit input to an equality-comparable outcome (Section 3.1). The evaluated oracle returns three bits.
- For every pair `A < B`, hold the other bits at one context `z`. Query `x00`, `x01`, `x10`, `x11`. Equation (1) says that B's effect at A=a is whether the two outcomes differ. Equation (2) witnesses `A -> B` exactly when `f(x00)==f(x01)` and `f(x10)!=f(x11)`. The four inputs must share `z`.
- The edge set contains a pair if *any* observed quartet witnesses it. Equation (3) defines coverage as the number of such pairs. The direction is imposed by index and is not a causal inference.
- Algorithm 1 starts with empty observations and edges, and a corpus containing the all-zero input. It shuffles all `n(n-1)/2` pairs once. For each pair it chooses a corpus parent, flips each bit other than A and B independently with probability 0.15, and requests the four quartet members in shuffled order. A duplicate uses its cached outcome and costs no target execution. An insertion checks all candidate pairs for completed quartets; an input that newly discovers an edge joins the corpus. After all pairs, it fills the budget with unseen random inputs.
- The positive eight-bit oracle is `(x0&x1, x2&x3, x4&x5)`; bits 6 and 7 are distractors (Eq. 4). Its expected indexed edges are `(0,1),(2,3),(4,5)`. The independent-output negative control is `(x1,x3,x5)` (Section 5.1).
- The uniform baseline visits a random permutation of all inputs. The mutation baseline starts from zero, selects a uniformly random prior observation, flips 1/2/3 *distinct* random bits with probabilities 3/6, 2/6, 1/6, retains each distinct proposal, and uses an unseen random input when duplicates persist (Section 5.2). All policies use the same edge detector.
- The paper uses budgets 32, 64, 96, 128, 192, 1,000 trials each, with seeds `12345+1009*t+k`, where `k=0,1,2` for guided, mutation, uniform. The primary result is true edges found and fraction of trials finding all three. Host candidate proposals are not part of the target-execution budget.

## Claims and boundaries

The reported means at budget 64 are 2.960 guided, 2.007 mutation, 0.655 uniform. The claim is improved interaction discovery *per distinct target execution on this one oracle*. Exhaustive detection should report exactly the three reference edges on the positive oracle and zero on the negative control. By budget 192, all methods saturated in the reported trials. The paper gives an `O(B n²)` pair-scan bound and `O(B)` stored observations, excluding target cost. It expressly does not claim faster wall-clock time, better bug discovery, causal graph recovery, superiority over AFL, or generality across programs.

The detector misses XOR-like interactions whose effect is present in both A contexts, and effects enabled at A=0. The evaluation assumes exact deterministic outcomes and short binary inputs. Full pair enumeration is quadratic and observed quartets become sparse as the domain grows. The baselines are feedback-free and are not instrumented fuzzers.

## Necessary implementation decisions and ambiguities

1. The referenced `depcover_demo.py` is not present in this folder. Python's exact PRNG calls, shuffle sequence, and duplicate-fallback threshold cannot be recovered. This implementation uses `std::mt19937_64`, one independent stream per paper seed, Fisher-Yates-style `std::shuffle`, and a documented fixed fallback threshold of 64 duplicate mutation proposals. It reproduces the experimental *protocol*, not bitwise identical Table 1 trials.
2. The paper does not specify corpus entry multiplicity or whether an input discovering multiple edges is appended once. We append that discoverer once. Corpus sampling is uniform over its entries. We do not append inputs that discover no edge.
3. On a quartet request, `A` and `B` are set to each of the four values after perturbing the other positions of the chosen parent. A partial quartet can remain when the budget ends.
4. The guided random fill and mutation fallback choose uniformly among currently unseen inputs by rejection sampling, with a random-rank scan after 64 failed draws. The uniform baseline alone holds a shuffled domain permutation. Candidate generation and bookkeeping time are measured separately from oracle evaluation counts.
5. The implementation limits `n` to 16 so exhaustive controls and the fallback permutation stay practical. This is an engineering bound, not a theoretical requirement.
   For the two-bit boundary case, the mutation baseline clamps a requested three-bit flip to two distinct bits; the paper's evaluated eight-bit case is unaffected.
6. The paper reports neither model parameters nor training and inference. DepCover's mutable observations, corpus, and edge set are **fuzzer state**, not a predictive model. No train/test accuracy or generalization gap is fabricated. The complete oracle domain is used only for independent validation and optional ground-truth evaluation, never to guide the fuzzer.

## Optional experimental extensions in this repository

- `fixed_parent` keeps quartet probing but removes discoverer-parent selection.
- `mutation_feedback` uses the paper mutation operator but selects parents from the discoverer corpus. It tests a narrower feedback change than the paper's complete-policy comparison.
- Constant, direct, nested-bug and rare-bug targets test the criterion and bug outcomes outside the paper's single positive target. They are extensions, not replications of Table 1.
- Per-execution curves, time, throughput and bug counts were not collected in the paper. They are measured here and interpreted separately from the paper's claims. State-size estimates from the old first-pass benchmark are archived, not part of the current primary comparison.
