#include <bits/stdc++.h>
using namespace std;
#define ll long long 


void solve(){
	ll a,b;
	cin>>a>>b;
	ll x=2*a-b;
	ll y=2*b-a;
	if(x<0 ||(x%3!=0)){
		cout<<"NO"<<endl;
		return;
	}

	if(y<0 || (y%3)!=0){
		cout<<"NO"<<endl;
		return;
	}

	cout<<"YES"<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}