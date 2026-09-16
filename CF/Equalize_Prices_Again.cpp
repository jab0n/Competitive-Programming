#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t, n, s, x;

    cin >> t;

    while(t--) {
        cin >> n;

        s = 0;

        for(int i = 0; i < n; i++){
            cin >> x;

            s += x;
        }

        if(s % n != 0) {
            s /= n;
            s++;
        } else  {
            s /= n;
        }

        cout << s << '\n';
    }

    return 0;
}
