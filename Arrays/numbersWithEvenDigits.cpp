/*
https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3237/
*/
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int l;
        for (int i = 0; i < nums.size(); i++) {
            l = log10(nums[i]);
            if (l % 2) count++;
        }
        return count;
    }
};
