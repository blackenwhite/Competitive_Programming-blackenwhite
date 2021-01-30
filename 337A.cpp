#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<int>v(m);
	for(int i=0;i<m;i++){
		cin>>v[i];
	}

	sort(v.begin(),v.end());
	int mini=INT_MAX;
	int j=n-1;
	while(j<m){
		int diff=v[j]-v[j-n+1];
		mini=min(mini,diff);
		j++;
	}

	cout<<mini<<endl;

}