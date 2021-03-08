#include<iostream>
using namespace std;
#define ll long long 

int main()
{
    ll t,n,i,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(i=1; i*i<n; i++)
        {
            if(n%i==0)
                s=s+i+n/i;
        }
        if(i*i==n)
            s=s+i;
        s=s-n;
        cout<<s<<endl;
    }

}