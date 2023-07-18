#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,count=0;
        cin>>a>>b;

            for(int i=0;i<b;i++)
                cout<<"ok" ;
            if(a%b==0)
            {
            cout<<0<<endl;

            }
            else
            {
                int d,p;
                d=a/b;
                p=(d+1)*b;
            cout<<abs(p-a)<<endl;
            }



    }

    return 0;
}
