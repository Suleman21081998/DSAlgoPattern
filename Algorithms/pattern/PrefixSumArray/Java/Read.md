# Prefix Sum / Running Sum in Java

## What this example shows

This Java example demonstrates how to compute a prefix-sum (running sum) array and use it to answer range-sum queries efficiently.

## Functions

- `runningSum(int[] nums)` builds the prefix-sum array from the input array.
- `fetchSumBetweenIndices(int[] prefixSum, int left, int right)` returns the sum of elements between two indices using the prefix-sum array.

## When to use prefix sum

Use prefix sum when you need to answer multiple range-sum queries over the same array and the array values are static or rarely changed.

## Example output

Given input array `[1, 2, 3, 4]`, the output is:

- `Prefix sum array: [1, 3, 6, 10]`
- `Sum between indices 1 and 3 is 9`

## How to run

Compile and run the Java program:

```bash
cd Algorithms/pattern/PrefixSumArray/Java
javac PrefixSum.java
java PrefixSum
```

## Related LeetCode problems

- [1480. Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/)
- [560. Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)
- [724. Find Pivot Index](https://leetcode.com/problems/find-pivot-index/)
- [303. Range Sum Query - Immutable](https://leetcode.com/problems/range-sum-query-immutable/)
