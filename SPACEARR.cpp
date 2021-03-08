#include <bits/stdc++.h>
using namespace std;
const int N=2e5+4;

int arr[N];

void solve(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int moves=0;
	for(int i=0;i<n;i++){
		if(arr[i]<=(i+1)){
			moves+=(i+1)-arr[i];
		}else{
			cout<<"Second"<<endl;
			return;
		}

	}

	//cout<<moves<<endl; //test
	if(moves%2){
		cout<<"First"<<endl;
	}else{
		cout<<"Second"<<endl;
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