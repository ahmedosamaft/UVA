///****************************************************
//         ❤ Bsmellah El Rahman El Rahim ❤
//****************************************************/
//#include <bits/stdc++.h>
//
//using namespace std;
//#define ZA7med ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
//#define vi vector <int>
//#define ll long long
//#define ull unsigned long long
//#define vll vector <ll>
//#define pii pair <int,int>
//#define vpii vector <pii>
//#define f first
//#define s second
//#define mii map <int,int>
//#define si set <int>
//#define endl "\n"
//#define all(v) v.begin(),v.end()
//#ifndef ONLINE_JUDGE
//#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
//#else
//#define debug(x)
//#endif
//
//void _print(ll t) { cerr << t; }
//
//void _print(int t) { cerr << t; }
//
//void _print(string t) { cerr << t; }
//
//void _print(char t) { cerr << t; }
//
//void _print(double t) { cerr << t; }
//
//void _print(ull t) { cerr << t; }
//
//template<class T, class V>
//void _print(pair<T, V> p);
//
//template<class T>
//void _print(vector<T> v);
//
//template<class T>
//void _print(set<T> v);
//
//template<class T, class V>
//void _print(map<T, V> v);
//
//template<class T>
//void _print(multiset<T> v);
//
//template<class T, class V>
//void _print(pair<T, V> p) {
//    cerr << "{";
//    _print(p.f);
//    cerr << ",";
//    _print(p.s);
//    cerr << "}";
//}
//
//template<class T>
//void _print(vector<T> v) {
//    cerr << "[ ";
//    for (T i: v) {
//        _print(i);
//        cerr << " ";
//    }
//    cerr << "]";
//}
//
//template<class T>
//void _print(set<T> v) {
//    cerr << "[ ";
//    for (T i: v) {
//        _print(i);
//        cerr << " ";
//    }
//    cerr << "]";
//}
//
//template<class T>
//void _print(multiset<T> v) {
//    cerr << "[ ";
//    for (T i: v) {
//        _print(i);
//        cerr << " ";
//    }
//    cerr << "]";
//}
//
//template<class T, class V>
//void _print(map<T, V> v) {
//    cerr << "[ ";
//    for (auto i: v) {
//        _print(i);
//        cerr << " ";
//    }
//    cerr << "]";
//}
//
////====================================================================================
//const ll N = 1e6 + 5, INF = 100000000000ll, mod = 1e9 + 7;
//
//
//ll fastpow(ll a, ll b) {
//    ll ans = 1;
//    while (b) {
//        if (b & 1)
//            ans *= a;
//        a *= a;
//        b == 1;
//    }
//    return ans % mod;
//}
//
//
//void solve() {
//    int n;
//    cin >> n;
//    vi a(n),b(n);
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//
//    for (int i = 0; i < n; ++i) {
//        cin >> b[i];
//    }
//    pii ans = {1,1};
//    int l = 0, r = 1;
//    while (r < n){
//        int cur = b[l];
//        while (r < n && b[r] >= cur){
//            cur = b[r];
//            r++;
//        }
//        if(ans.s - ans.f < r - (l + 1))
//            ans = {l+1,r};
//        l = r;
//        r++;
//    }
//    cout << ans.f << " " << ans.s << endl;
//    debug(ans)
//}
//
//signed main() {
////  =============================================================================
//    ZA7med;
//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    freopen("error.txt", "w", stderr);
//#endif
////  =============================================================================
//    int TC = 1;
//    cin >> TC;
//    while (TC--)
//        solve();
//    return 0;
//}