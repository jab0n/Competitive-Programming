// TLE :(

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

void solve() {
    int n, m;

    cin >> n >> m;

    vector<int> vn(n + 1);

    for(int i = 0; i < n; i++) {
        cin >> vn[i];
    }

    vn[n] = -1;

    sort(vn.begin(), vn.end());

    for(int i = 0; i < m; i++) {
        int x;

        cin >> x;

        for(int i = n; i >= 0; i--) {
            if(vn[i] <= x) {
                cout << vn[i] << '\n';
                vn[i] = -1;
                sort(vn.begin(), vn.end());
                break;
            }
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
