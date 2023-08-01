/****************************************************
         ❤ Bsmellah El Rahman El Rahim ❤
****************************************************/
#include <bits/stdc++.h>
using namespace std;
#define ZA7med ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
typedef vector<int> vi;
typedef vector<char> vc;
using ll = long long;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef map<int, int> mii;
typedef set<int> si;
#define pb(x) push_back(x)
#define ss second
#define ff first
#define endl "\n"
#define all(v) v.begin(), v.end()
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
void FRead() {}
#endif
// ==============================================================================================
const ll N = 1e5 + 5, OO = 1000000000, mod = 1e9 + 7, LOO = 1e18;
enum { UNVISITED = -1, VISITED = 1, EXPLORED = 2 };
const int dx8[8] = {0, 0, 1, -1, 1, -1, -1, 1};
const int dy8[8] = {1, -1, 0, 0, 1, -1, 1, -1};
const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};
int MOD(int x, int m) { return ((x % m + m) % m); }
int n, m,root,children;
void solve() {
  vector<vi> AL(n);
  int a, b;
  cin >> a >> b;
  for (; ~a;) {
    AL[a].pb(b);
    AL[b].pb(a);
    cin >> a >> b;
  }
  int cnt = 0;
  vi dfs_num(n,-1),dfs_low(n),arti(n,1);
  function<void(int ,int)> dfs = [&](int u,int par) {
    dfs_num[u] = dfs_low[u] = cnt++;
    for (const auto &v : AL[u]) {
      if (!~dfs_num[v]) {
        dfs(v, u);
        if(u == root) children++;
        if(dfs_num[u] <= dfs_low[v])
          arti[u]++;
        dfs_low[u] = min({dfs_low[u],dfs_low[v]});
      }
      else if(v != par)
        dfs_low[u] = min({dfs_low[u],dfs_num[v]});
    }
  };

  vpii ans;
  for (int i = 0; i < n; ++i) {
    if (!~dfs_num[i]) {
      root = i; children = 0;
      dfs(i, -1);
      arti[i] = max(children,1);
    }
    ans.push_back({OO - arti[i],i});
  }

  std::sort(ans.begin(), ans.end());
  for (int i = 0; i < m; ++i) {
    auto &[y,x] = ans[i];
    cout << x << " " << OO - y << endl;
  }
  cout << endl;
}

signed main() {
  //  =============================================================================
  ZA7med;
  FRead();
  //  =============================================================================

  while (cin >> n >> m, n && m)
    if (n != -1)
      solve();
  return 0;
}
