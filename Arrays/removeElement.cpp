/*
https://leetcode.com/explore/learn/card/fun-with-arrays/526/deleting-items-from-an-array/3247/
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        for (i = 0; i < n; i++) {
            while (i + j < n && nums[i + j] == val) j++;
            if (i + j < n) nums[i] = nums[i + j];
        }
        //printf("%d\n", j);
        return n - j;
    }
};
