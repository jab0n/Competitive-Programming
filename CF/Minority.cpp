#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t, ze, on;
    string s;

    cin >> t;

    while(t--) {
        cin >> s;

        ze = on = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '0') ze++;
            else on++;
        }

        if(min(ze, on) == 0) {
            cout << 0 << '\n';
        } else {
            if(ze == on) {
                cout << min(ze, on) - 1 << '\n';
            } else {
                cout << min(ze, on) << '\n';
            }
        }
    }

    return 0;
}
