#include<bits/stdc++.h>
using namespace std ;
#define lli unsigned long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define rep(i,a,b) for(int i=a;i<=b;i++)
string shift(string x,int f)
{
    int limit = f%(x.length());
    string p,q;
    p=x.substr(0,limit);
    q=x.substr(0+limit,x.length()-limit);
    q+=p;
    return q;
}
int main()
{
    int N;
    cin>>N;
    string p;
    vector<string>x;
    for(int i=0;i<N;i++)
    {
        cin>>p;
        x.pb(p);
    }
    int K,a,b,c,f;
    cin>>K;
    while(K--)
    {
        cin>>a;
        if(a==0)
        {
            cin>>b>>c>>f;
            rep(i,b,c)
            {
                x[i]=shift(x[i],f);
            }
        }
        else
        {   cin>>b>>c;
            int max=0;
            rep(i,b,c)
            {
                if(stoi(x[i])>max)
                max=stoi(x[i]);
            }
            cout<<max<<endl;
        }
    }
}