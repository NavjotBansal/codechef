#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int temp=0,flag1=0;
        if(s1.size()>=s2.size())
        {
            for(int i=0;i<s1.size();i++)
            {
                if(s1[i]==s2[temp])
                {
                    temp++;
                    if(temp==s2.size())
                    {
                        flag1=1;
                        break;
                    }
                }
            }
        }
        else{
            for(int i=0;i<s2.size();i++)
            {
                if(s2[i]==s1[temp])
                {
                    temp++;
                    if(temp==s1.size())
                    {
                        flag1=1;
                        break;
                    }
                }
            }
        }
        if(flag1==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}