#include <bits/stdc++.h>
using namespace std;
int main()
{   std::ios::sync_with_stdio(false);
    int t;
    cin>>t;
    int n,m,b;
    while(t--)
    {
        bool sw=true;
        vector<int>C,A;
        cin>>n>>m;
        vector<bool>X(n,false);        
        
        for(int i=0;i<m;i++)
        {
            cin>>b;
            X[b-1]=true;
        }
        for(int i=0;i<n;i++)
        {
            if(!X[i])
            {
                if(sw)
                C.push_back(i);
                else
                A.push_back(i);

                sw=!sw;
            }
        }
        for(int val:C)
        cout<<val+1<<" ";
        cout<<endl;
        for(int val:A)
        cout<<val+1<<" ";
        cout<<endl;
        X.clear();
        C.clear();
        A.clear();
    }
    return 0;
}