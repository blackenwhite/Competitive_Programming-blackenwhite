#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> pii;
int read()
{
	int res = 0, f = 0; char c = getchar();
	while(!isdigit(c) && c != '-') c = getchar();
	if(c == '-') f++, c = getchar();
	while(isdigit(c)) res = (res<<3)+(res<<1)+(c^48), c = getchar();
	return f ? -res : res;
}
 
const int maxn = 2e5+10;
int n;
pii a[maxn];
 
int main()
{
	int T = read(); while(T--)
	{
		n = read();
		for(int i = 1; i <= n; i++) a[i].first = read();
		for(int i = 1; i <= n; i++) a[i].second = read();
		sort(a+1, a+n+1);
		int x = 1, y = 1, d = 0, f = 0;
		int ans = 0;
		for(int i = 1; i <= n; i++)
		{
			int nx = a[i].first, ny = a[i].second;
			int nd = (nx-ny)/2, nf = (nx-ny)%2;
			if(d == nd && f == nf && !f)
				ans += nx - x;
			else
				ans += nd-d;
			x = nx; y = ny; d = nd; f = nf;
		}
		printf("%d\n", ans);
	}
	return 0;
}