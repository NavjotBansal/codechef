#include<bits/stdc++.h>
using namespace std ;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define fr(i,a,b) for(int i=a;i<b;i++)

int main()
{   IOS;
    unordered_map <int,int>x;
    int N,K,p,y,z,count=0;
    //no of coins
    cin>>N>>K;
    rep(i,0,N-1){
        x[i]=0;
    }
    rep(i,0,K-1)
    {
        cin>>p>>y>>z;
        if(!p)
        {
            rep(i,y,z)
            {   
                if(x[i])
                {x[i]=0;}
                else
                {x[i]=1;}
            }
        }
        else
        {count=0;
        rep(i,y,z)
        {
            if(x[i])
            count++;
        }
        cout<<count<<endl;
        }
    }
    return 0;
}