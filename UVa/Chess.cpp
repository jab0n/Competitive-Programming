#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

char p;
int n, m, c;

vector<vector<bool>> mk_in(n, vector<bool> (m, 1));

void knight(vector<vector<bool>> mk, int con) {
    
}

void queen(vector<vector<bool>> mk, int con) {

}

void king(vector<vector<bool>> mk, int con) {

}

void solve() {
    cin >> p >> n >> m;

    c = 0;

    if(p == 'r') {
        c = max(n, m);
    } else if(p == 'k') {
        knight(mk_in, 0);
    } else if(p == 'Q') {
        queen(mk_in, 0);
    } else {
        king(mk_in, 0);
    }

    cout << c << '\n';
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
