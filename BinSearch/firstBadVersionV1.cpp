/*
https://leetcode.com/explore/learn/card/binary-search/126/template-ii/947/
*/

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0;
        int r = n;
        
        int curAn =  n;
        while (l < r) {
            int m = l + (r - l) / 2;
            
            if (isBadVersion(m)) {
                r = m - 1;
                if (m < curAn) curAn = m;
            }
            else {
                l = m + 1;
            } 
        }
        
        if (l != n && l < curAn && isBadVersion(l)) {
            curAn = l;
        }
        return curAn;
    }
};
