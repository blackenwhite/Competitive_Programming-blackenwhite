    #include <bits/stdc++.h>
    using namespace std;
     
    #define ll long long
    const int mxn = 2e5;
    ll p[mxn];
    pair<ll,int> a[mxn];
     
    int main() {
    	ios::sync_with_stdio(0);
    	cin.tie(0);
     
    	int t;
    	cin >> t;
    	vector<int> win;
    	while(t--) {
    		int n;
    		cin >> n;
    		for(int i=0; i<n; i++) {
    			int x; cin >> x;
    			a[i] = {x,i+1};
    		}
    		sort(a,a+n);
    		p[0] = a[0].first;
    		for(int i=1; i<n; i++) {
    			p[i] = a[i].first + p[i-1];
    		}
    		win.clear();
    		win.push_back(a[n-1].second);
    		for(int i=n-2; i>=0; i--) {
    			if(p[i] < a[i+1].first) break;
    			win.push_back(a[i].second);
    		}
    		sort(win.begin(), win.end());
    		cout << win.size() << '\n';
    		for(int x : win) cout << x << ' ';
    		cout << '\n';
    	}
    	return 0;
    }