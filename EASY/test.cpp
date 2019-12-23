#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){		
	int t;
	cin >>t;
	for(int u=0 ;u<t ;u++){
		int n;
		cin >> n;
		int a[n];
		cin >> a[0];
		int g=a[0];
		int l=-1;
		for(int i=1 ;i<n;i++){
			cin >> a[i];
			g=__gcd(g,a[i]);
			if(g==1){
				l=n;
			}
		}
		cout << l << endl;
		
	}
}