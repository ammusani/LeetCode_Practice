/*
https://leetcode.com/explore/learn/card/fun-with-arrays/526/deleting-items-from-an-array/3248/
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        int i;
        int n = nums.size();
        for (i = 1; i < n; i++) {
            while (i + j < n && nums[i + j] == nums[i + j - 1]) j++;
            if (i + j < n) nums[i] = nums[i + j];
        }
        return n - j;
    }
};
