#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int mod = 1e9 + 7;

void solve() {
    int n;

    cin >> n;

    vector<string> v(n);
    vector<vector<int>> mtx (n, vector<int> (n, 0));

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < n; i++) {
        if(v[0][i] == '*') {
            break;
        }
        mtx[0][i] = 1;
    }

    for(int i = 0; i < n; i++) {
        if(v[i][0] == '*') {
            break;
        }
        mtx[i][0] = 1;
    }

    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            mtx[i][j] = (mtx[i - 1][j] + mtx[i][j - 1]) % mod;
            if(v[i][j] == '*') {
                mtx[i][j] = 0;
            }
        }
    }

    cout << mtx[n - 1][n - 1] << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    solve();

    return 0;
}
