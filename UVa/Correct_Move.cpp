#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;

void solve(int king, int queen, int queen_move) {
    if(king == queen) {
        cout << "Illegal state\n";
    } else {
        bool b;
        set<int> st;

        b = false;

        int y = king / 8;
        int x = king % 8;

        if(y == 0) {
            st.insert(8 + x);
        } else if(y == 7) {
            st.insert(48 + x);
        } else {
            st.insert(((y - 1) * 8) + x);
            st.insert(((y + 1) * 8) + x);
        }

        if(x == 0) {
            st.insert((y * 8) + 1);
        } else if(x == 7) {
            st.insert((y * 8) - (x - 1));
        } else {
            st.insert((y * 8) + (x + 1));
            st.insert((y * 8) + (x - 1));
        }

        y = queen / 8;
        x = queen % 8;
        
        for(int i = x; i >= 0; i--) {
            if(((y * 8) + i) == king) break;
            if(queen_move == ((y * 8) + i)) {
                b = true;
            }
        }

        for(int i = x; i < 8; i++) {
            if(((y * 8) + i) == king) break;
            if(queen_move == ((y * 8) + i)) {
                b = true;
            }
        }

        for(int i = y; i >= 0; i--) {
            if(((i * 8) + x) == king) break;
            if(queen_move == ((i * 8) + x)) {
                b = true;
            }
        }

        for(int i = y; i < 8; i++) {
            if(((i * 8) + x) == king) break;
            if(queen_move == ((i * 8) + x)) {
                b = true;
            }
        }

        if(!b || (queen == queen_move)) {
            cout << "Illegal move\n";
        } else if(st.count(queen_move)) {
            cout << "Move not allowed\n";
        } else if(b) {
            if((king == 0 && queen_move == 9) ||
            (king == 7 && queen_move == 14) ||
            (king == 56 && queen_move == 49) ||
            (king == 63 && queen_move == 54)) {
                cout << "Stop\n";
            } else {
                cout << "Continue\n";
            }
        } 

    } 
}

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int king, queen, queen_move;

    while(cin >> king) {
        cin >> queen >> queen_move;
        solve(king, queen, queen_move);
    }

    return 0;
}
