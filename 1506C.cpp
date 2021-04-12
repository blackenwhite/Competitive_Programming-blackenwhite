#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a,b;
	cin>>a>>b;
	int n=a.size();
	int m=b.size();

	int ans=0;
	for(int len=0;len<=min(n,m);len++){
		for(int i=0;i+len<=n;i++){
			for(int j=0;j+len<=m;j++){
				if(a.substr(i,len)==b.substr(j,len)){
					ans=max(ans,len);
				}
			}
		}
	}
	cout<<n+m-2*ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}