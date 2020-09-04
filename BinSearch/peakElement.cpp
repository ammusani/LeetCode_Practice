/*
https://leetcode.com/explore/learn/card/binary-search/126/template-ii/948/
*/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        
        while (l < r) {
            int m = l + (r - l) / 2;
            if (nums[m] > nums[m + 1]) r = m;
            else l = m + 1;
        }
        return l;
    }
};
