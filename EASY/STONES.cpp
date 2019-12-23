#include <bits/stdc++.h>
using namespace std;
int main()
{   std::ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {   int count=0;
        string a,b;
        cin>>a>>b;
        map<char,int>x;
        for(int i=0;i<a.size();i++)
        {
            x[a[i]]=1;
        }
        for(int i=0;i<b.size();i++) 
        {
            if(x[b[i]]==1)
            count++;
        }      
        cout<<count<<endl;
    }
    return 0;
}