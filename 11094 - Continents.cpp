// UVA11094 - Continents
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;
#define ZA7med ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};
int n, m;
const int N = 21;
char g[N][N];
int vis[N][N];
int dfs(int i, int j) {
  vis[i][j] = 1;
  int ret = 1;
  for (int k = 0; k < 4; ++k) {
    int X = i + dx[k], Y = j + dy[k];
    if(Y == -1) Y = m - 1;
    if(Y == m) Y = 0;
    if (X >= 0 && X < n && Y >= 0 && Y < m && !vis[X][Y] && g[X][Y] == g[i][j]) {
      ret += dfs(X, Y);
    }
  }
  return ret;
}

signed main() {
  ZA7med;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
  while (cin >> n >> m) {
    memset(vis, 0, sizeof vis);
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> g[i][j];
      }
    }
    int a, b;
    cin >> a >> b;
    dfs(a, b);
    int ans = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (!vis[i][j]&& g[i][j] == g[a][b])
          ans = max(ans, dfs(i, j));
      }
    }
    cout << ans << endl;
  }
}
