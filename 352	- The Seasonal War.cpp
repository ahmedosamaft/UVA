/****************************************************
         ❤ Bsmellah El Rahman El Rahim ❤
****************************************************/
#pragma clang diagnostic push
#pragma ide diagnostic ignored "UnusedLocalVariable"

#include <bits/stdc++.h>
void FRead();

using namespace std;
#define ZA7med ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define ll long long
#define ull unsigned long long
#define vll vector<ll>
#define vvi vector<vi>
#define vc vector<char>
#define vvc vector<vc>
#define pii pair<int, int>
#define vpii vector<pii>
#define ff first
#define ss second
#define mii map<int, int>
#define si set<int>
#define endl "\n"
#define all(v) v.begin(), v.end()
#ifndef ONLINE_JUDGE
#define debug(x)                                                               \
  cerr << #x << " ";                                                           \
  _print(x);                                                                   \
  cerr << endl;
#else
#define debug(x)
#endif
template <typename T> vector<T> &operator--(vector<T> &v) {
  for (auto &i : v)
    --i;
  return v;
}
template <typename T> vector<T> &operator++(vector<T> &v) {
  for (auto &i : v)
    ++i;
  return v;
}
template <typename T> istream &operator>>(istream &is, vector<T> &v) {
  for (auto &i : v)
    is >> i;
  return is;
}
template <typename T> ostream &operator<<(ostream &os, vector<T> v) {
  for (auto &i : v)
    os << i << ' ';
  return os;
}
template <typename T, typename U> pair<T, U> &operator--(pair<T, U> &p) {
  --p.first;
  --p.second;
  return p;
}
template <typename T, typename U> pair<T, U> &operator++(pair<T, U> &p) {
  ++p.first;
  ++p.second;
  return p;
}
template <typename T, typename U>
istream &operator>>(istream &is, pair<T, U> &p) {
  is >> p.first >> p.second;
  return is;
}
template <typename T, typename U>
ostream &operator<<(ostream &os, pair<T, U> p) {
  os << p.first << ' ' << p.second;
  return os;
}
template <typename T, typename U>
pair<T, U> operator-(pair<T, U> a, pair<T, U> b) {
  return make_pair(a.first - b.first, a.second - b.second);
}
template <typename T, typename U>
pair<T, U> operator+(pair<T, U> a, pair<T, U> b) {
  return make_pair(a.first + b.first, a.second + b.second);
}
void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
template <class T, class V> void _print(pair<T, V> p);
template <class T> void _print(vector<T> v);
template <class T> void _print(set<T> v);
template <class T, class V> void _print(map<T, V> v);
template <class T> void _print(multiset<T> v);
template <class T, class V> void _print(pair<T, V> p) {
  cerr << "{";
  _print(p.ff);
  cerr << ",";
  _print(p.ss);
  cerr << "}";
}
template <class T> void _print(vector<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void _print(set<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void _print(multiset<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V> void _print(map<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
//====================================================================================
const ll N = 1e3 + 5, INF = 100000000000ll, mod = 1e9 + 7;
enum { UNVISITED = 0, VISITED = 1 };
const int dx8[8] = {0, 0, 1, -1, 1, -1, -1, 1};
const int dy8[8] = {1, -1, 0, 0, 1, -1, 1, -1};
const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};

ll fastpow(ll a, ll b) {
  ll ans = 1;
  while (b) {
    if (b & 1)
      ans *= a;
    a *= a;
    b >>= 1;
  }
  return ans % mod;
}
int n;
vvi g;
bool vis[N][N];
bool valid(int i, int j) { return (i >= 0 && i < n && j >= 0 && j < n); }
void dfs(int i, int j) {
  vis[i][j] = VISITED;
  for (int k = 0; k < 8; ++k) {
    int x = i + dx8[k], y = j + dy8[k];
    if (valid(x, y) && !vis[x][y] && g[x][y])
      dfs(x, y);
  }
}
int c = 1;
void solve() {
  memset(vis, UNVISITED, sizeof vis);
  for (int i = 0; i < n; ++i) {
    vi t(n);
    for (int j = 0; j < n; ++j) {
      char x;
      cin >> x;
      t[j] = (x - '0');
    }
    g.push_back(t);
  }
  debug(g)
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (!vis[i][j] && g[i][j]) {
        ++ans;
        dfs(i, j);
      }
    }
  }
  cout << "Image number " << c++ << " contains " << ans << " war eagles."
       << endl;
  g.clear();
}

signed main() {
  //  =============================================================================
  ZA7med;
  FRead();
  //  =============================================================================
  while (cin >> n)
    solve();
  return 0;
}

void FRead() {
#ifndef ONLINE_JUDGE
  freopen("Bumble.in", "r", stdin);
  freopen("Bumble.out", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
}
#pragma clang diagnostic pop
