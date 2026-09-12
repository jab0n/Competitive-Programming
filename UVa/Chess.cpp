#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int rookie(int n, int m) {
    return min(n, m);
}

int knight(int n, int m) {
    
}

int queen(int n, int m) {

}

int king(int n, int m) {
    
}

void solve() {
    char p;
    int n, m;

    cin >> p >> n >> m;

    if(p == 'r') {
        cout << rookie(n , m) << '\n';
    } else if(p == 'k') {
        cout << knight(n , m) << '\n';
    } else if(p == 'Q') {
        cout << queen(n , m) << '\n';
    } else {
        cout << king(n , m) << '\n';
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t;

    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
