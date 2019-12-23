#include<bits/stdc++.h>
using namespace std ;
#define lli long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define forl(i,a,b) for(int i=a;i<b;i++)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define mod 1000000007
int main()
{
    int t;
    cin>>t;
    int count=1;
    while(t--)
    {   
        int M,N;cin>>M>>N;int x,y;cin>>x>>y;int i=0,j=0;int size;cin>>size;char c;
        forl(p,0,size)
        {
            cin>>c;
            if(c=='L')i--;
            else if(c=='R')i++;
            else if(c=='U')j++;
            else j--;
        }
        cout<<"Case "<<count++<<": ";
        if(i<0 || i>M || j<0 || j>N)
        cout<<"DANGER"<<endl;
        else if(i==x && j==y)
        cout<<"REACHED"<<endl;
        else
        cout<<"SOMEWHERE"<<endl;
    }
    return 0;
}