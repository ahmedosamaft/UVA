/****************************************************
         ❤ Bsmellah El Rahman El Rahim ❤
****************************************************/
#include <bits/stdc++.h>
using namespace std;
#define ZA7med ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define vi vector<int>
#define vc vector<char>
#define ll long long
#define vll vector<ll>
#define pii pair<int, int>
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
const ll N = 2e7 + 5, OO = 100000000000ll, mod = 1e9 + 7;
enum { UNVISITED = -1, VISITED = 1, EXPLORED = 2 };
const int dx8[8] = {0, 0, 1, -1, 1, -1, -1, 1};
const int dy8[8] = {1, -1, 0, 0, 1, -1, 1, -1};
const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};
int prime[N];
vi primes;
vector<pii> ans (1, {0,0});

void seive(){
  ::memset(prime,1,sizeof prime);
  for (ll i = 2; i < N; ++i) {
    if(prime[i]) {
      primes.push_back(i);
      for (ll j = i * i; j < N; j += i) {
        prime[j] = 0;
      }
    }
  }
  for (int i = 0; i < primes.size() - 1; ++i) {
    if(primes[i + 1] - primes[i] == 2)
      ans.emplace_back(primes[i],primes[i + 1]);
  }
}

void solve() {
  int x;
  while (cin >> x){
    ::printf("(%d, %d)",ans[x].ff,ans[x].ss);
    puts("");
  }
}

signed main() {
  //  =============================================================================
  ZA7med;
  FRead();
  seive();
  //  =============================================================================
  int TC = 1;
  // cin >> TC;
  while (TC--)
    solve();
  return 0;
}
