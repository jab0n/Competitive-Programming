#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n, m, a, b;

    cin >> n >> m;

    vector<vector<int>> vc(n + 1);
    vector<bool> mk(n + 1);
    vector<int> di(n + 1);
    vector<int> pa(n + 1);
    queue<int> q;

    for(int i = 1; i <= m; i++) {
        cin >> a >> b;

        vc[a].push_back(b);
        vc[b].push_back(a);
    }

    q.push(1);
    mk[1] = true;
    pa[1] = -1;
    
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        for(int u : vc[v]) {
            if(!mk[u]) {
                mk[u] = true;
                q.push(u);
                di[u] = di[v] + 1;
                pa[u] = v;
            }
        }
    }

    if(!mk[n]) {
        cout << "IMPOSSIBLE" << '\n';
    } else {
        vector<int> path;
        for(int v = n; v != -1; v = pa[v]) {
            path.push_back(v);
        }
        reverse(path.begin(), path.end());

        cout << path.size() << '\n';
        for(int i = 0; i < path.size(); i++) {
            cout << path[i] << ' ';
        }

        cout << '\n';
    }

    return 0;
}
