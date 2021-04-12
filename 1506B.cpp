#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int i=0,j=n-1;
	int ans=0;

	// first wala
	while(s[i]=='.') i++;
	s[i]='x';
	ans++;


	// last wala(agar mila to!)
	while(j>i && s[j]=='.') j--;
	if(j>i){
		s[j]='x';
		ans++;
	}else{
		// mane ektai ase
		cout<<ans<<endl;
		return;
	}

	while(i<j){
		int tempi=i+k;
		if(tempi>=j){
			break;
		}

		while(tempi>i && s[tempi]!='*'){
			tempi--;
		}

		if(tempi==i){
			// for tester
			cout<<"wrong question"<<endl;
			return;
		}

		s[tempi]='x';
		ans++;
		i=tempi;

	}
	cout<<ans<<"\n";

}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}