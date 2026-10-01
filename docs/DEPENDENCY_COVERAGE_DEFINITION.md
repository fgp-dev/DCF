# Dependency Coverage: exact rule used here

Source of truth: `PAPER.pdf`, Sections 3.1–3.2, Equations (1)–(3), and Algorithm 1. The target is a deterministic mapping `f : {0,1}^n -> O` with outcomes that can be compared for exact equality. An outcome may include output and crash classification. This prototype uses a 64-bit outcome value.

For candidate bit indices `A < B`, fix every other bit to one common context `z`. Let `x_ab(z)` set `A=a` and `B=b`. The observed effect of toggling `B` is

`Δ_B(a,z) = 1[f(x_a0(z)) != f(x_a1(z))]`.

A witness for the indexed dependency `A -> B` exists **only** when all four observations are present at the same `z` and

`f(x_00(z)) == f(x_01(z))` **and** `f(x_10(z)) != f(x_11(z))`.

The covered set `E(S)` contains each candidate pair at most once if *any* witness quartet lies in the executed-input set `S`. `DC(S) = |E(S)|`. A new dependency is a pair entering `E(S)` for the first time. The arrow comes from the `A < B` indexing convention; it does not establish internal data flow or causal direction. The output is compared as a whole, so this metric does not assign an edge to an output component. It also does not count every input or output change as a dependency.

## Hand check

Take two input bits and `f(A,B) = A AND B`. For inputs `00, 01, 10, 11`, outputs are `0, 0, 0, 1`. Toggling `B` at `A=0` has no visible effect; toggling it at `A=1` changes the outcome. After the fourth distinct input is executed, `(0,1)` enters `E(S)` and coverage becomes one. Reexecuting any of the four, or finding a second witness in a different context, leaves coverage at one.

For `f(A,B)=B`, outputs are `0,1,0,1`: the effect exists in both A contexts, so there is no edge under Equation (2). For a constant target there are no edges. For XOR, both contexts show an effect, so this criterion reports no edge even though the Boolean function uses both inputs. This is a deliberate sensitivity limit of the paper's definition.

Two arbitrary executions that change several bits cannot establish an edge. The detector waits for the complete matched quartet. A target whose outcomes change nondeterministically can create spurious witnesses; the principal experiments therefore use deterministic, stateless targets.

The paper does not define `USED`, `dependency A`, or an output component `B` in the sense of a pairwise previous-output test. Those names were not present in the supplied C++ implementation either. The operative rule is the four-outcome comparison above, not `output != previous_output`.
