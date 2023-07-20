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
const ll N = 1e7 + 5, OO = 1000000000, mod = 1e9 + 7, LOO = 1e18;
enum { UNVISITED = -1, VISITED = 1, EXPLORED = 2 };
const int dx8[8] = {0, 0, 1, -1, 1, -1, -1, 1};
const int dy8[8] = {1, -1, 0, 0, 1, -1, 1, -1};
const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};
int spf[N];
set<int> primes;
void sieve() {
  for (ll i = 0; i < N; ++i) {
    spf[i] = i;
  }
  for (ll i = 2; i < N; ++i) {
    if (spf[i] == i) {
      primes.emplace(i);
      for (ll j = i * i; j < N; j += i) {
        spf[j] = i;
      }
    }
  }
}
int n;
void solve() {
  if (n < 8) {
    cout << "Impossible.\n";
    return;
  }
  for (int i = 3; ~i; --i) {
    int last;
    if (primes.count(n - (2 * i)))
      last = n - (2 * i);
    else
      last = *--primes.lower_bound(n - (2 * i));
    cout << last << " ";
    n -= last;
  }

  cout << endl;
}

signed main() {
  //  =============================================================================
  ZA7med;
  FRead();
  //  =============================================================================
  int TC = 1;
  sieve();
  // cin >> TC;
  while (cin >> n)
    solve();
  return 0;
}
