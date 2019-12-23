#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
using namespace std;
int main()
{   std::ios::sync_with_stdio(false);
    int t;
    lli p,sum=0,min;
    cin>>t;
    while(t--)
    {   sum=0;
        int N;
        cin>>N;
        vector<lli>x;
        for(int i=0;i<N;i++)
        {   cin>>p;
            sum+=p;
            x.pb(p);
        }
        min=x[0];
        for(int i=0;i<x.size();i++)
        {
            if(min>x[i])
            min=x[i];
        }
        sum=sum-N*min;
        cout<<sum<<endl;
    }
    return 0;
}