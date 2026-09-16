#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t, a, b, c;
    
    cin >> t;

    vector<int> v((3 * 1e5) + 1);

    a = 0;
    for(int i = 1; i <= 3 * 1e5; i++) {
        v[i] = a;
        a ^= i;
    }

    while(t--) {
        cin >> a >> b;

        c = 0;

        if(v[a] == b){
            cout << a << '\n';
        } else {
            for(int i = 0; i < 32; i++) {
                if((b & (1 << i)) != 0 && !((v[a] & (1 << i)) != 0)) {
                    c += pow(2, i);
                } else if(!((b & (1 << i)) != 0) && (v[a] & (1 << i)) != 0) {
                    c += pow(2, i);
                } 
            }

            if(c == a) {
                cout << a + 2 << '\n';
            } else {
                cout << a + 1 << '\n';
            }
        }
    }

    return 0;
}
