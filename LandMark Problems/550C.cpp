/*You are given a non-negative integer n, its decimal representation consists of at most 100 digits and doesn't contain leading zeroes.

Your task is to determine if it is possible in this case to remove some of the digits (possibly not remove any digit at all) so that the result contains at least one digit, forms a non-negative integer, doesn't have leading zeroes and is divisible by 8. After the removing, it is forbidden to rearrange the digits.

If a solution exists, you should print it.
Input

The single line of the input contains a non-negative integer n. The representation of number n doesn't contain any leading zeroes and its length doesn't exceed 100 digits.
Output

Print "NO" (without quotes), if there is no such way to remove some digits from number n.

Otherwise, print "YES" in the first line and the resulting number after removing digits from number n in the second line. The printed number must be divisible by 8.

If there are multiple possible answers, you may print any of them.*/

------------------Solution--------------
#include <bits/stdc++.h>
 
using namespace std;
 
#define sz(x) (int) x.size()
#define all(a) a.begin(), a.end()
#define prev sadasdjksgjkasjdklaj
 
const int MAXN = 105;
 
string s;
int n;
bool dp[MAXN][8];
int prev[MAXN][8];
 
int main() {
 
    getline(cin, s);
    n = sz(s);
 
    memset(prev, -1, sizeof(prev));
 
    dp[0][(s[0] - '0') % 8] = true;
 
    for (int i = 1; i < n; i++) {
        dp[i][(s[i] - '0') % 8] = true;
 
        for (int j = 0; j < 8; j++) {
            if (dp[i - 1][j]) {
                dp[i][(j * 10 + s[i] - '0') % 8] = true;
                prev[i][(j * 10 + s[i] - '0') % 8] = j;
 
                dp[i][j] = true;
                prev[i][j] = j;
            }
        }
    }
 
    for (int i = 0; i < n; i++) {
        if (dp[i][0]) {
            string ans = "";
            int curI = i, curJ = 0;
 
            while (true) {
                if (prev[curI][curJ] == -1 || prev[curI][curJ] != curJ) {
                    ans.append(1, s[curI]);
                }
 
                if (prev[curI][curJ] == -1) break;
 
                curJ = prev[curI][curJ];
                curI--;
            }
 
            puts("YES");
            reverse(all(ans));
            cout << ans << endl;
            return 0;
        }
    }
 
    puts("NO");
 
    return 0;
}
