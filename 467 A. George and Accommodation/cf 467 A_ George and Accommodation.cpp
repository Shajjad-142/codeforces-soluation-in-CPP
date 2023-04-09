//shajjad_shawon
//09-04-2023
//email: 21225103142@cse.bubt.edu.bd (for any kind of information)

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); /* for fast input and output*/

    int n,p,q,s,flag=0,temp=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p>>q;
        s=q-p;
        if(s>=2)
        {
            flag=1;
            temp++;
        }

    }
    if(flag==1)
    {
        cout<<temp<<"\n";
    }
    else
        cout<<0<<"\n";

    return 0;
}
