#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
int32_t main()
{
    IOS;
    int T; cin >> T;
    while(T--)
    {
        string s; cin >> s;
        int single = 0, pair = 0;
        vector<int> freq(26);
        for(int i = 0; i < (int)s.size(); i++)
            freq[s[i] - 'a']++;
        for(int i = 0; i < 26; i++)
        {
            pair += freq[i] / 2;
            single += freq[i] % 2;
        }
        if(single <= pair)
            cout << "yeS";
        else
            cout << "No";
        cout << "\n";
    }
    return 0;
}