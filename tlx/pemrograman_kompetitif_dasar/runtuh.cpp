#include <bits/stdc++.h>
using namespace std;

// ================= DEBUG TEMPLATE START =================
void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template<typename T, typename V>
void __print(const pair<T, V> &x) { cerr << '{'; __print(x.first); cerr << ", "; __print(x.second); cerr << '}'; }
template<typename T>
void __print(const T &x) { int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}"; }
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v) { __print(t); if (sizeof...(v)) cerr << ", "; _print(v...); }

#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define dbg(x...)
#endif
// ================= DEBUG TEMPLATE END ===================

// belum selesai
void solve() {
    int r, c; cin >> r >> c;

    vector<string> board;

    int last_index_runtuh = 0;
    for(int i = 0; i < r; i++){
        string form; cin >> form;

        int count_1 = 0;
        for (char s: form){
            if (s == '1') count_1++;
        }

        if (count_1 == c) {
            last_index_runtuh = max(i, last_index_runtuh);
            board.insert(board.begin(), string(c, '0'));
        } else {
            board.push_back(form);
        }
    }

    cout << last_index_runtuh << endl;

    for(int i = r-1; i >= 0; i--){
        for (int j = 0; j < c; j++){
            int current = board[i][j];

            if (current == '0'){
                dbg(i, j);
            }
        }
    }

    for(int i = 0; i < r; i++){
        cout << board[i] << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}

// 000000
// 000000
// 011100
// 110011
// 111111
// 111000
// 111111
// 111111
// 111001
// 001100
// 111011