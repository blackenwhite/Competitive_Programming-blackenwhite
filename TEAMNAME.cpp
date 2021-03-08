#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int foo(vector<char>&v1,vector<char>&v2){
	set<char>st(v1.begin(),v1.end());
	int ans=0;
	for(auto c:v2){
		if(st.find(c)!=st.end()) ans++;
	}
	return ans;
}


void solve(){
	int n;
	cin>>n;
	map<string,vector<char>>mp;

	string x;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x.size()>0){
			mp[x.substr(1)].push_back(x[0]);
		}

	}

	int ans=0;
	for(auto i:mp){
		for(auto j:mp){
			if(i.first!=j.first){
				int f=foo(i.second,j.second);
				ans+=(i.second.size()-f)*(j.second.size()-f);
			}
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
	return 0;
}