/*
https://codeforces.com/problemset/problem/1955/A
Author: Shajjad
*/
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    if(n%2==0)
    {
       int k= (n/2)*b;
       int p=a*n;
       if(k<p)
        cout<<k<<'\n';
       else
        cout<<p<<'\n';

    }
    else
    {
        int y=(((n-1)/2)*b)+a;
        int z=n*a;
        if(y<z)
        cout<<y<<'\n';
       else
        cout<<z<<'\n';


    }
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
