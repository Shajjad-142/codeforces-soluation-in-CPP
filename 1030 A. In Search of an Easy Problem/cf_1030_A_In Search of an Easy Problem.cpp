//shajjad_shawon
//09-04-2023
//email: 21225103142@cse.bubt.edu.bd (for any kind of information)

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); /* for fast input and output*/
    int n,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if (arr[i]==1)
        {
          flag=1;
        }

    }
    if(flag==1)
    {
        cout<<"HARD";
    }
    else
        cout<<"EASY";


    return 0;
}
