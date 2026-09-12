#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

void solve() {
    int n, pa, pb, mx;

    cin >> n;

    vector<int> va(n);
    vector<int> vb(n); 

    for(int i = 0; i < n; i++) {
        cin >> va[i] >> vb[i];
    }

    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());

    pa = pb = 0;
    mx = 0;

    while(pa < n) {
        if(va[pa] >= vb[pb]) {
            pb++;
        } else {
            pa++;
        }

        mx = max(mx, pa - pb);
    }

    cout << mx << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    solve();

    return 0;
}
