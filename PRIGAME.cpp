//#include <bits/stdc++.h>
#include<iostream>
using namespace std;
const int M=1000005;

int v[M]={0};

void Sieve(int n=M)
{
    
    bool prime[n + 1];
    //memset(prime, true, sizeof(prime));
    for(int i=0;i<M;i++){
    	prime[i]=true;
    }
 
    for (int p = 2; p * p <= n; p++)
    {
    	//v[p]=v[p-1];
        if (prime[p] == true) 
        {
            //v[p]++;
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p = 2; p <= n; p++){
    	v[p]=v[p-1];
    	if(prime[p]) v[p]++;
    	//if(p<=2000) cout<<p<<" "<<v[p]<<endl;
        // if (prime[p]){
        //     cout << p << " ";
        // }
    }
}

int main()
{
	
	//cout<<v[2000]<<endl;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Sieve();
    //cout<<v[100000]<<endl;
    int t,x,y;
    cin>>t;
    while(t--){
    	cin>>x>>y;
    	if(y>=v[x]) printf("Chef\n");
    	else printf("Divyam\n");
    }

    return 0;
}