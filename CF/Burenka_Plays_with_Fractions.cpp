#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t;
    ull a, b, c, d, r1, r2;

    cin >> t;

    while(t--) {
        cin >> a >> b >> c >> d;

        r1 = a * d;
        r2 = c * b;

        if(r1 == r2) {
            cout << 0 << '\n';
        } else if(a == 0 || c == 0 || (a * d) % (c * b) == 0 || (c * b) % (a * d) == 0) {
            cout << 1 << '\n';
        } else {
            cout << 2 << '\n';
        }
    }

    return 0;
}
