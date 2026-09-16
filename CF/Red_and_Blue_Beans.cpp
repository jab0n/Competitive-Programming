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
    double rel, r, b, d;


    cin >> t;

    while(t--) {
        cin >> r >> b >> d;

        rel = max(r, b) / min(r, b);
        d++;

        if(rel > d) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n'; 
        }
    }

    return 0;
}
