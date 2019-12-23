#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
using namespace std;
int main()
{   std::ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {   int n;
        cin>>n;
        string s="",ans="";
        for(char c='z';c>='a';--c)
        {
            s+=c;
        }
        int m=n%25;
        int q=n/25;
        if(m!=0)
        {
            ans+=s.substr(25-m,m+1);
        }
        while(q--)
        {
            ans+=s;
        }
        cout<<ans<<endl;
    }
    return 0;
}