/*
https://codeforces.com/problemset/problem/1632/A
Author:Shajjad
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        if(n>2||s=="00"||s=="11")
            cout<<"NO"<<'\n';
        else
            cout<<"Yes"<<'\n';
    }
    return 0;
}
