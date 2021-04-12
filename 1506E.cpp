#include <bits/stdc++.h>
using namespace std;

void placeLeft(vector<int> &q, bool minimize) {
  set<int> left;
  for (int i = 1; i <= (int) q.size(); i++) {
    left.insert(i);
  }
  for (int i : q) {
    if (i != -1) {
      left.erase(i);
    }
  }
  int lastPlaced = -1;
  for (int &i : q) {
    if (i == -1) {
      set<int>::const_iterator it;
      if (minimize) {
        it = left.begin();
      } else {
        it = --left.lower_bound(lastPlaced);
      }
      i = *it;
      left.erase(it);
    } else {
      lastPlaced = i;
    }
  }
}

void solve() {
  int n;
  cin >> n;
  vector<int> q(n);
  for (int i = 0; i < n; i++) {
    cin >> q[i];
  }

  vector<int> res1(n, -1), res2(n, -1);
  for (int i = 0, lastPlaced = -1; i < n; lastPlaced = q[i], i++) {
    if (lastPlaced != q[i]) {
      res1[i] = q[i];
      res2[i] = q[i];
    }
  }
  placeLeft(res1, true);
  placeLeft(res2, false);
  for (int x : res1) {
    cout << x << " ";
  }
  cout << "\n";
  for (int x : res2) {
    cout << x << " ";
  }
  cout << "\n";
}

int main() {
  int tests;
  cin >> tests;
  while (tests-- > 0) {
    solve();
  }
  return 0;
}