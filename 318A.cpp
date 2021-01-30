#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	ll n,k;
	cin>>n>>k;
	if(n>=(2*k-1)){
		cout<<2*k-1<<endl;

	}else{
		k-=(n+1)/2;
		cout<<2*k<<endl;
	}
}