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
    int l, r; cin >> l >> r;

    int min_val = min(l, r);
    int max_val = max(l, r);

    if (abs(l) == abs(r)) {
        cout << 0 << endl;
        return;
    }

    if (l == 0 || r == 0){
        cout << max(max_val, abs(min_val)) - 1 << endl;
        return;
    }

    if ((l <= 0 && r <= 0) || (l >= 0 && r >= 0)) {
        cout << max_val - min_val << endl;
        return;
    }

    int count = 0;
    for (int i = min_val; i < max_val; i++){
        if (abs(min_val) > abs(max_val) && abs(i) > max_val){
            count++;
        } else if (i > abs(min_val)){
            count++;
        }
    }

    if (abs(min_val) > abs(max_val)) count--;
    cout << count << endl;
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