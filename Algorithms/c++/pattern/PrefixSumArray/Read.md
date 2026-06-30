# Prefix Sum / Running Sum

## What is Prefix Sum?

A prefix sum is an array where each element at index `i` stores the sum of all values from the original array from index `0` up to `i`.

For example, given `nums = {1, 2, 3, 4}`, the prefix-sum array is `{1, 3, 6, 10}`.

This is also known as the running sum in the context of a 1D array.

## Why use Prefix Sum?

Prefix sums allow you to answer range-sum queries quickly. Once the prefix-sum array is built, the sum of any subarray `[left, right]` can be computed in O(1) time using:

```cpp
sum(left, right) = prefixSum[right] - (left > 0 ? prefixSum[left - 1] : 0);
```

## When to use this method

Use prefix sum when:

- You need to compute sums for many subarray queries on the same array.
- You want to avoid repeated iteration over the same range of elements.
- The array does not change frequently between queries.
- You are solving problems related to cumulative sums, range sums, or dynamic subarray queries.

## Typical use cases

- Finding the sum of elements in a subarray quickly.
- Speeding up problems that ask for multiple range sums.
- Solving sliding-window and range-query problems with static arrays.
- Reducing repeated O(n) computation to O(1) per query after O(n) preprocessing.

## Complexity

- Building the prefix-sum array: O(n)
- Answering each range sum query: O(1)

## Example

In the example code, `runningSum` computes the prefix-sum array, and `fetchSumBetweenIndices` returns the sum between any two valid indices using the prefix-sum array.

## Related LeetCode problems

- [1480. Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/)
- [560. Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)
- [437. Path Sum III](https://leetcode.com/problems/path-sum-iii/)
- [724. Find Pivot Index](https://leetcode.com/problems/find-pivot-index/)
- [303. Range Sum Query - Immutable](https://leetcode.com/problems/range-sum-query-immutable/)
- [304. Range Sum Query 2D - Immutable](https://leetcode.com/problems/range-sum-query-2d-immutable/)
