/*
Created by : Ivan Deka
About me : Just a coder trying to code out the best of me!
*/
#include<bits/stdc++.h>
using namespace std;

typedef int long long ll;
typedef unsigned int long long ul;
typedef long double ld;

#define mod 1000000007
#define mod1 998244353
#define pb push_back
#define mk make_pair
#define vi vector<ll>
#define pii pair<ll, ll>
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define sz(a) a.size()
#define ub(a,x) upper_bound(all(a),x) - a.begin()
#define lb(a,x) lower_bound(all(a),x) - a.begin()

ll inline powerM(ll a, ll b, ll p){
  a %= p;
  ll ans = 1;
  while(b>0){
    if(b & 1)
      ans = (ans*a)%p;
    a = (a*a)%p;
    b >>= 1;
  }
  return ans;
}

ll inv(ll n, ll p){
  return powerM(n,p-2, p);
}

ll inline power(ll a, ll b){
  //a %= p;
  ll ans = 1;
  while(b>0){
    if(b & 1)
      ans = (ans*a);
    a = (a*a);
    b >>= 1;
  }
  return ans;
}

ll fac[5005];
ll ncr(ll n,ll r)
{
    ll val=fac[n];
    val*=powerM(fac[r],mod-2,mod);
    val%=mod;
    val*=powerM(fac[n-r],mod-2,mod);
    val%=mod;
    return val;
}
void solve()
{
  ll n,k;
  cin>>n>>k;
  ll a[n];
  map<ll,ll> mp;
  for(ll i=0;i<n;i++)
  {
    cin>>a[i];
    mp[a[i]]++;
  }
  sort(a,a+n,greater<ll>());
  ll l=a[k-1];
  ll r=0;
  ll i=k-1;
  while(i>=0&&a[i]==l)
  {
    r++;
    i--;
  }
  cout<<ncr(mp[l],r)<<"\n";
}

int main()
{
  //ϳᕱᎥ ♅ᕱภuოᕱภ
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);

  ll t;
  cin>>t;
  fac[0]=1;
  for(ll i=1;i<=5000;i++)
  {
    fac[i]=(fac[i-1]*i)%mod;
  }
  for(ll i=1;i<=t;i++)
  {
    //cout<<"Case #"<<i<<":"<<" ";
    solve();
  }
}