/*
https://leetcode.com/explore/learn/card/fun-with-arrays/511/in-place-operations/3259/
*/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int max = arr[n - 1];
        arr[n - 1] = -1;
        for (int i = n - 2; i >= 0; i--) {
            int curr = arr[i];
            arr[i] = max;
            if (curr > max) max = curr; 
        }
        return arr;
    }
};
