#include <bits/stdc++.h>
using namespace std;

int inverted;

inline bool equal(char x, char y){
	if(inverted){
		return x!=y;
	}else{
		return x==y;
	}
}

void solve(){
	int n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	inverted=0;
	int A[2]={0};
	int B[2]={0};
	for(int i=0;i<n;i++){
		if(a[i]=='0') A[0]++;
		else A[1]++;
		if(b[i]=='0') B[0]++;
		else B[1]++;
	}

	if(A[0]!=B[0] ||A[1]!=B[1]){
		cout<<"NO"<<endl;
		return;
	}

	// A[0]=B[0] && A[1]=B[1]

	int i=n-1;
	while(i>=0){
		if(equal(a[i],b[i])){
			B[(b[i]-'0')]--;
			A[b[i]-'0']--;
			i--;
			continue;
			
		}else{
			// check if it can be inverted
			
			if(A[0]==A[1]){
				// can be inverted
				inverted=1-inverted;
				continue;

			}else{
				cout<<"NO"<<endl;
				return;
			}
		}
	}

	cout<<"YES"<<endl;

}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}