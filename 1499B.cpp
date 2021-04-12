#include <bits/stdc++.h>
using namespace std;
#define pb push_back 

void solve(){
	string s;
	cin>>s;
	int n=s.size();

	vector<int>v[2];
	for(int i=0;i<n-1;i++){
		if(s[i]==s[i+1]){
			v[s[i]-'0'].pb(i);
		}
	}

	if(v[0].empty() || v[1].empty()){
		cout<<"Yes\n";
		return;
	}

	int a=v[0].back();
	int b=v[1].front();

	if(a<b){
		cout<<"Yes\n";
	}
	else{
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