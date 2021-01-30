#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v(3,0);
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=6;i++){
		if(abs(a-i)<abs(b-i)) v[0]++;
		else if(abs(a-i)==abs(b-i)) v[1]++;
		else v[2]++;
	}

	for(auto i:v){
		cout<<i<<" ";
	}
	return 0;
}