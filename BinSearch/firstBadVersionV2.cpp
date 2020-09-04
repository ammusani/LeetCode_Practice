/*
https://leetcode.com/explore/learn/card/binary-search/126/template-ii/947/
*/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0;
        int r = n;
        
        while (l < r) {
            int m = l + (r - l) / 2;
            
            if (isBadVersion(m)) r = m;
            else l = m + 1;
        }
        
        return l;
    }
};
