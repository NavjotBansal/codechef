#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int N,p;
    cin>>N;
    vector<lli>x;
    lli sum_max=0,sum_now=0;
    for(int i=0;i<N;i++)
    {
        cin>>p;
        sum_now+=p;
        if(sum_now<0)
        {
            sum_now=0;
            x.push_back(sum_max);
        }
        if(sum_max<sum_now)
        sum_max=sum_now;
    }
    x.push_back(sum_max);
    lli max=0,maxindex=0,val=0;
    for(int i=x.size()-1;i>=0;i--)
    {
        val+=x[i];
        if(val/(x.size()-i)>max)
        {
            max=val/(x.size()-i);
            maxindex=(x.size()-i);
        }
    }
    cout<<max<<" "<<maxindex<<endl;
    return 0;
}