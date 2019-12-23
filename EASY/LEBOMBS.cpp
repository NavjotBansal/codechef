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
        string s;
        cin>>n;
        cin>>s;
        int size=s.size(),count=0,i=0;
        string x=s;
        while(i<size)
        { 
            if(s[i]=='1')
            {
                if(i!=0)
                x[i-1]='1';
                if(i!=size-1)
                x[i+1]='1';
                i++;
            }
            else i++;
        }
        for(i=0;i<size;i++)
        {
            if(x[i]=='0')
            count++;
        }
        cout<<count<<endl;
    }    
    return 0;
}