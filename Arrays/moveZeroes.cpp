/*
https://leetcode.com/explore/learn/card/fun-with-arrays/511/in-place-operations/3157/
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            while(i + j < n && nums[i + j] == 0) j++;
            
            if (i + j >= n) break;
            nums[i] = nums[i + j];
        }
        int i = n - 1;
        while(j--) nums[i - j] = 0;
    }
};
