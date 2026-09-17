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
    int n, m, h, r, b, c;

    cin >> t;

    while(t--) {
        cin >> n >> m >> h;

        vector<int> vi(n + 1);
        vector<int> vc(n + 1);
        vector<int> vr(n + 1, 0);

        for(int i = 1; i <= n; i++) {
            cin >> vi[i];
            vc[i] = vi[i];
        }

        r = 0;

        for(int i = 0; i < m; i++) {
            cin >> b >> c;

            if(vr[b] < r) {
                vr[b] = r;
                vc[b] = vi[b];
            }

            vc[b] += c;

            if(vc[b] > h) {
                r++;
                vr[b] = r;
                vc[b] = vi[b];
            }
        }

        for(int i = 1; i <= n; i++) {
            if(vr[i] < r) {
                vr[i] = r;
                vc[i] = vi[i];
            }
        }

        for(int i = 1; i <= n; i++) {
            cout << vc[i] << " ";
        }

        cout << '\n';
    }

    return 0;
}
