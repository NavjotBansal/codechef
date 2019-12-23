#include <bits/stdc++.h>
using namespace std;
int main()
{   std::ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
    {
        int K,N,sum=0,sum1=0,sum2=0,p;
        cin>>N;
        cin>>K;
        vector<unsigned int>x;
        for(int i=0;i<N;i++)
        {
            cin>>p;
            sum+=p;
            x.push_back(p);
        }
        sort(x.begin(),x.end());
        for(int i=0;i<K;i++)
        {
            sum2+=x[i];
        }
        for(int i=N-1;i>=N-K;i--)
        {
            sum1+=x[i]; 
        }
        int maxi=max(abs(2*sum1-sum),abs(2*sum2-sum));
        cout<<maxi<<endl;
    }
    return 0;
}