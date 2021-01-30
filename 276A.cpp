#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int>f(n),t(n);

	for(int i=0;i<n;i++){
		cin>>f[i]>>t[i];
	}

	vector<int>joys(n);
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		joys[i]=min(f[i],f[i]-(t[i]-k));
		maxi=max(maxi,joys[i]);
	}

	cout<<maxi<<endl;
	return 0;
}