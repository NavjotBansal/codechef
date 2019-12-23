#include<bits/stdc++.h>
#define lli long long int
#define mod 1000000007
#define pb push_back
using namespace std;
int getNum(string s)
{   int count=0;
    stringstream x(s);
    string inter;
    while(getline(x,inter,' '))
    {
        if(count++)
        return stoi(inter);
    }
    return 0;
}
int main()  
{
    ios_base::sync_with_stdio(false);
    int N,K,count=0;
    cin>>N>>K;
    string s;
    map<int,int>x;
    vector<int>ans;
    // all closed
    for(int i=1;i<=N;i++)
    x[i]=0;
    // repeating 
    cin.ignore(80,'\n');
    for(int i=0;i<K;i++)
    {   
        getline(cin,s);
        int num=getNum(s);
        if(num==0)
        {for(int i=1;i<=N;i++)
         x[i]=0;
         count=0;
        }
        else
        {   
            if(x[num]==1)
            {count--;x[num]=0;}
            else
            {count++;x[num]=1;}
            // cout<<num<<" ";
        }
        ans.pb(count);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}