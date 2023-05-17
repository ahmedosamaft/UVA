/****************************************************
         ❤ Bsmellah El Rahman El Rahim ❤
****************************************************/
#include <bits/stdc++.h>
using namespace std;
#define ZA7med ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define vc vector<char>
#define ll long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
void FRead() {}
#endif
// ==============================================================================================
const ll N = 1e5 + 5, OO = 100000000000ll, mod = 1e9 + 7;
enum { UNVISITED = -1, VISITED = 1, EXPLORED = 2 };
const int dx8[8] = {0, 0, 1, -1, 1, -1, -1, 1};
const int dy8[8] = {1, -1, 0, 0, 1, -1, 1, -1};
const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};
int a, b, row[8], cnt = 0;
bool place(int i, int j) {
  for (int k = 0; k < j; ++k) {
    if (row[k] == i || abs(k - j) == abs(row[k] - i))
      return 0;
  }
  return 1;
}

void run(int c) {
  if (c == 8 && row[b] == a) {
    ::printf("%2d      %d", ++cnt, row[0] + 1);
    for (int i = 1; i < 8; ++i)
      printf(" %d", row[i] + 1);
    printf("\n");
    return;
  }
  for (int r = 0; r < 8; ++r) { // Row
    if (c == b && r != a)
      continue;
    if (place(r, c))
      row[c] = r, run(c + 1);
  }
}

void solve() {
  cnt = 0;
  printf("SOLN       COLUMN\n");
  printf(" #      1 2 3 4 5 6 7 8\n\n");
  memset(row, -1, sizeof row);
  cin >> a >> b;
  a--, b--;
  run(0);
}

signed main() {
  //  =============================================================================
  ZA7med;
  FRead();
  //  =============================================================================
  int TC = 1;
  cin >> TC;

  while (TC--) {
    solve();
    if(TC)
    printf("\n");
  }

  return 0;
}
