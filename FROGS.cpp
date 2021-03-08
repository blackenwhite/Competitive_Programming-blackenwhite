#include <bits/stdc++.h>
using namespace std;

class unit{
public:
	int val=-1;
	int pos=-1;
	int jump=-1;
};


bool cmp(unit& a,unit& b){
	return a.val<b.val;
}

void solve(){
	int n;
	cin>>n;
	vector<unit>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].val;
		v[i].pos=i;
	}

	for(int i=0;i<n;i++){
		cin>>v[i].jump;
	}

	vector<int>final_pos(n);
	sort(v.begin(),v.end(),cmp);

	// testing 

	// for(int i=0;i<n;i++){
	// 	cout<<v[i].val<<" ";    // code working correctly
	// }
	// cout<<endl;

	final_pos[0]=v[0].pos;
	int ans=0;
	for(int i=1;i<n;i++){
		int x=final_pos[i-1];
		int w=0;
		while(true){
			if((v[i].pos+v[i].jump * w)>x) break;
			else w++;
		}

		final_pos[i]=v[i].pos+v[i].jump*w;

		//cout<<final_pos[i]<<" ";// test
		ans+=w;

	}
	//cout<<endl; // test

	cout<<ans<<endl;


}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}