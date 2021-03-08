#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
	ll n,e,h,a,b,c,x,y,ans=10000000000000;
	cin>>n>>e>>h>>a>>b>>c;

	// Checking for all possible values of z
	for(ll z=0;z<=min(n,min(e,h));z++)
	{
		if(a<=b)
		{
			x=min(n-z,(e-z)/2);
			y=n-z-x;
			if(3*y<=h-z)
				ans=min(ans,x*a+y*b+z*c);
		}
		else
		{
			y=min(n-z,(h-z)/3);
			x=n-z-y;
			if(2*x<=e-z)
				ans=min(ans,x*a+y*b+z*c);
		}
	}

	// Printing the answer
	if(ans==10000000000000)
		cout<<-1<<endl;
	else
		cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}