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
