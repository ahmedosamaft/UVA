/****************************************************
         ❤ Bsmellah El Rahman El Rahim ❤
****************************************************/

#include <bits/stdc++.h>

using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vi vector <int>
#define pii pair <int,int>
#define mii map <int,int>
#define si set <int>
#define ull unsigned long long
#define loop(i, x) for(int i = 0; i < x; i++)
#define U unsigned int
#define endl "\n"
#define MN 300005
#define INF 100000000000ll
#define all(v) v.begin(),v.end()
#define EPS 1e-6
#define sc2(n, m) cin >> n >> m;
#define sc(n) cin >> n;
#define di deque<int>
clock_t startTime;

double getCurrentTime() {
    return (double) (clock() - startTime) / CLOCKS_PER_SEC;
}


auto cmp = [](pii a, pii b) -> bool {
//            [  {5,6}      ,    {1,10}   ]
    return ((a.first < b.first) || ((a.first == b.first) && (a.second > b.second)));
};

void solve(int c) {
    deque<string> hand(25), pile(27);
    loop(i, 27)cin >> pile[i];
    loop(i, 25)cin >> hand[i];
    int y = 0;
    int value = 0;
    for (int i = 0; i < 3; ++i) {
        auto top = pile.front();
        pile.pop_front();
        if (top[0] >= '2' && top[0] <= '9')
            value = top[0] - '0';
        else value = 10;

        y += value;
        int ti = 10 - value;
        for (int j = 0; j < ti; ++j) {
            pile.pop_front();
        }
    }
    while (!hand.empty())
    {
        pile.push_back(hand.front());
        hand.pop_front();
    }
    cout << "Case " << c << ": " << pile[y - 1] << endl;

}

signed main() {
//  =============================================================================
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
//  =============================================================================
    startTime = clock();
    int TC;
    cin >> TC;
    for (int i = 1; i <= TC; ++i) {
        solve(i);
    }
    return 0;
}
