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
const int dx[] = {1,1,-1,-1,2,2,-2,-2};
const int dy[] = {2,-2,2,-2,1,-1,-1,1};
string a,b;
void solve() {
  pii start{a[0] - 'a' + 1,a[1] - '0'},end{b[0] - 'a' + 1,b[1] - '0'};
  queue<pair<pii,int>> q;
  q.push({start,0});
  vector<vi> vis(9,vi(9,-1));
  while (q.empty() ^ 1 ){
    auto [cur, steps] = q.front();
    q.pop();
    if(cur == end) {
      ::printf("To get from %s to %s takes %d knight moves.\n",a.c_str(),b.c_str(),steps);
      break;
    }
    vis[cur.ff][cur.ss] = 1;
    for (int i = 0; i < 8; ++i) {
      int Dx = dx[i] + cur.ff,Dy = dy[i] + cur.ss;
      if(Dx > 0 && Dx < 9 && Dy > 0 && Dy < 9 && !~vis[Dx][Dy]){
        q.push({{Dx, Dy},steps + 1});
      }
    }
  }


}

signed main() {
  //  =============================================================================
  ZA7med;
  FRead();
  //  =============================================================================
  int TC = 1;
  // cin >> TC;
  while (cin >> a >> b)
    solve();
  return 0;
}
