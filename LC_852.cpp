/*
Bismillahir Rahmanir Rahim
https://leetcode.com/problems/peak-index-in-a-mountain-array/
Author:Shajjad
*/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

       int x=0;
       for(int i=0;i<arr.size();i++)
       {
        if(arr[i]>arr[i+1])
        {
            x=i;
            break;
        }
/*
85
ms
Beats
39.03%
of users with C++
Memory
62.11
MB
Beats
8.53%
of users with C+++
*/

       }



            //  int x=max_element(arr.begin(),arr.end())-arr.begin();

/*
Runtime
92
ms
Beats
9.82%
of users with C++
Memory
62.02
MB
Beats
44.47%
of users with C++
*/

        return x;
    }
};
