#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t, n, d;

    cin >> t;

    while(t--) {
        cin >> n >> d;

        cout << 1 << " ";

        if((d == 3 || d == 6 || d == 9) || n >= 3) {
            cout << 3 << " ";
        }

        if(d == 5) {
            cout << 5 << " ";
        }

        if(d == 7 || n >= 3) {
            cout << 7 << " ";
        }

        if(d == 9 || (d == 3 && n >= 3) || (d == 6 && n >= 3) || n >= 6) {
            cout << 9 << " ";
        }

        cout << '\n';
    }

    return 0;
}
