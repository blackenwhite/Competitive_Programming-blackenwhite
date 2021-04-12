#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;

ll foo(ll n){
	if(n==0){
		return 1;
	}

	if(n==1){
		return 2;
	}

	if(n%2){
		ll res=foo(n/2);
		ll ans=res*res*2;
		ans%=mod;
		return ans;

	}else{
		ll res=foo(n/2);
		ll ans=res*res;
		ans%=mod;
		return ans;
	}
}

int main(){
	ll n;
	cin>>n;
	ll ans=foo(n);
	cout<<ans<<endl;
	return 0;
}