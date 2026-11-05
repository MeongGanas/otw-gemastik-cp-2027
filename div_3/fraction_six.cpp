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

void solve() {
    int n, m; cin >> n >> m;
    string p, q; cin >> p >> q;

    if (m > n){
        cout << "NO" << endl;
        return;
    }

    int total_char_pembilang = 0;
    unordered_map<char, int> chars;
    for (int i = 0; i < n; i++){
        char curr = p[i];
        if (chars[curr]){
            chars[curr] += 1;
        } else {
            chars[curr] = 1;
        }
        total_char_pembilang++;
    }

    int total_char_penyebut = 0;
    for (int i = 0; i < m; i++){
        char curr = q[i];
        if (chars[curr]){
            chars[curr] -= 1;
            total_char_pembilang--;
        } else {
            total_char_penyebut++;
            break;
        }
    }

    if (chars['s'] == 1 && chars['i'] == 1 && chars['x'] == 1 && total_char_pembilang == 3 && total_char_penyebut == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}