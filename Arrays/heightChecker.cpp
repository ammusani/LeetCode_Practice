/*
https://leetcode.com/explore/learn/card/fun-with-arrays/523/conclusion/3228/
*/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> h = heights;
        sort(h.begin(), h.end());
        int count = 0;
        int n = h.size();
        for (int i = 0; i < n; i++) if (h[i] != heights[i]) count++;
        return count;
    }
};
