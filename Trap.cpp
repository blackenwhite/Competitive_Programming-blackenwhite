// Trapezoidal method for evaluation of Definite Integral
// SERIAL CODE

//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;
const double pi =M_PI;
const int n=10000000;
int main(){
	double a,b,h,sum=0,integral;
	//int n; // the number of divisions I want to make
	// cout<<"Input for n: "<<endl;
	// cin>>n;

	// Setting n
	//n=10;

	// setting the limits as given in the question
	a=-pi/2;
	b=pi/2;

	
	h=(b-a)/n;
	sum=(cos(a)+cos(b))/2;

	//cout<<h<<endl; // testing 
	for(int i=1;i<=n-1;i++){
		double x=a+h*(double)i;
		double f=cos(x);
		sum+=f;
	}


	integral=sum*h;

	cout<<"value of def integral "<<integral<<endl;
	return 0;
}