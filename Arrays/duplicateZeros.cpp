/*
https://leetcode.com/explore/learn/card/fun-with-arrays/525/inserting-items-into-an-array/3245/
*/

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (!arr[i]) {
                arr.insert(arr.begin() + i, 0);
                arr.pop_back();
                i++;
            }
        }
    }
};
