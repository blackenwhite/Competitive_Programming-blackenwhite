#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	for(int b=0;(n-b*2021)>=0;b++){
		if((n-b*2021)%2020==0){
			cout<<"Yes"<<endl;
			return;
		}
	}
	cout<<"No"<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;

}