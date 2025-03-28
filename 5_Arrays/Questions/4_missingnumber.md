## 1. Question Link

- [LeetCode: Missing Number](https://leetcode.com/problems/missing-number/description/)

## 2. Problem Statement

Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return the only number in the range that is missing from the array.

## 3. Sample Input and Output

**Example 1:**

- **Input:** `nums = [3, 0, 1]`
- **Output:** `2`
- **Explanation:**  
  Since there are 3 numbers, all numbers are in the range `[0, 3]`. The missing number in the range is `2` because it does not appear in `nums`.

**Example 2:**

- **Input:** `nums = [0, 1]`
- **Output:** `2`
- **Explanation:**  
  Since there are 2 numbers, all numbers are in the range `[0, 2]`. The missing number is `2`.

**Example 3:**

- **Input:** `nums = [9,6,4,2,3,5,7,0,1]`
- **Output:** `8`
- **Explanation:**  
  There are 9 numbers in the array, so the range is `[0,9]`. The missing number is `8`.

## 4. Detailed Explanation

The goal is to find the missing number in the sequence `[0, n]` when given an array that contains `n` distinct numbers. Since one number from the full range is missing, the challenge is to identify that missing number efficiently. Two primary strategies can be considered:
- Sorting the array and then comparing the expected value at each index.
- Using properties of XOR to cancel out numbers.

## 5. Approach / Thought Process

- **Method 1: Sorting Approach (O(n log n))**
  - **Idea:**  
    Sort the array and iterate over it. At index `i`, if `nums[i]` is not equal to `i`, then `i` is the missing number.
  - **Pros:**  
    Easy to understand and implement.
  - **Cons:**  
    The sorting step takes O(n log n) time, which is not optimal when an O(n) solution exists.

- **Method 2: XOR Approach (O(n))**
  - **Idea:**  
    Utilize the XOR operation properties:
    - XOR all numbers in the array.
    - XOR all numbers in the range `[0, n]`.
    - The missing number is the XOR of these two results.
  - **Pros:**  
    This method runs in O(n) time with O(1) extra space.
  - **Cons:**  
    Requires a good understanding of bit manipulation.

## 6. Actual Code in C++

### Method 1: Sorting Approach

```cpp
class Solution {
public:
    int sort_nlogn(vector<int> &nums) {
        int n = nums.size(); 
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++) {
            if(nums[i] != i) return i;
        }
        return n;
    }
};
```

### Method 2: XOR Approach

```cpp
class Solution {
public:
    int xor_bigOofN(vector<int> &nums) { 
        int ans = 0; 
        int n = nums.size();
        // XOR all values in the array
        for(int i = 0; i < n; i++) {
            ans = ans ^ nums[i];
        }
        // XOR all values in the range [0, n]
        for(int i = 0; i <= n; i++){
            ans = ans ^ i;
        }
        return ans;
    }

    int missingNumber(vector<int>& nums) {
        // return sort_nlogn(nums); 
        return xor_bigOofN(nums);
    }
};
```

## 7. Code Explanation and Dry Run

### Code Explanation

- **Sorting Approach:**  
  1. Sort the input array.
  2. Iterate through the sorted array, checking if each element equals its index.
  3. The first index `i` where `nums[i] != i` is the missing number.
  4. If no mismatch is found, then the missing number is `n`.

- **XOR Approach:**  
  1. Initialize an answer variable `ans` to 0.
  2. XOR all elements in the array. Due to the XOR properties, numbers appearing in both the array and the full range will cancel out.
  3. XOR the result with all numbers in the range `[0, n]`.
  4. The final result stored in `ans` is the missing number.

### Dry Run with Three Sample Inputs

1. **Example 1:** `nums = [3, 0, 1]`
   - **XOR of Array Elements:**  
     `3 ^ 0 ^ 1`
   - **XOR of Range `[0, 3]`:**  
     `0 ^ 1 ^ 2 ^ 3`
   - **Combined XOR (Cancellation):**  
     Cancelling out common terms leaves `2` as the result.
   - **Output:** `2`

2. **Example 2:** `nums = [0, 1]`
   - **XOR of Array Elements:**  
     `0 ^ 1`
   - **XOR of Range `[0, 2]`:**  
     `0 ^ 1 ^ 2`
   - **Combined XOR:**  
     Cancelling common values yields `2`.
   - **Output:** `2`

3. **Example 3:** `nums = [9,6,4,2,3,5,7,0,1]`
   - **XOR of Array Elements:**  
     XOR all provided numbers.
   - **XOR of Range `[0, 9]`:**  
     XOR all numbers from 0 to 9.
   - **Combined XOR:**  
     The missing number after cancellation is `8`.
   - **Output:** `8`

## 8. Time Complexity

- **Sorting Approach:**  
  - Sorting takes O(n log n), and the iteration takes O(n).  
  - **Overall:** O(n log n).

- **XOR Approach:**  
  - Both loops run in O(n).  
  - **Overall:** O(n) with O(1) extra space.

## 9. Conclusion

**One Liner:**  
Using the XOR approach efficiently finds the missing number in O(n) time and O(1) space, making it the optimal solution for this problem.

**Note:**  
Leveraging bit manipulation, particularly XOR properties, is a powerful technique for solving problems involving cancellations or pairwise matching.

## 10. Difficulty Flag

- **Difficulty Level:** Easy
