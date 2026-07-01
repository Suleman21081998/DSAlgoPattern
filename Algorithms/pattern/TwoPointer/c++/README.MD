# Two Pointer Pattern

## What is the Two Pointer Pattern?

The two pointer pattern uses two indices that move through the array from either end, from the same end, or from different directions. It is useful for solving problems in linear time by reducing nested loops.

## When to use it

Use the two pointer pattern when:

- the array or string is sorted
- you need to find pairs or triplets that satisfy a condition
- you need to search for a target sum in one pass
- you need to remove duplicates or partition data in place
- you need to compare or merge two sequences efficiently

## Common approaches

- `left` and `right` pointers moving toward each other
- `slow` and `fast` pointers moving at different speeds
- one pointer scanning while the other tracks a valid window or boundary

## Benefits

- often reduces O(n^2) brute force solutions to O(n)
- works well with sorted arrays and strings
- allows in-place solutions with constant extra space

## Related Two Pointer and HashMap variants

### Two pointer array variants

- pair sum problems using left/right pointers on sorted arrays
- three-sum and k-sum problems using sorting + two pointers
- container and max-area problems with opposite-end pointers
- merge / union operations on sorted arrays
- removing duplicates or shifting elements in place

### When to use HashMap variants

Use hashmap-based array variants when:

- the input array is not sorted
- you need constant-time lookups for complements or frequency counts
- you need to detect duplicates, pair sums, or subarrays with given sum
- two pointers alone cannot handle unordered inputs efficiently

### HashMap + two pointer hybrid problems

Some array problems combine sorting/two pointers with hashing for frequency or index lookup.

## Related LeetCode problems

### Classic two pointer problems

- [1. Two Sum](https://leetcode.com/problems/two-sum/)
- [15. 3Sum](https://leetcode.com/problems/3sum/)
- [16. 3Sum Closest](https://leetcode.com/problems/3sum-closest/)
- [18. 4Sum](https://leetcode.com/problems/4sum/)
- [11. Container With Most Water](https://leetcode.com/problems/container-with-most-water/)
- [167. Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)
- [1679. Max Number of K-Sum Pairs](https://leetcode.com/problems/max-number-of-k-sum-pairs/)
- [88. Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)
- [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

### HashMap / complement-based problems

- [1. Two Sum](https://leetcode.com/problems/two-sum/)
- [560. Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)
- [523. Continuous Subarray Sum](https://leetcode.com/problems/continuous-subarray-sum/)
- [49. Group Anagrams](https://leetcode.com/problems/group-anagrams/)
- [76. Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)
- [3. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
- [438. Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/)
- [454. 4Sum II](https://leetcode.com/problems/4sum-ii/)
- [560. Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)
- [325. Maximum Size Subarray Sum Equals k](https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/)
- [76. Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)
11. Container With Most Water (https://leetcode.com/problems/container-with-most-water/)

### Other useful variants

- [345. Reverse Vowels of a String](https://leetcode.com/problems/reverse-vowels-of-a-string/)
- [159. Longest Substring with At Most Two Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/)
- [438. Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/)
- [992. Subarrays with K Different Integers](https://leetcode.com/problems/subarrays-with-k-different-integers/)

## Run this example

To run the `mostwater.cpp` file:

```bash
cd Algorithms/pattern/TwoPointer/c++
g++ -std=c++17 mostwater.cpp -o mostwater
./mostwater
```

Expected output:

```text
Maximum area of water that can be contained: 49
```
