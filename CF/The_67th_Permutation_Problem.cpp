#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t, n;

    cin >> t;

    while(t--) {
        cin >> n;

        for(int i = 1; i <= n; i++) {
            cout << i << " " << n + ((i - 1) * 2) + 1 << " " << n + ((i - 1) * 2) + 2 << " "; 
        }

        cout << '\n';
    }

    return 0;
}
