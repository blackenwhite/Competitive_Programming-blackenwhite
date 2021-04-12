#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
	ll n,m,x;
	cin>>n>>m>>x;
	x--;
	ll cols=x/n;
	ll r=x%n;
	ll y=r*m+cols+1;
	cout<<y<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}