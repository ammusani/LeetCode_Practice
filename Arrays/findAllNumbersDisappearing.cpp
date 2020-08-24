/*
https://leetcode.com/explore/learn/card/fun-with-arrays/523/conclusion/3270/
*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        int n = arr.size();
        vector<int> l;
        for (int i = 0; i < n; i++) {
            arr[abs(arr[i]) - 1] = -abs(arr[abs(arr[i]) - 1]);
        }
        for (int i = 0; i < n; i++) if (arr[i] > 0) l.push_back(i + 1); 
        return l;    
    }
    
};
