/*
https://leetcode.com/explore/learn/card/binary-search/125/template-i/950/
*/

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;
    
        long long int sq;
        long long int l = 1;
        long long int r = x;
    
        while (l <= r) {
            long long mid = l + (r - l) / 2;
            if (mid * mid == x) return mid;
            if (mid * mid < x) {
                sq = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        return sq;
    }
};
