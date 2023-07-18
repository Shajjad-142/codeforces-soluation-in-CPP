#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n ;
    cin>>n;
    int arr[n],temp;
    for (int i=1 ;i<=n;i++)
    {
        cin>>temp;
        arr[temp]=i;


    }
    for (int i=1 ;i<=n;i++)
    {
        cout<<arr[i]<<"\n";

    }

    return 0;
}
