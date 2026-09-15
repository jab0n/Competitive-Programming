#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

vector<bool> prime (1e6 + 1, true);

void criba() {
    prime[0] = false;
    prime[1] = false;

    for(int i = 2; i * i <= 1e6; i++) {
        if(prime[i]) {
            for(int j = i * i; j <= 1e6; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    criba();

    ll x;
    vector<ll> vll;

    for(ll i = 2; i <= 1e6; i++) {
        if(prime[i]) {
            x = i * i;
            vll.push_back(x);
        }
    }

    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;

        if(binary_search(vll.begin(), vll.end(), x)) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
