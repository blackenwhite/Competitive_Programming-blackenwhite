/*
You are given two positive integer sequences a1,…,an and b1,…,bm. For each j=1,…,m find the greatest common divisor of a1+bj,…,an+bj

.
Input

The first line contains two integers n
and m (1≤n,m≤2⋅105

).

The second line contains n
integers a1,…,an (1≤ai≤1018)

.

The third line contains m
integers b1,…,bm (1≤bj≤1018)

.
Output

Print m
integers. The j-th of them should be equal to GCD(a1+bj,…,an+bj)

.
Example
Input
Copy

4 4
1 25 121 169
1 2 7 23

Output
Copy

2 3 8 24
*/


#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<queue>
#include<vector>
using namespace std;
#define N 1000002
typedef long long ll;
int n,m;
ll a[N],b[N];
ll gcd(ll x,ll y){return y==0?x:gcd(y,x%y);}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
	for(int i=1;i<=m;i++)scanf("%lld",&b[i]);
	sort(a+1,a+1+n);
	ll td=0;
	for(int i=1;i<n;i++)td=gcd(td,a[i+1]-a[i]);
	for(int i=1;i<=m;i++)
	{
		printf("%lld ",gcd(td,a[1]+b[i]));
	}puts("");
}
