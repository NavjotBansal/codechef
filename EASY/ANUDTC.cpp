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
 	int t,n;cin>>t;
 	while(t--)
 	{
 		cin>>n;
 		char x = 360%n==0 ? 'y' : 'n';
 		cout<<x<<" ";
 		x = n<=360 ? 'y' : 'n';
 		cout<<x<<" ";
 		x = n*(n+1)<=720 ? 'y' : 'n'; 
 		cout<<x<<endl;
  	}
    return 0;
}