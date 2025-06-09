# Day 1: Programming Basics, Arrays & Matrices

## Topics Covered
- C++ syntax, data types, loops, functions
- Arrays (1D), matrices (2D)
- Debugging essentials

---

## Code Snippet: Two Sum 

```cpp
// Two Sum - LeetCode 
// https://leetcode.com/problems/two-sum/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};
