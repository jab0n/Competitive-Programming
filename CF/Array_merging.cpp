#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t, n, a, b, p;
    
    cin >> t;

    while(t--) {
        cin >> n;

        vector<int> va((2 * n) + 1, 0);
        vector<int> vb((2 * n) + 1, 0);

        cin >> a;
        p = 1;
        for(int i = 1; i < n; i++) {
            cin >> b;

            if(b == a) p++;
            else {
                va[a] = max(va[a], p);
                p = 1;
            }

            a = b;
        }
        va[a] = max(va[a], p);

        cin >> a;
        p = 1;
        for(int i = 1; i < n; i++) {
            cin >> b;

            if(b == a) p++;
            else {
                vb[a] = max(vb[a], p);
                p = 1;
            }

            a = b;
        }
        vb[a] = max(vb[a], p);

        a = 0;
        for(int i = 1; i <= 2 * n; i++) {
            a = max(a, va[i] + vb[i]);
        }

        cout << a << '\n';
    }

    return 0;
}
