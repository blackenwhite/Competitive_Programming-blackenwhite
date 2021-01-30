#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<char>>mat(n,vector<char>(m,'.'));
	for(int i=0;i<n;i+=2){
		for(int j=0;j<m;j++){
			mat[i][j]='#';
		}
	}

	for(int i=1;i<n;i+=2){
		int k=i/2;
		if(k%2==0){
			mat[i][m-1]='#';
		}else{
			mat[i][0]='#';
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<mat[i][j];
		}
		cout<<endl;
	}

	return 0;
}