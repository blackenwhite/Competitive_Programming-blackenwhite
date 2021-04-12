#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int n=s.size();
	int a_count=0;
	for(int i=0;i<n;i++){
		if(s[i]=='a') a_count++;
	}

	if(a_count==n){
		cout<<"NO"<<endl;
		return;
	}

	cout<<"YES"<<endl;

	bool pal=true;
	if(n%2){
		// odd 
		int i=0,j=n-1;
		while(i<j){
			if(s[i]!=s[j]){
				pal=false;
				break;
			}
			i++;
			j--;
		}

		if(pal){
			s+='a';
			cout<<s<<endl;
			return;
		}
		else{
			string p=s.substr(0,(n+1)/2);
			p+='a';
			p+=s.substr((n+1)/2);
			cout<<p<<endl;
			return;
		}
	}else{
		// even

		int i=0,j=n-1;
		while(i<j){
			if(s[i]!=s[j]){
				pal=false;
				break;
			}
			i++;
			j--;
		}

		if(pal){
			s+='a';
			cout<<s<<endl;
			return;
		}else{
			string p=s.substr(0,n/2);
			p+='a';
			p+=s.substr(n/2 );
			cout<<p<<endl;
			return;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}