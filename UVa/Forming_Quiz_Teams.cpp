#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int n;
vector<pair<int, int>> vp (18);
double mn_di;

void bq(vector<bool> mk, double dt, int a, int b, int p){
    mk[a] = true;
    mk[b] = true;

    if(dt >= mn_di) return;

    //cout << a << " " << b << '\n';

    double dp;

    if(p == n) {
        mn_di = min(mn_di, dt);
        return;
    }

    for(int i = 0; i < n * 2; i++) {
        if(!mk[i])  {
            for(int j = i + 1; j < n * 2; j++) {
                if(!mk[i] && !mk[j] && i != j) {
                    dp = sqrt(pow(vp[i].first - vp[j].first, 2) + pow(vp[i].second - vp[j].second , 2));
                    bq(mk, dt + dp, i, j, p + 1);
                }
            }
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int cas = 1;

    while(1){
        cin >> n;

        if(n == 0) break;

        cout << "Case " << cas << ": ";
        cas++;

        int x, y;
        string name;

        for(int i = 0; i < n * 2; i++) {
            cin >> name >> x >> y;

            vp[i] = {x, y};
        }

        mn_di = 1000000000.0;

        vector<bool> mk(18, false);
        bq(mk, 0, 16, 17, 0);

        cout << fixed << setprecision(2) << mn_di << '\n';

    }

    return 0;
}
