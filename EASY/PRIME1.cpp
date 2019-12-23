#include <bits/stdc++.h>
using namespace std;
int main()
{   std::ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {   
        unsigned int m,n;
        cin>>m;
        cin>>n;
        // cout<<m<<n<<endl;
        for(unsigned int x=m;x<=n;x++)
        {   int flag=1;
            for(unsigned int j=2;j<=sqrt(x);j++)
            {   
                if(x%j==0)
                {   flag=0;
                    break;
                }
            }
            if(flag && x!=1)
            cout<<x<<endl;
        }
    }
    return 0;
} 