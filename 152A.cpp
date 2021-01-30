#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<string>mat(n);
	for(int i=0;i<n;i++){
		cin>>mat[i];
	}

	unordered_set<int>st;
	for(int j=0;j<m;j++){
		
		int maxi=-1;
		for(int i=0;i<n;i++){
			int x=mat[i][j]-'0';
			if(x>maxi){
				maxi=x;
			}
		}

		for(int i=0;i<n;i++){
			int x=mat[i][j]-'0';
			if(x==maxi){
				st.insert(i);
			}
		}
	}

	cout<<st.size()<<endl;

}