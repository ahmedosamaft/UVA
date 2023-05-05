/****************************************************
         ❤ Bsmellah El Rahman El Rahim ❤
****************************************************/

#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define vi vector<int>

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    int n;
    while (cin >> n) {
        stack<int> s;
        priority_queue<int> pq;
        queue<int> q;
        bool sScore = 1, pqScore = 1, qScore = 1;
        bool pos = 1;
        for (int i = 0; i < n; ++i) {
            int op;
            cin >> op;
            if (op == 1) {
                cin >> op;
                s.push(op);
                pq.push(op);
                q.push(op);
            } else {
                cin >> op;
                if (!s.empty()) {
                    int a = s.top(), b = q.front(), c = pq.top();
                    if (op != a) {
                        sScore = 0;
                    }
                    if (op != b) {
                        qScore = 0;
                    }
                    if (op != c) {
                        pqScore = 0;
                    }
                    s.pop();
                    q.pop();
                    pq.pop();
                } else {
                    pos = 0;
                }
            }
        }
        if (!pos)
            cout << "impossible\n";
        else {
            if (sScore + qScore + pqScore > 1) cout << "not sure\n";
            else if (sScore) {
                cout << "stack\n";
            }
            else if (pqScore) cout << "priority queue\n";
            else if (qScore) cout << "queue\n";
            else cout << "impossible\n";

        }
    }


}
