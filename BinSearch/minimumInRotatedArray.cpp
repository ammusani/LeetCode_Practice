/*
https://leetcode.com/explore/learn/card/binary-search/126/template-ii/949/
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        if (n == 1 || nums[r] > nums[0]) return nums[0];
        while (l < r) {
            int m = l + (r - l) / 2;
            if (nums[m] > nums[m + 1]) return nums[m + 1];
            if (nums[m] < nums[m - 1]) return nums[m];
            if (nums[m] > nums[0]) l = m + 1;
            else r = m - 1;
        }
        return -1;
    }
};
