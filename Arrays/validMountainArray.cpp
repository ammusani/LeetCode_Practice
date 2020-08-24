/*
https://leetcode.com/explore/learn/card/fun-with-arrays/527/searching-for-items-in-an-array/3251/
*/

class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int flag = -1;
        int n = A.size();
        for (int i = 1; i < n; i++) {
            if (A[i - 1] > A[i]) {
                if (flag == -1) return false;
                if (flag == 0) flag = 1;
            }
            else if (A[i - 1] < A[i]) {
                if (flag == -1) flag = 0;
                if (flag) return false;
            }
            else return false;
        }
        if(flag == 1) return true;
        return false;
    }
};
