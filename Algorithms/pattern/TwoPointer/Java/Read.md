# Two Pointer - Container With Most Water (Java)

## What this example shows

This Java example demonstrates the two pointer pattern using the classic "Container With Most Water" problem.

## Functionality

- `mostWater(int[] height)` computes the maximum water area contained between two vertical lines.
- It uses two pointers (`left` and `right`) that move toward each other.
- At each step, it calculates the current area and updates the maximum.

## When to use this pattern

Use this pattern when:

- the problem involves pairs of elements on opposite ends of a sorted or linear structure
- you need to maximize or minimize a value over a range with a simple comparison
- you want to avoid nested loops and achieve O(n) time complexity

## How to run

Compile and run the Java program:

```bash
cd Algorithms/pattern/TwoPointer/Java
javac MostWater.java
java MostWater
```

## Expected output

```text
Input heights: [1, 8, 6, 2, 5, 4, 8, 3, 7]
Maximum area of water that can be contained: 49
```

## Related LeetCode problem

- [11. Container With Most Water](https://leetcode.com/problems/container-with-most-water/)
