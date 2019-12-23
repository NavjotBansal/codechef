#include <bits/stdc++.h>
using namespace std;
int main()
{   std::ios::sync_with_stdio(false);
    int i;
    int a,b,c,count=0;
    cin>>a>>b>>c;
    int sum=a+b+c;
    vector<int>x;
    map<int,int>ans;
    for(i=0;i<sum;i++)
    {
        int p;
        cin>>p;
        x.push_back(p);
    }
    sort(x.begin(),x.end());
    sum=0;
    for(i=0;i<x.size()-1;i++)
    {   
        if(x[i]!=x[i+1])
        {   if(count)
            sum++; 
            count=0;
        }
        else if(x[i]==x[i+1])
        {
            count++;
        }
    }
    cout<<sum<<endl;
    for(i=0;i<x.size()-1;i++)
    {   
        if(x[i]!=x[i+1])
        {   if(count)
            cout<<x[i]<<endl;
            count=0;
        }
        else if(x[i]==x[i+1])
        {
            count++;
        }
    }
    return 0;
}