/*
https://leetcode.com/explore/learn/card/fun-with-arrays/527/searching-for-items-in-an-array/3250/
*/

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int, int> m;
        int n = arr.size();
        m[arr[0]] = 0;
        for (int i = 1; i < n; i++){
            if (m.find(arr[i] * 2) != m.end()) {
                printf("%d\n", arr[i]);
                return true;
            }
            if ((arr[i] % 2 == 0) && m.find(arr[i] / 2) != m.end()) {
                printf("%d\n", arr[i]);
                return true; 
            }
            m[arr[i]] = i;
        }
        return false;
    }
};
