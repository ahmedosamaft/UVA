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
ll lcm(ll a,ll b){
    return a * b / __gcd(a,b);
}
ll n,m;
void solve() {

  vll v(m);
  for (int i = 0; i < m; ++i) cin >> v[i];
  ll drop = 0;
  for (int i = 1; i < (1ll << m); ++i) { // taken
   ll sum = 1;
   for (int msk = 0; msk < m; ++msk) {
     if(i & (1 << msk))
       sum = lcm(v[msk],sum);
     if(sum >= (1ll<<31))
       break ;
   }
   if(__builtin_popcount(i) & 1){
     drop += n / sum;
   } else drop -= n / sum;
  }
  cout << n - drop << endl;
}

signed main() {
  //  =============================================================================
  ZA7med;
  FRead();
  //  =============================================================================
  while (cin >> n>> m)
    solve();
  return 0;
}
