/*
https://leetcode.com/explore/learn/card/fun-with-arrays/523/conclusion/3231/
*/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int a = INT_MIN;
        int b = INT_MIN;
        int c = INT_MIN;
        int n = nums.size();
        int count = 0;
        int flag = 0;
        printf ("%d %d %d\n", a, b, c);
        for (int i = 0; i < n; i++) {
            if (nums[i] > a) {
                c = b;
                b = a;
                a = nums[i];
                count++;
            }
            else if (nums[i] > b && nums[i] != a) {
                c = b;
                b = nums[i];
                count++;
            }
            else if (nums[i] > c && nums[i] != a && nums[i] != b) {
                c = nums[i];
                count++;
            }
            else if (nums[i] == INT_MIN) flag = 1;
            printf ("%d %d %d\n", a, b, c);
        }
        return c != INT_MIN || count + flag > 2 ? c : a;
    }
};
