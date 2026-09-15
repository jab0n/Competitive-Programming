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

    int n, m, a, b;

    cin >> n >> m;

    vector<vector<int>> v(n + 1);
    vector<bool> mk(n + 1, false);
    vector<int> p;

    for(int i = 1; i <= m; i++) {
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    queue<int> q;

    for(int i = 1; i <= n; i++) {
        if(!mk[i]) {
            q.push(i);
            mk[i] = true;
            p.push_back(i);

            while(!q.empty()) {
                int x = q.front();
                q.pop();
                for(int u : v[x]) {
                    if(!mk[u]) {
                        mk[u] = true;
                        q.push(u);
                    }
                }
            }
        }
    }

    cout << p.size() - 1 << '\n';

    for(int i = 1; i < p.size(); i++) {
        cout << p[0] << " " << p[i] << '\n';
    }

    return 0;
}
