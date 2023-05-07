/****************************************************
         ❤ Bsmellah El Rahman El Rahim ❤
****************************************************/
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
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
const ll N = 1e6 + 5, INF = 100000000000ll, mod = 1e9 + 7;
enum { UNVISITED = -1, VISITED = 1 };
const int dx8[8] = {0, 0, 1, -1, 1, -1, -1, 1};
const int dy8[8] = {1, -1, 0, 0, 1, -1, 1, -1};
const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};
int spf[N];
vector<int> primes;
void sieve() {
  for (ll i = 0; i < N; ++i) {
    spf[i] = i;
  }
  for (ll i = 2; i < N; ++i) {
    if (spf[i] == i) {
      primes.push_back(i);
      for (ll j = i * i; j < N; j += i) {
        spf[j] = i;
      }
    }
  }
}
map<ll, ll> factorization(ll n) {
  map<ll, ll> ans;
  while (n > 1) {
    ans[spf[n]]++;
    n /= spf[n];
  }
  return ans;
}
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
int gcd(int a, int b) {
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

int a, b;
void solve() {

  if (gcd(a, b) > 1)
    return void(cout << right <<setw(10) << a << setw(10) << b <<  left << "   "  << " Bad Choice\n\n");

  return void(cout << right << setw(10) << a << setw(10) << b
                 << left << "    " << "Good Choice\n\n");
}

signed main() {
  //  =============================================================================
  ZA7med;
  FRead();
  //  =============================================================================
  sieve();
  while (cin >> a >> b)
    solve();
  return 0;
}

void FRead() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
}
#pragma clang diagnostic pop
