# DSA Documentation: Pair with Given Sum

## 1. Question Link

- [GeeksforGeeks Problem: Key Pair](https://www.geeksforgeeks.org/problems/key-pair5616/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card)

## 2. Problem Statement

Given an array `arr[]` of positive integers and another integer `target`, determine if there exist **two distinct indices** such that the sum of the elements at those indices equals `target`.

## 3. Sample Input and Output

**Example 1:**

- **Input:**  
  `arr[] = [1, 4, 45, 6, 10, 8]`  
  `target = 16`
- **Output:**  
  `true`
- **Explanation:**  
  The pair `(6, 10)` (i.e., `arr[3]` and `arr[4]`) sums to `16`.

**Example 2:**

- **Input:**  
  `arr[] = [1, 2, 4, 3, 6]`  
  `target = 11`
- **Output:**  
  `false`
- **Explanation:**  
  No two numbers add up to `11`.

**Example 3:**

- **Input:**  
  `arr[] = [11]`  
  `target = 11`
- **Output:**  
  `false`
- **Explanation:**  
  With only one element, no pair exists.

## 4. Detailed Explanation

The goal is to find if there exists any pair in the array whose sum equals the given `target`. For example, consider the array `[1, 4, 45, 6, 10, 8]` with target `16`:
- By checking pairs, you may eventually find that `6 + 10 = 16`, so the answer is `true`.

The challenge is to implement a solution that is efficient enough for larger arrays. A brute force method would involve checking every possible pair, which is simple but may lead to Time Limit Exceeded (TLE) for large inputs.

## 5. Approach / Thought Process

- **Method 1: Brute Force (Nested Loop)**
  - **Idea:**  
    Use two nested loops to check every possible pair in the array.
  - **Pros:**  
    Simple to implement.
  - **Cons:**  
    Time complexity is O(n²), which may lead to TLE for large arrays.
  
- **Method 2: Two-Pointer Approach (After Sorting)**
  - **Idea:**  
    First, sort the array. Then, use two pointers—one starting at the beginning and the other at the end of the array. If the sum of the values at the two pointers equals the target, return `true`. If the sum is less than the target, move the left pointer to the right; if greater, move the right pointer to the left.
  - **Pros:**  
    More efficient with a time complexity of O(n log n) (due to sorting) and O(n) for the two-pointer scan.
  - **Cons:**  
    Requires sorting the array, which modifies the order of elements.

## 6. Actual Code in C++

### Method 1: Brute Force (Nested Loop) – May Lead to TLE

```cpp
#include <bits/stdc++.h>
using namespace std;

bool findPairBF(int arr[], int size, int target) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target)
                return true;
        }
    }
    return false;
}
```

### Method 2: Two-Pointer Approach

```cpp
#include <bits/stdc++.h>
using namespace std;

bool findPairTP(int arr[], int size, int target) {
    sort(arr, arr + size); // Sorting the array is essential for the two-pointer approach.
    int left = 0, right = size - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target)
            return true;
        else if (sum < target)
            left++;
        else
            right--;
    }
    return false;
}
```

## 7. Code Explanation and Dry Run

### Code Explanation

- **Brute Force Approach:**  
  Iterates over each possible pair using nested loops. If a pair is found that adds up to the target, it returns `true`. Otherwise, it returns `false`.

- **Two-Pointer Approach:**  
  1. **Sort the Array:**  
     The array is first sorted so that the two-pointer technique can be applied.
  2. **Initialize Pointers:**  
     Set `left` pointer at the beginning and `right` pointer at the end of the array.
  3. **Traverse:**  
     While `left < right`, calculate the sum:
     - If `sum == target`, return `true`.
     - If `sum < target`, increment `left` to get a larger sum.
     - If `sum > target`, decrement `right` to get a smaller sum.
  4. **Return:**  
     If no such pair is found, return `false`.

### Dry Run with Three Sample Inputs

1. **Sample Input 1:**  
   `arr[] = [1, 4, 45, 6, 10, 8], target = 16`
   - **After Sorting:** `[1, 4, 6, 8, 10, 45]`
   - **Initial Pointers:** `left = 0 (1)`, `right = 5 (45)` → Sum = 46 (too high)
   - **Adjust `right`:** `right = 4 (10)` → Sum = 1 + 10 = 11 (too low)
   - **Adjust `left`:** `left = 1 (4)` → Sum = 4 + 10 = 14 (too low)
   - **Adjust `left`:** `left = 2 (6)` → Sum = 6 + 10 = 16 (match found)  
     **Output:** `true`

2. **Sample Input 2:**  
   `arr[] = [1, 2, 4, 3, 6], target = 11`
   - **After Sorting:** `[1, 2, 3, 4, 6]`
   - **Initial Pointers:** `left = 0 (1)`, `right = 4 (6)` → Sum = 7 (too low)
   - **Adjust `left`:** `left = 1 (2)` → Sum = 2 + 6 = 8 (too low)
   - **Adjust `left`:** `left = 2 (3)` → Sum = 3 + 6 = 9 (too low)
   - **Adjust `left`:** `left = 3 (4)` → Now `left` equals `right`?  
     **Output:** `false`

3. **Sample Input 3:**  
   `arr[] = [11], target = 11`
   - **Observation:**  
     Array contains only one element; hence no pair exists.
     **Output:** `false`

## 8. Time Complexity

- **Brute Force Approach:** O(n²)
- **Two-Pointer Approach:**  
  - Sorting: O(n log n)  
  - Two-pointer scan: O(n)  
  - **Overall:** O(n log n)

## 9. Conclusion

**One Liner:**  
Using the two-pointer approach after sorting the array provides an efficient way to determine if a pair exists that sums to the target, significantly reducing the time complexity compared to the brute force method.

**Note:**  
Always ensure the array is sorted before applying the two-pointer technique.

## 10. Difficulty Flag

- **Difficulty Level:** Easy

---

This document captures the problem statement, multiple solution approaches, code samples, dry run examples, time complexity analysis, and final learnings for future revision.