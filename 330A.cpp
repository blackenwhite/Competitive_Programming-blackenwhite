#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<string>mat(n);
	for(int i=0;i<n;i++){
		cin>>mat[i];
	}

	unordered_set<int>ro,co;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mat[i][j]=='S'){
				ro.insert(i);
				co.insert(j);
			}
		}
	}
	int a=ro.size();
	int b=co.size();

	int ans=n*m-a*b;
	cout<<ans<<endl;

	return 0;
}