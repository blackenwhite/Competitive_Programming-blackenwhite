#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int sum=0;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		sum+=v[i];
	}
	sort(v.begin(),v.end());
	int i=n-1;
	int ans=0;
	int a=0,b=sum;
	while(i>=0){
		a+=v[i];
		b-=v[i];
		ans++;
		if(a>b){
			break;
		}
		i--;

	}
	cout<<ans<<endl;

	return 0;
}