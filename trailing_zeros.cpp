#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll mod=1e9+7;

ll foo(ll n){
	if(n==0){
		return 1;
	}

	if(n==1){
		return 5;
	}

	if(n%2){
		ll res=foo(n/2);
		ll ans=res*res*5;
		//ans=mod;
		return ans;

	}else{
		ll res=foo(n/2);
		ll ans=res*res;
		//ans%=mod;
		return ans;
	}
}


int main(){
	ll n;
	cin>>n;
	int i=1;
	ll ans=0;

	while(true){
		ll p=foo(i); // pow(5,x)
		if((n/p)==0){
			cout<<ans<<endl;
			return 0;
		}
		ans+=(n/p);
		i++;
	}
	return 0;
}