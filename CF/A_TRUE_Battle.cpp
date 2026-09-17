#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t, n, c;
    string s;
    bool b;

    cin >> t;

    while(t--) {
        cin >> n >> s;

        if(s[0] == '1' || s[s.size() - 1] == '1') {
            cout << "YES" << '\n';
        } else {
            c = 0;
            b = false;
            for(int i = 0; i < s.size(); i++) {
                if(s[i] == '1') {
                    c++;
                    if(c > 1) b = true;
                } else{
                    c = 0;
                }
            }

            if(b) {
                cout << "YES" << '\n';
            } else cout << "NO" << '\n';
        }
    }

    return 0;
}
