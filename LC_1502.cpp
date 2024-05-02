
/*
Bismillahir Rahmanir Rahim
https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/
Author:Shajjad
*/

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
       sort(arr.begin(), arr.end());
        int x = abs(arr[0] - arr[1]);
        int f = 0;
        for (int i = 0; i < arr.size() - 1; ++i) {
            if (abs(arr[i] - arr[i + 1]) == x) {
                continue;
            } else {
                f = 1;
                break;
            }
        }
        return (f == 1) ? false : true;
    }
};
/*
Runtime
6
ms
Beats
24.93%
of users with C++
Memory
11.64
MB
Beats
30.96%
of users with C++
*/


