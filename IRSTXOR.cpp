#include <bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
	int n;
	cin>>n;
	int k=(int)log2(n);
	//cout<<"k: "<<k<<endl; working correctly
	vector<int>a(32,0),b(32,0);
	a[k]=1;
	b[k]=0;
	k--;
	while(k>=0){
		if(n&(1<<k)){
			//cout<<k<<" yes"<<endl;
			b[k]=1;
			a[k]=0;
			k--;
			//continue;
		}else{
			a[k]=1;
			b[k]=1;
			k--;
		}

	}



	ll A=0,B=0;
	for(int i=0;i<32;i++){
		//cout<<a[i]<<" "<<b[i]<<endl;
		A+=a[i]*(1<<i);
		B+=b[i]*(1<<i);
	}

	//cout<<A<<" "<<B<<endl; // testing

	cout<<A*B<<endl;


}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}