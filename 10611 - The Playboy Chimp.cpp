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


auto valid = [](vi &v, int n, int c,int mid) -> bool {
    int co = 1;
    int l = 0;
    for (int r = 0; r < n; ++r) {
        if(v[r] - v[l] >= mid)
            co++,l=r;
    }
    return co >= c;
};

auto BST = [](vi &v, int n, int t) -> int {
    int l = -1, r = n, mid = (r + l) / 2;
    while (r - l > 1) {
        if (v[mid] > t)
            r = mid;
        else
            l = mid;
        mid = r +(l - r) / 2;
    }
    if(r == n)
        return -1;
    return v[r];
};

auto BSL = [](vi &v, int n, int t) -> int {
    int l = -1, r = n, mid = (r + l) / 2;
    while (r - l > 1) {
        if (v[mid] >= t)
            r = mid;
        else
            l = mid;
        mid = r +(l - r) / 2;
    }
    if(l == -1)
        return -1;
    return v[l];
};

void solve() {
    int n;
    cin >> n;
    vi v (n);
    loop(i, n) cin >> v[i];
    int q;
    cin >> q;
    while (q--){
        int x;
        cin >> x;
        int r = BST(v, n,x);
        int l = BSL(v, n,x);
        if(l == -1)
        cout << "X "<< r << endl;
        else if (r == -1)
        cout << l << " X" << endl;
        else
        cout << l << " "<< r << endl;
    }


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


        solve();

    return 0;
}
