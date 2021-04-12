#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
	ll n;
	cin>>n;
	vector<ll>v(n,0);

	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	ll even_sum=v[0];
	ll odd_sum=v[1];

	ll even_min=v[0];
	ll odd_min=v[1];

	ll ans=(even_sum*n)+(odd_sum*n);

	for(ll i=2;i<n;i++){
		if(i%2){
			odd_sum+=v[i];
			odd_min=min(odd_min,v[i]);

		}else{
			even_sum+=v[i];
			even_min=min(even_min,v[i]);
		}

		ll even=(i/2)+1;
		ll odd=(i+1)/2;

		ll odd_ans=odd_sum+odd_min*(n-odd);
		ll even_ans=even_sum+even_min*(n-even);

		ans=min(ans,odd_ans+even_ans);
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}