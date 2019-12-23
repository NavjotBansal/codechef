#include <bits/stdc++.h>
using namespace std;
int main()
{   std::ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        if(k%3==0)
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
    }
    return 0;
}