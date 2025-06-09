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

## Code Snippet: Spiral Matrix

```cpp
// Spiral Matrix - LeetCode 
// https://leetcode.com/problems/spiral-matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        

        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            
            for (int j = left; j <= right; j++)
                result.push_back(matrix[top][j]);
            top++;

            for (int i = top; i <= bottom; i++)
                result.push_back(matrix[i][right]);
            right--;

           
            if (top <= bottom) {
                
                for (int j = right; j >= left; j--)
                    result.push_back(matrix[bottom][j]);
                bottom--;
            }

           
            if (left <= right) {
              
                for (int i = bottom; i >= top; i--)
                    result.push_back(matrix[i][left]);
                left++;
            }
        }
        return result;
    }
};


## Code Snippet: Move Zeros

```cpp
// Move Zeros - LeetCode 
// https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;  
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }
        
        int zerosCount = nums.size() - temp.size();
        
       
        for (int i = 0; i < zerosCount; i++) {
            temp.push_back(0);
        }
        
        
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = temp[i];
        }
    }
};


