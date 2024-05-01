/*
https://codeforces.com/contest/1972/problem/A
Author:Shajjad
*/

#include<bits/stdc++.h>
using namespace std ;


void solve()
{
    int n;cin>>n;
    int k=0,q=0;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
        cin>>arr1[i];
        for(int i=0;i<n;i++)
        cin>>arr2[i];
         for(int i=0;i<n;i++)
         {
             if(arr1[k]<=arr2[q])
             {
                 k++;
                 q++;
             }
             else
                q++;
         }
         cout<<abs(n-k)<<'\n';



}



int main()

{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;
}
