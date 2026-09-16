#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t, n, x, mx, mx_tmp, c;

    cin >> t;

    while(t--) {
        cin >> n;

        vector<int> v(n);

        mx = 0;

        for(int i = 0; i < n; i++) {
            cin >> v[i];
            mx = max(mx, v[i]);
        }

        mx_tmp = c = 0;

        for(int i = n - 1; i >= 0; i--) {
            if(v[i] == mx) break;
            else if(v[i] > mx_tmp) {
                mx_tmp = v[i];
                c++;
            }
        }

        cout << c << '\n';
    }

    return 0;
}
