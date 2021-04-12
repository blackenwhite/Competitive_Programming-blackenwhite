#include <bits/stdc++.h>
using namespace std;
#define N 1000004

int a[N];
int b[N];

void solve(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}

	sort(b,b+n);
	int i=0,j=n-1;
	
	while(a[i]==b[i]) i++;
	while(b[j]==a[j]) j--;

	cout<<i<<" "<<j<<endl;
}

int main(){
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
}