#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int sum=0;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		sum+=x;
	}
	if(sum%n==0){
		cout<<sum/n<<endl;
	}else{
		int d=sum/n;
		d++;
		cout<<d<<endl;
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