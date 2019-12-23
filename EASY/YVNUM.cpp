#include<bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
lli pw(lli x,lli n)
{
	if(n==0)
        return 1;
    else if(n%2 == 0)       
        return pw((x*x)%mod,n/2);
    else                             
        return (x*pw((x*x)%mod,(n-1)/2))%mod;
}
int main()
{
	ios_base::sync_with_stdio(false);
   	lli t,i,j,sum,n,x,ans,y,k,z;
   	string s;
   	lli a[100001];
   	for(i=0;i<=100000;i++)
   	a[i]=pw(10,i);
   	cin>>t;
   	while(t--)
   	{
   		cin>>s;
   		n=s.size();
   		sum=0;
   		for(i=s.size()-1,j=0;i>=0;i--,j++)
   		{
   			sum=(sum+(s[i]-'0')*a[j])%mod;
		}
		ans=sum;
		z=n*n;
		ans=(ans*pw(10,(n-1)*n))%mod;
		for(i=1;i<n;i++)
		{
			//cout<<ans<<endl;
			sum =sum-((s[i-1]-'0')*a[n-1])%mod;
			if(sum<0)
			sum+=mod;
			sum = (sum*10)%mod;
			sum =sum + (s[i-1]-'0');
			y=sum;
			y=(y*pw(10,n*(n-i-1)))%mod;
			ans=(y+ans)%mod;	
		}
   		cout<<ans<<endl;	
	} 	
}