#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int n, m;

vector<vector<char>> bui_map (1002, vector<char> (1002, '#')); 
vector<vector<bool>> mk(1002, vector<bool> (1002, true));

void bq(int x, int y) {
    mk[x][y] = false;

    if(mk[x + 1][y] && bui_map[x + 1][y] == '.') bq(x + 1, y);
    if(mk[x - 1][y] && bui_map[x - 1][y] == '.') bq(x - 1, y);
    if(mk[x][y + 1] && bui_map[x][y + 1] == '.') bq(x, y + 1);
    if(mk[x][y - 1] && bui_map[x][y - 1] == '.') bq(x, y - 1);
}

void solve() {    
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> bui_map[i][j];
        }
    }

    int c = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(mk[i][j] && bui_map[i][j] == '.') {
                c++;
                bq(i, j);
            }
        }
    }

    cout << c << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    solve();

    return 0;
}
