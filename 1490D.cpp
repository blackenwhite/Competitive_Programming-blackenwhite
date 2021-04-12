#include <bits/stdc++.h>
using namespace std;

vector<int>d;

void helper(int start,int end,int r_depth,vector<int>&v){
	// base cases
	if(start>end){
		return;
	}

	if(end>=v.size()) {
		return;
	}

	if(start==end){
		d[start]=r_depth;
		return;
	}

	int maxi=INT_MIN;
	int max_id=-1;
	for(int j=start;j<=end;j++){
		if(v[j]>maxi){
			maxi=v[j];
			max_id=j;
		}

	}

	d[max_id]=r_depth;
	helper(start,max_id-1,r_depth+1,v);
	helper(max_id+1,end,r_depth+1,v);

}

void solve(){
	int n;
	cin>>n;
	vector<int>v(n);
	d.resize(n,-1);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	helper(0,n-1,0,v);
	for(int i=0;i<n;i++){
		cout<<d[i]<<" ";
	}
	cout<<"\n";

}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}