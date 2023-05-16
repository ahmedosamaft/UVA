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
const ll N = 1e1 + 5, OO = 100000000000ll, mod = 1e9 + 7;
enum { UNVISITED = -1, VISITED = '@', EXPLORED = 2 };
const int dx8[8] = {0, 0, 1, -1, 1, -1, -1, 1};
const int dy8[8] = {1, -1, 0, 0, 1, -1, 1, -1};
const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};
int n, m, e;
bool f = 0;
char g[N][N];
int steps = 0, loop = 0;
void dfs(int curx, int cury) {
  if (curx == 0 || curx > m)
    return;
  if (cury == 0 || cury > n)
    return;
  ++steps;

  if (g[cury][curx] == 'E') {
    g[cury][curx] = VISITED;
    dfs(curx + 1, cury);
  } else if (g[cury][curx] == 'W') {
    g[cury][curx] = VISITED;
    dfs(curx - 1, cury);
  } else if (g[cury][curx] == 'S') {
    g[cury][curx] = VISITED;
    dfs(curx, cury + 1);
  } else if (g[cury][curx] == 'N') {
    g[cury][curx] = VISITED;
    dfs(curx, cury - 1);
  } else if (f == 0) {
    f = 1;
    g[cury][curx] = 'X';
    --steps;
    return;
  } else
    return;
  if (f)
    ++loop;

  if (g[cury][curx] == 'X')
    f = 0;
}
void solve() {
  steps = f = loop = 0;
  for (int i = 1; i <= n; ++i)
    for (int j = 1; j <= m; ++j)
      cin >> g[i][j];

  dfs(e, 1);
  debug(g);
  if (loop) {
    printf("%d step(s) before a loop of %d step(s)\n", steps - loop , loop);
  } else {
    printf("%d step(s) to exit\n", steps);
  }
}

signed main() {
  //  =============================================================================
  ZA7med;
  FRead();
  //  =============================================================================
  int TC = 1;
  // cin >> TC;
  while (cin >> n >> m >> e, e)
    solve();
  return 0;
}
