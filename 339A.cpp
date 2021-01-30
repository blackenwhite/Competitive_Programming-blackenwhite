#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n=s.size();
	vector<int>mp;
	stack<char>st;
	for(int i=0;i<n;i++){
		if(s[i]=='+'){
			st.push(s[i]);
		}
		else{
			int p=s[i]-'0';
			mp.push_back(p);
		}
	}

	sort(mp.begin(),mp.end());
	for(auto i:mp){
		cout<<i;
		if(!st.empty()){
			cout<<"+";
			st.pop();
		}
	}
	cout<<endl;
	return 0;
}