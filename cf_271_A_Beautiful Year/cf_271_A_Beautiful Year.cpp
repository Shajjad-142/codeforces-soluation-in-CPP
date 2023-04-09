#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


        int y;
        cin>>y;
        while(1)
        {
            y++;
            int a,b,c,d;
            a=y/1000;
            b=(y/100)%10;
            c=(y/10)%10;
            d=y%10;
            if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
            {
                break;
            }


        }
        cout<<y<<"\n";


    return 0;
}

