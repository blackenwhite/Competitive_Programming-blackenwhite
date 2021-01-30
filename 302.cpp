#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<iostream>
#include<stdlib.h>
#include<set>
#include<map>
#include<queue>
#include<vector>
#include<bitset>
#pragma comment(linker, "/STACK:1024000000,1024000000")
template <class T>
bool scanff(T &ret){ //Faster Input
    char c; int sgn; T bit=0.1;
    if(c=getchar(),c==EOF) return 0;
    while(c!='-'&&c!='.'&&(c<'0'||c>'9')) c=getchar();
    sgn=(c=='-')?-1:1;
    ret=(c=='-')?0:(c-'0');
    while(c=getchar(),c>='0'&&c<='9') ret=ret*10+(c-'0');
    if(c==' '||c=='\n'){ ret*=sgn; return 1; }
    while(c=getchar(),c>='0'&&c<='9') ret+=(c-'0')*bit,bit/=10;
    ret*=sgn;
    return 1;
}
#define inf 1073741823
#define llinf 4611686018427387903LL
#define PI acos(-1.0)
#define lth (th<<1)
#define rth (th<<1|1)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define gson(i,root) for(int i=ptx[root];~i;i=ed[i].next)
#define tdata int testnum;scanff(testnum);for(int cas=1;cas<=testnum;cas++)
#define mem(x,val) memset(x,val,sizeof(x))
#define mkp(a,b) make_pair(a,b)
#define findx(x) lower_bound(b+1,b+1+bn,x)-b
#define pb(x) push_back(x)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
 
 
 
int main(){
    int n,m;
    scanff(n);
    scanff(m);
    int c1,c2;
    c1=c2=0;
    rep(i,1,n){
        int x;
        scanff(x);
        if(x==1)c1++;
        else c2++;
    }
    rep(i,1,m){
        int l,r;
        scanff(l);
        scanff(r);
        int len=r-l+1;
        if(len&1)printf("0\n");
        else{
            if(len/2>min(c1,c2))printf("0\n");
            else printf("1\n");
 
        }
    }
    return 0;
}