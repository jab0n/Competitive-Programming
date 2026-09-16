#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n, k;

    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j) cout << k - (n - 1) << ' ';
            else cout << 1 << ' ';
        }
        cout << '\n';
    }

    return 0;
}
