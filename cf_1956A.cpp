/*
https://codeforces.com/problemset/problem/1956/A
Author:Shajjad
*/
#include<bits/stdc++.h>
using namespace std;
void solve();
void solve2();

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            solve();
    }


    return 0;
}
void solve()
{

    int k,q;
    cin>>k>>q;
    int arr1[k],arr2[q];
    for(int i=0;i<k;i++)
    cin>>arr1[i];
        for(int i=0;i<q;i++)
        cin>>arr2[i];

       int p=arr1[0];
      // while(q--)
      // {
      //     solve2(arr2,p,q)
       //}

    for(int i=0;i<q;i++)
            {
                if(p<=arr2[i])
                    cout<<p-1<<" ";
                else
                    cout<<arr2[i]<<" ";
            }

}

/*void solve2(int arr2[],int p,int q){

            int s;

            for(int i=0;i<q;i++)
            {
                if
            }





}*/
