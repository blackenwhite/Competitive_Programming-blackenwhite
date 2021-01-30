#include <bits/stdc++.h>
using namespace std;


int main(){
	int n,k;
	cin>>n>>k;
	int ans=0;
	int x;
	while(n--){
		cin>>x;
		if(x>k){
			ans+=2;
		}else{
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}