#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	int max_k=(n-1)/2;
	if(k>max_k){
		cout<<-1<<endl;
		return;
	}

	vector<int>v(n,-1);
	v[0]=1;
	int i=1;
	int num=2;
	//cout<<"hell";
	while(i<n){
		if(v[i]!=-1){
			i++;
			continue;
		}

		if(k>0){
			// peak required
			v[i+1]=num;
			num++;
			v[i]=num;
			num++;
			i+=2;
			k--;
			continue;
		}

		v[i]=num;
		num++;
		i++;

	}

	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}