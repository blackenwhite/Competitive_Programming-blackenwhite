#include <bits/stdc++.h>
using namespace std;



int foo(vector<int>arr){
	int n=arr.size();
	int id=-1;
	int freq=INT_MIN;
	unordered_map<int,int>mp;   // mp.find()

	for(int i=0;i<n;i++){       // mp[key]=value
		if(mp.find(arr[i])){    
			mp[arr[i]]++;
		}else{
			mp[arr[i]]=1;
		}

		if(mp[arr[i]]>freq){
			freq=mp[arr[i]];
			id=i;
		}

	}

	return arr[id];

}



int main(){
	int n;
	cin>>n;
	//cout<<n<<endl;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	
	cout<<foo(arr)<<endl;   // arr[0] 789 790 
}