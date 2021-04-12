#include <bits/stdc++.h>
using namespace std;
#define ll long long 

unordered_set<ll>st;

void solve(){
	ll x;
	cin>>x;
	for(ll j=1;j<=10000;j++){
		ll temp1=j*j*j;
		ll temp2=x-temp1;

		if(st.find(temp2)!=st.end()){
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
	
}

int main(){
	int t;
	cin>>t;

	for(ll i=1;i<=10000;i++){
		st.insert(i*i*i);
	}
	while(t--){
		solve();
	}

}