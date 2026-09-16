#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    ll t, n, m, con;
    
    cin >> t;

    while(t--) {
        cin >> n >> m;

        vector<int> v(n + m - 1);

        for(int i = 0; i < n + m - 1; i++) {
            cin >> v[i];
        }

        cin >> con;

        sort(v.begin(), v.end());

        for(int i = 0; i < n - 1; i++) {
            con += v[(n+m-2) - i];
        }

        cout << con << '\n';
    }

    return 0;
}
