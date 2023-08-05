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
typedef tuple<int, int, int> iii;
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
class UnionFind {
private:
  vi p, rank, setSize;
  int numSets;

public:
  UnionFind(int Q) {
    p.assign(Q, 0);
    for (int i = 0; i < Q; ++i)
      p[i] = i;
    rank.assign(Q, 0);
    setSize.assign(Q, 1);
    numSets = Q;
  }

  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }

  void unionSet(int i, int j) {
    if (isSameSet(i, j))
      return;
    int x = findSet(i), y = findSet(j);
    if (rank[x] > rank[y])
      swap(x, y);
    p[x] = y;
    if (rank[x] == rank[y])
      ++rank[y];
    setSize[y] += setSize[x];
    --numSets;
  }
};


void solve() {
  vector<iii> EL;
  int n, m;
  cin >> n;
  vpii cities;
  for (int i = 1; i <= n; ++i) {
    int x, y;
    cin >> x >> y;
    cities.emplace_back(x, y);
  }
  UnionFind UF(800);
  cin >> m;
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    UF.unionSet(a, b);
  }
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      auto &[x1, y1] = cities[i];
      auto &[x2, y2] = cities[j];
      ll w = pow(x1 - x2, 2) + pow(y1 - y2, 2);
      EL.push_back({w, i + 1, j + 1});
    }
  }
  bool f = 1;
  std::sort(EL.begin(), EL.end());
  for (const auto &[w, u, v] : EL) {
    if (UF.isSameSet(u, v))
      continue;
    f = 0;
    UF.unionSet(u, v);
    printf("%d %d\n", u, v);
  }
  if (f)
    puts("No new highways need");
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
    if (TC)
      puts("");
  }
  return 0;
}
