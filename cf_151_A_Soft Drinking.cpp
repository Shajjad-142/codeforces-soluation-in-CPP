#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a,b,f,da,db,df;
     a=k*l;
     b=c*d;
     f=p/np;
     da=a/n;
     db=b/n;
     df=f/n;
     if(da<0||db<0||df<0)
        cout<<"0"<<"\n";
    else if(da==db&&df||db==da&&df||df==da&&db)
        cout<<da<<"\n";
     else{

            if(da<db&&df)
            cout<<da<<"\n";
            else if(db<da&&df)
            cout<<db<<"\n";
            else if(df<da&&db)
            cout<<df<<"\n";

     }


    return 0;
}
