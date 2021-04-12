#include <bits/stdc++.h>
using namespace std;

bool balanced(string expr) 
{   
    stack<char> s; 
    char x; 
  
    // Traversing the Expression 
    for (int i = 0; i < expr.length(); i++)  
    { 
        if (expr[i] == '(' || expr[i] == '['
            || expr[i] == '{')  
        { 
            // Push the element in the stack 
            s.push(expr[i]); 
            continue; 
        } 
  
        // IF current current character is not opening 
        // bracket, then it must be closing. So stack 
        // cannot be empty at this point. 
        if (s.empty()) 
            return false; 
  
        switch (expr[i]) { 
        case ')': 
              
            // Store the top element in a 
            x = s.top(); 
            s.pop(); 
            if (x == '{' || x == '[') 
                return false; 
            break; 
  
        case '}': 
  
            // Store the top element in b 
            x = s.top(); 
            s.pop(); 
            if (x == '(' || x == '[') 
                return false; 
            break; 
  
        case ']': 
  
            // Store the top element in c 
            x = s.top(); 
            s.pop(); 
            if (x == '(' || x == '{') 
                return false; 
            break; 
        } 
    } 
  
    // Check Empty Stack 
    return (s.empty()); 
} 

void solve(){
	string s;
	cin>>s;
	int n=s.size();
	if(s[0]==s[n-1]) {
		cout<<"NO"<<endl;
		return ;
	}

	//vector<char>v(3);
	unordered_map<char,char>v;
	unordered_set<char>st={'A','B','C'};
	v[s[0]]='(';
	st.erase(s[0]);
	v[s[n-1]]=')';
	st.erase(s[n-1]);
	char t;
	for(auto it:st){
		t=it;
	}

	//cout<<t<<endl; // testing 

	string tester="";

	// t='('
	v[t]='(';
	for(int i=0;i<n;i++){
		tester+=v[s[i]];		
	}

	if(balanced(tester)){
		cout<<"YES"<<endl;
		return ;
	}

	tester="";
	// t=")"
	v[t]=')';

	for(int i=0;i<n;i++){
		tester+=v[s[i]];
	}

	if(balanced(tester)){
		cout<<"YES"<<endl;
		return;
	}

	cout<<"NO"<<endl;
	return;

}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}