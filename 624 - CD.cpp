/****************************************************
         ❤ Bsmellah El Rahman El Rahim ❤
****************************************************/

#include <bits/stdc++.h>

using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vi vector <int>
#define loop(i, from, to) for(int i = from; i < to; i++)
#define all(v) v.begin(),v.end()


void solve() {
    int w, n;
    cin >> w >> n;

    vi v(n);
    loop(i, 0, n) cin >> v[i];
    for (int msk = 0; msk < (1ll << n); ++msk) {
        vi subset;
        for (int i = 0; i < n; ++i) {
            if (msk & (1ll << i))
                subset.push_back(v[i]);
        }
        int sum = accumulate(all(subset), 0);
        if (sum == w) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
    int min;

    while (cin >> min) {
        int t;
        cin >> t;
        vi v(t);
        loop(i, 0, t) cin >> v[i];
        pair<int, vi > mx = {0, {0}};
        for (int msk = 0; msk < (1ll << t); ++msk) {
            vi subset;
            for (int i = 0; i < t; ++i)
                if (msk & (1ll << i))
                    subset.push_back(v[i]);
            int sum = accumulate(all(subset), 0);
            if (sum > mx.first && sum <= min)
                mx = max(mx, {sum, subset});
        }
        for (const auto &i: mx.second) {
            cout << i << " ";
        }

        cout << "sum:" << mx.first << endl;
    }
    return 0;
}
