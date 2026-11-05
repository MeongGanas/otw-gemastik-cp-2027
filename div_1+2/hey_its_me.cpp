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
    int n; cin >> n;

    vector<int> S;
    
    string x; cin >> x;
    for(int i = 1; i <= n; i++){
        if (x[i-1] == '1'){
            S.push_back(i);
        }
    }

    cout << S[S.size() - 1] - S[0] << endl;
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


// 1001
// s = [1, 4]
// k = [2, 3]


// s = [4]
// k = [1, 2, 3]


// s = [3, 4]
// k = [1, 2]


// s = [4]
// k = [1, 2, 3]


// s = [3, 4]
// k = [1, 2]

// 111

// S = {1, 2, 3}
// 3 - 1
// 2

// 101010
// S = {1, 3, 5}
// 5 - 1
// 4


// 1101001
// S = {1, 2, 4, 7}
// 7 - 1
// 6