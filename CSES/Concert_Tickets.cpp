#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

void solve() {
    int n, m, x;

    cin >> n >> m;

    multiset<int> vn;

    for(int i = 0; i < n; i++) {
        cin >> x;
        vn.insert(x);
    }

    for(int i = 0; i < m; i++) {
        cin >> x;

        auto it = vn.upper_bound(x);

        if(it != vn.begin()) {
            cout << *(--it) << '\n';
            vn.erase(it);
        } else {
            cout << -1 << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    solve();

    return 0;
}
