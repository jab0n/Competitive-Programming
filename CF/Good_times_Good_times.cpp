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
    string s;

    cin >> t;

    while(t--) {
        cin >> s;

        cout << 1;
        for(int i = 1; i < s.size(); i++) {
            cout << 0;
        }
        cout << 1 << '\n';
    }

    return 0;
}
