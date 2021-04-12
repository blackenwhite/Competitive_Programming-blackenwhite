#include <bits/stdc++.h>
using namespace std;

int foo(int mx,int mn){
	int ans=0;
	while(mn*2<mx) {
		ans++;
		mn+=mn;
	}
	return ans;
}

void solve(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	int ans=0;

	for(int i=0;i<n-1;i++){
		int mini=min(v[i],v[i+1]);
		int maxi=max(v[i],v[i+1]);
		if(maxi>2*(mini)){
			ans+=foo(maxi,mini);
		}
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