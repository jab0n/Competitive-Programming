#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n, x;
    bool b = false;

    cin >> n >> x;

    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    sort(v.begin(), v.end());

    int l = 0, r = n - 1;

    while(l < r) {
        if(v[l].first + v[r].first == x) {
            cout << v[l].second << " " << v[r].second << '\n';
            b = true;
            break;
        } else if(v[l].first + v[r].first > x) {
            r--;
        } else {
            l++;
        }
    }

    if(!b) {
        cout << "IMPOSSIBLE" << '\n';
    }

    return 0;
}
