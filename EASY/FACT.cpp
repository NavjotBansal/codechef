#include <bits/stdc++.h>
using namespace std;
int main()
{   std::ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int N,sum=0;
        cin>>N;
        for(;N>=1;)
        {
            sum+=N/5;
            N=N/5;
        }
        cout<<sum<<endl;
    }
    return 0;
}