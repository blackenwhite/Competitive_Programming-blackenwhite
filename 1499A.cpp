#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k1,k2;
	cin>>n>>k1>>k2;
	int w,b;
	cin>>w>>b;

	int tot_w=min(k1,k2);
	tot_w+=abs(k1-k2)/2;

	k1=n-k1;
	k2=n-k2;

	int tot_b=min(k1,k2);
	tot_b+=abs(k1-k2)/2;
	if(w<=tot_w && b<=tot_b){
		cout<<"YES\n";
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
}