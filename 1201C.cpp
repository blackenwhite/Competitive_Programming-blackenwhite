#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	ll n,k;
	cin>>n>>k;
	vector<ll>v(n);
	for(ll i=0;i<n;i++){
		cin>>v[i];
	}

	sort(v.begin(),v.end()); // sorted
	ll med=(n-1)/2;
	ll i=med;
	ll count=1;
	while(i<n-1){
		if(k<(count*(v[i+1]-v[i]))){
			cout<<(v[i]+(k/count))<<endl;
			k=0;
			return;
		}
		k-=(count*(v[i+1]-v[i]));
		count++;
		i++;
	}
	cout<<v[n-1]+k/(count)<<endl;
	
}

int main(){
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
}