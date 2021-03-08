#include <bits/stdc++.h>
using namespace std;
#define ll long long 


void solve(){
	ll n;
	cin>>n;
	vector<ll>v(n);
	for(ll i=0;i<n;i++){
		cin>>v[i];
	}

	sort(v.begin(),v.end());
	cout<<(2*(v[n-1]-v[0]))<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}