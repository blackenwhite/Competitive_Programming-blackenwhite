/* 
We have an integer sequence A of length N and an integer sequence B of length M.
Takahashi will make a new sequence A′ by removing some elements (possibly zero or all) from A and concatenating the remaining elements.
Similarly, he will make another new sequence B′ by removing some elements (possibly zero or all) from B and concatenating the remaining elements.
Here, he will remove elements so that |A′|=|B′|. (|s| denotes the length of s for a sequence s.)
Let x be the total number of elements removed from A and B, and y be the number of integers i such that 1≤i≤|A′| and A′i≠B′i. Print the minimium possible value of x+y

.
Constraints

    1≤N,M≤1000

1≤Ai,Bi≤109
All values in input are integers.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=100005;
const int inf=(1<<30);
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>A(n),B(m);
    vector<vector<int>>dp(n+1,vector<int>(m+1,inf));
    for(int i=0;i<n;i++) cin>>A[i];
    for(int i=0;i<m;i++) cin>>B[i];

    for(int i=0;i<=n;i++) dp[i][0]=i;
    for(int i=0;i<=m;i++) dp[0][i]=i;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(dp[i][j]<inf){
                if(A[i]==B[j]) dp[i+1][j+1]=dp[i][j];
                else {
                    dp[i+1][j+1]=min({dp[i][j+1],dp[i+1][j],dp[i][j]})+1;
                }
            }
        }
    }
    cout<<dp[n][m]<<endl;
}

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
