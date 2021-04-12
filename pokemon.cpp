#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int>a(n),b(n);
	for(int i=0;i<n;i++) 
		cin>>a[i];
	for(int i=0;i<n;i++) 
		cin>>b[i];

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	int ans=0;
	int j=0; // a's index
	for(int i=0;i<n;i++){ // b's index
		

		while(j<n && b[i]>=a[j]) j++;
		if(j>=n) {
			cout<<ans<<endl;
			return;
		}
		j++;
		ans++;

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