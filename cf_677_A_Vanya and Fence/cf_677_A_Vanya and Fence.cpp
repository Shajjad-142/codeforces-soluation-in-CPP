#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,h,w=0;
    cin>>n>>h;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        if (arr[i]>h)
        {
           w=w+2 ;
        }
        else{w=w+1;}

    }
    cout<<w<<"\n";


    return 0;
}
