/*
https://codeforces.com/problemset/problem/1956/B
Author: Shajjad
*/
#include<bits/stdc++.h>
using namespace std;
void solve();

int main(){
    int t;cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;

}
void solve(){

long long  n,count=0;
cin>>n;
long long arr[n];
for(long long  i=0;i<n;i++)
    cin>>arr[i];

    sort(arr,arr+n);

   for(long long  i=0;i<n;i++)
   {
       if(arr[i]==arr[i+1])
        count++;
   }
   cout<<count<<'\n';


}
