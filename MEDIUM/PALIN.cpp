#include<bits/stdc++.h>
using namespace std ;
#define int long long
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
typedef long double ld ;
#define all(a) (a).begin(),(a).end()
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define f first
#define sec second
#define sz(x) ((int)(x).size())
#define prec(n) fixed << setprecision(n)
#define rep(i,a,b) for(int i=a;i<b;++i)
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define mod 1000000007

int n;
string s ;

int make_palindrome()
{
    for(int i=0 ; i<n/2 ; i++){
        s[n-1-i] = s[i] ;
    }
}

string next_palindrome()
{
    for(int i=(n-1)/2 ; i>=0 ; i--)
    {
        if(s[i]!='9')
        {
            s[i]++ ;
            if(n-i-1 != i)
            {
                s[n-i-1]++ ;
            }
            return s ;
        }
        else
        {
            s[i]='0' ;
            s[n-i-1] = '0' ;
        }
    }

    s='1'+ s ;
    for(auto it : s)
    {
        it = '0';
    }
    s[s.size()-1]='1' ;
    s[0]='1' ;
    return s ;
}

signed main(){

    IOS ;
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       //freopen("output.txt", "w", stdout);
    #endif

    int t ; cin >> t ;
    while(t--){
        cin >> s ;
        n = s.size() ;
        string init = s ;
        make_palindrome() ;
        if(s>init)
            cout << s ;
        else
            cout << next_palindrome() ;
        cout << endl ;
    }

return 0 ;
}



