#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int a, b, c = 1;

    cin >> a >> b;

    for(int i = 1; i <= min(a, b); i++) {
        c *= i;
    }

    cout << c << '\n';

    return 0;
}
