Intuition behind the double-loop (“brute-force”) approach
What we’re looking for
A continuous subarray whose elements add up to k.
So for every possible starting point we want to ask:

“How far can I extend to the right before (or if) the running total hits k?”

Idea

Pick each index i as a start of a subarray.

March a second index j forward, accumulating the sum on the fly.

The moment that running sum equals k, we mark a success.

Keep marching until the end—because longer subarrays might also sum to k.

Why two loops?

Outer loop chooses every possible start i → ensures coverage of all subarrays.

Inner loop grows the subarray one element at a time (j = i … n-1) and keeps a running sum so we don’t recompute from scratch each step.

Why reset sum each time i changes?
Each new i marks a new subarray prefix; sums from the previous start are irrelevant. Resetting keeps the running total correct for the new segment.

Counting
Each time sum == k, we increment cnt. We don’t break, because adding more elements might push the sum away from k and then bring it back later for a longer subarray.

Complexity intuition

We examine every ordered pair (i, j) with i ≤ j, which is roughly n(n+1)/2—hence O(n²) time.

We store only a few integers (sum, cnt, n)—hence O(1) extra space.

Why it’s called brute-force
It literally “tries everything”: no clever pruning, just systematic enumeration. That makes it simple to write and easy to reason about, but slow for large n.


