/*
https://leetcode.com/explore/learn/card/fun-with-arrays/525/inserting-items-into-an-array/3253/
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        for (int i = 0; i < n; i++) nums1.pop_back();
        while(i < m + n && j < n) {
            if (nums1[i] > nums2[j]) {
                nums1.insert(nums1.begin() + i, nums2[j]);
                j++;
                i++;
            }
            else {
                i++;
            }
        }
        while (j < n) {
            nums1.push_back(nums2[j]);
            j++;
        }
    }
};
