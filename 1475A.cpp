#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
using ld=long double;


void solve(){
	ll n;
	cin>>n;
	if(n&(n-1)){
		cout<<"Yes\n";
	}else{
		cout<<"No\n";
	}

}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}