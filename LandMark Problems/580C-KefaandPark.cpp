#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAX 100005

int isCat[MAX];
bool visited[MAX];
vector<vector<int>>graph(MAX);
int n,m,ans=0;

void dfs(int u,int sum_cat){
    int sum=0;
    visited[u]=true;
    if(sum_cat>m){
        return;
    }
    bool ok=false;
    for(int v=0;v<graph[u].size();v++){
        if(!visited[graph[u][v]]){
            isCat[graph[u][v]]? sum=sum_cat+1:sum=0;
            dfs(graph[u][v],sum);
            ok=true;
        }
    }
    if(!ok) ans++;
}

int main(){
    int x,y;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>isCat[i];
    }

    for(int i=1;i<n;i++){
        cin>>x>>y;
        graph[x].pb(y);
        graph[y].pb(x);

    }

    dfs(1,isCat[1]);
    cout<<ans<<endl;
}
