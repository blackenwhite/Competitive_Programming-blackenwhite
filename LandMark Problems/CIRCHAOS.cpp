#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=100005;

// take care of the return type, long long
ll gcd(ll a,ll b){
    if(a>b) return gcd(b,a);
    if(a==0) return b;
    return gcd(b%a,a);
}

ll hfl(ll n, ll g){
    ll ans=0;
    for(ll i=1;i*i<=g;i++){
        if(g%i==0){
            if(i<=n){
                ans=max(ans,i);
            }

            if((g/i)<=n){
                ans=max(ans,(g/i));
            }
        }
    }
    return ans;
}

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll>p(m);

    for(ll i=0;i<m;i++){
        cin>>p[i];
    }

    if(m==1){
        cout<<n-hfl(n,p[0])<<endl;
        return;
    }

    ll g=p[0];
    for(int i=1;i<m;i++){
        g=gcd(g,p[i]);
    }
    cout<<n-hfl(n,g)<<endl;
}


int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
