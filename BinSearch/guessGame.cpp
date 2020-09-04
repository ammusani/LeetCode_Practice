/*
https://leetcode.com/explore/learn/card/binary-search/125/template-i/951/
*/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int g = -1;
        int m;
        int l = 1;
        int r = n;
        while (!g) {
            m = l + (r - l) / 2;
            g = guess (m);
            if (g == 1) {
                l = m + 1;
            }
            else if (g == -1) {
                r = m - 1;
            }
        }
        return m;
    }
};
