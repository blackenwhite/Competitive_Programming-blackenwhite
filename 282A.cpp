#include <bits/stdc++.h>
using namespace std;
int ans=0;

int main(){
	int n;
	cin>>n;
	string s;
	while(n--){
		cin>>s;
		if(s[1]=='-'){
			ans--;
		}else if(s[1]=='+'){
			ans++;
		}
	}
	cout<<ans<<endl;
}