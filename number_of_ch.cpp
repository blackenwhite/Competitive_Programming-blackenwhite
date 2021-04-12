#include <bits/stdc++.h>
using namespace std;
#define ll long long 


void solve(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	sort(v.begin(),v.end());
}

int main(){
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
}