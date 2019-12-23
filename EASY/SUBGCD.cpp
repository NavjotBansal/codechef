// If two consecutive elements are co-prime, i.e GCD(a[i],a[i+1]) =1 , then we can add other elements of the array because the commulative GCS will be unity. you can check this for array of 5 elements: 2 4 5 8 16, since GCD(5,8) =1 , hence GCD of all the elements is one, GCD(2,4,5,8,16)=1, so maximum sub-array which can be chosen is the array itself.
#include<bits/stdc++.h>
#define lli long long int
#define mod 1000000007
#define pb push_back
using namespace std;
lli gcd(lli a, lli b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        lli n,i,ls=0,gs=0;
        cin>>n;
        lli x[n];
        for(i=0;i<n;i++)
        {
            cin>>x[i];
        }
        lli result = x[0];
        for(int i=1;i<n;i++)
        {
            result=__gcd(x[i],result);
        }
        if(result==1)
        cout<<n<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}