#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long

const int MAXN = 105000;
const int MAXLOG = 20;

int n;  // length of our array
int a[MAXN];
pii table[MAXLOG][MAXN];

int logs[MAXN]; // logs[i] means such maximum p that 2^p <= i

void computeLogs() {
  logs[1] = 0;
  for (int i = 2; i <= n; i++) {
    logs[i] = logs[i / 2] + 1;
  }
}

void build() {
  for (int i = 0; i <= logs[n]; i++) {
    int curLen = 1 << i; // 2^i
    for (int j = 0; j + curLen <= n; j++) {
      if (curLen == 1) {
        table[i][j] = {a[j],j};
      } else {
        table[i][j] = max(table[i - 1][j], table[i - 1][j + (curLen / 2)]);
      }
    }
  }
}

int get(int l, int r) {
  int p = logs[r - l + 1];
  int pLen = 1 << p; // 2^p
  pii ans= max(table[p][l], table[p][r - pLen + 1]);
  return ans.second;
}


int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);


	cin>>n;

	computeLogs(); // function used to compute the logs

	
	a[n-1]=n-1;
	for(int i=0;i<n-1;i++){
		cin>>a[i];
		a[i]--;
	}

	build();     // sparse table built from the array

	// dynamically store the result and update the answer
	vector<ll>dp(n);
	ll ans=0;
	dp[n-1]=0;
	for(int i=n-2;i>=0;i--){
		int m=get(i+1,a[i]);
		dp[i]=dp[m]-(a[i]-m)+n-i-1;
		ans+=dp[i];
	}
	cout<<ans<<endl;

	return 0;
}