#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define llf long long float
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define mod 1000000007
#define u_m unordered_map

int main()
{

    IOS;
    #ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    #endif

    int t,n,m,p,v; cin>>t;
    while(t--)
    {
    	int mini=INT_MAX,maxi=INT_MIN;cin>>n>>m;
    	vector<int>a(n,0);
    	int b[m];
    	while(m--)
    	{	
    		cin>>p;
    		mini=min(p,mini);maxi=max(p,maxi);
    	}
    	a[mini]=0;
    	for(int i=mini;i<n;i++)
    		a[i]=i-mini;
    	for(int i=mini-1;i>=0;i--)
    		a[i]=mini-i;
    	for(int i=maxi;i<n;i++)
    		a[i]=max(a[i],i-maxi);
    	for(int i=maxi-1;i>=0;i--)
    		a[i]=max(a[i],maxi-i);
    	
    	for(auto i:a)
    		cout<<i<<" ";
    	cout<<endl;
    }
    return 0;
}