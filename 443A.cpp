#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	unordered_set<char>st;
	int n=s.size();
	for(int i=0;i<n;i++){
		//cout<<i<<" "; // testing
		int p=s[i]-'a';
		if(p>=0 && p<=25){
			//cout<<s[i]<<endl; // test
			st.insert(s[i]);
		}
	}
	cout<<st.size()<<endl;
	return 0;
}