#include <bits/stdc++.h>
using namespace std;
using ll =long long ;
using ld=long double;
#define pii pair<int,int>


void solve(){
	int A,B,k;
	cin>>A>>B>>k;
	vector<int>a(A),b(B);
	vector<pii>edges(k);
	for(auto&[x,y]:edges){
		cin>>x;
	}

	for(auto &[x,y]:edges){
		cin>>y;
	}

	for(auto &[x,y]:edges){
		x--;
		y--;
		a[x]++;
		b[y]++;
	}

	ll ans=0;
	for(auto &[x,y]:edges){
		ans+=k-a[x]-b[y]+1;
	}

	cout<<ans/2<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}