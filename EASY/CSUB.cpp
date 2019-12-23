#include <bits/stdc++.h>
using namespace std;
int main()
{   std::ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
    {
    int n,r;
    long long a=0,b=0;
  	string str;
  	cin>>n;
  	cin>>str;
  	for(int i=0;i<n;i++)
  	{ if(str[i]=='1')
  		{b++;
  		 a+=b;
  		}
  	}
  	cout<<a<<endl;
    }
    return 0;
}