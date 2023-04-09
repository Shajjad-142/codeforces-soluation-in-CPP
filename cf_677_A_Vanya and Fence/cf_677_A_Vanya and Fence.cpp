//shajjad_shawon
//04-09-2023
//email: 21225103142@cse.bubt.edu.bd (for any kind of information) 

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
                               /* for fast input and output*/
    int n,h,w=0;             //declear n for Number of person,h for Hight
    cin>>n>>h;
    int arr[n];             
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];        //arr[n] which stored every person hight
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
