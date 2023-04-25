/****************************************************
         ❤ Bsmellah El Rahman El Rahim ❤
****************************************************/
#pragma clang diagnostic push
#pragma ide diagnostic ignored "UnusedLocalVariable"

#include <bits/stdc++.h>

using namespace std;
#define ZA7med ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vi vector <int>
#define ll long long
#define ull unsigned long long
#define vll vector <ll>
#define pii pair <int,int>
#define vpii vector <pii>
#define f first
#define s second
#define mii map <int,int>
#define si set <int>
#define endl "\n"
#define all(v) v.begin(),v.end()
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) { cerr << t; }

void _print(int t) { cerr << t; }

void _print(string t) { cerr << t; }

void _print(char t) { cerr << t; }

void _print(double t) { cerr << t; }

void _print(ull t) { cerr << t; }

template<class T, class V>
void _print(pair<T, V> p);

template<class T>
void _print(vector<T> v);

template<class T>
void _print(set<T> v);

template<class T, class V>
void _print(map<T, V> v);

template<class T>
void _print(multiset<T> v);

template<class T, class V>
void _print(pair<T, V> p) {
    cerr << "{";
    _print(p.f);
    cerr << ",";
    _print(p.s);
    cerr << "}";
}

template<class T>
void _print(vector<T> v) {
    cerr << "[ ";
    for (T i: v) {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

template<class T>
void _print(set<T> v) {
    cerr << "[ ";
    for (T i: v) {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

template<class T>
void _print(multiset<T> v) {
    cerr << "[ ";
    for (T i: v) {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

template<class T, class V>
void _print(map<T, V> v) {
    cerr << "[ ";
    for (auto i: v) {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

//====================================================================================
const ll N = 1e6 + 5, INF = 100000000000ll, mod = 1e9 + 7;
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

int toInt(char x) {
    return x - '0';
}

void solve() {
    string a, b;
    cin >> a >> b;
    int n = max(a.size(), b.size());
    string ans;
    int rem = 0, sC;
    for (int i = 0; i < n; ++i) {
        if (i < a.size() && i < b.size()) { ans += to_string((toInt(a[i]) + toInt(b[i]) + rem) % 10); }
        else if (i < a.size()) { ans += to_string((toInt(a[i]) + rem) % 10); }
        else if (i < b.size()) { ans += to_string((toInt(b[i]) + rem) % 10); }
        sC = rem;
        if (rem) rem = 0;

        if (i < a.size() && i < b.size() && toInt(a[i]) + toInt(b[i]) + sC > 9) { rem = 1; }
        else if (i < a.size() && toInt(a[i]) + sC > 9) { rem = 1; }
        else if (i < b.size() && toInt(b[i]) + sC > 9) { rem = 1; }
    }

    if (rem)
        ans += '1';

    if (ans.front() == '0') {
        std::reverse(ans.begin(), ans.end());
        while (ans.back() == '0') ans.pop_back();
        std::reverse(ans.begin(), ans.end());
    }
    cout << ans << endl;
}

signed main() {
//  =============================================================================
    ZA7med;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
//  =============================================================================
    int TC = 1;
    cin >> TC;
    while (TC--)
        solve();
    return 0;
}

#pragma clang diagnostic pop
