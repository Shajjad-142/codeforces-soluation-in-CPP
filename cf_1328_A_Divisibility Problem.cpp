#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    while(t--)
    {
        int a,b,d,m,i;
        cin>>a>>b;


        if(a%b==0)
        {
            cout<<"0";
        }
        else
        {
//            d=a/b;
//            m=(d+1)*b;
//            i=m-a;
//            cout<<i<<endl;
        d=b-(a%b);
        cout<<d<<"\n";

        }
    }
    return 0;
}
