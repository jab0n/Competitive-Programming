#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t, n, l, r, x;
    ll s1, s2, s3;

    cin >> t;

    while(t--) {
        cin >> n >> l >> r;

        vector<int> v1, v2, v3;

        s1 = s2 = s3 = 0;

        for(int i = 1; i <= n; i++) {
            cin >> x;

            if(i < l) {
                v1.push_back(x);
            } else if(i > r) {
                v3.push_back(x);
            } else {
                v2.push_back(x);
                s2 += x;
            }
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        sort(v3.begin(), v3.end());

        int p = 0;
        s1 = s2;
        while(p < v1.size() && p < v2.size()) {
            if(v1[p] < v2[(v2.size() - 1) - p]) {
                s1 -= v2[(v2.size() - 1) - p];
                s1 += v1[p];
            } else {
                break;
            }
            p++;
        }

        p = 0;
        s3 = s2;
        while(p < v3.size() && p < v2.size()) {
            if(v3[p] < v2[(v2.size() - 1) - p]) {
                s3 -= v2[(v2.size() - 1) - p];
                s3 += v3[p];
            } else {
                break;
            }
            p++;
        }

        cout << min(s1, s3) << '\n';
    }

    return 0;
}
