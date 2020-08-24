/*
https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3240/
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int n = A.size();
        vector<int> B;
        int i;
        for (i = 0; i < n; i++) if (A[i] >= 0) break; 
        int j = i - 1;
        int k = i;
        while (j >= 0 && k < n) {
            if (abs(A[j]) < abs(A[k])) {
                B.push_back(A[j] * A[j]);
                j--;
            }
            else {
                B.push_back(A[k] * A[k]);
                k++;
            }
        }
        while (j >= 0) {
            B.push_back(A[j] * A[j]);
            j--;
        }
        while (k < n) {
            B.push_back(A[k] * A[k]);
            k++;
        }
        return B;
    }
};
