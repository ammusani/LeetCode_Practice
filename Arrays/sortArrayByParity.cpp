/*
https://leetcode.com/explore/learn/card/fun-with-arrays/511/in-place-operations/3260/
*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int i = 0;
        int n = A.size();
        int j = n - 1;
        while(i < j) {
            while(i < n && A[i] % 2 == 0) i++;
            while(j > -1 && A[j] % 2) j--;
            if(i >= j) break;
            else {
                A[i] = A[i] + A[j];
                A[j] = A[i] - A[j];
                A[i] = A[i] - A[j];
            }
        }
        return A;
        
    }
};
