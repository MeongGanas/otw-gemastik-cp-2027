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
    long long n; cin >> n;

    if (n == 0) cout << 1;

    int highest_bit = 63 - __builtin_clzll(n);
    unsigned long long mask = (1ULL << (highest_bit + 1)) - 1;
    long long ans = (n ^ mask);

    if (ans < 1){
        cout << 1;
    } else {
        cout << ans;
    }


    // long long a = N xor N - 1 + N & N - 1;
    // long long b = N xor 1 + N & 1;
    // long long c = N xor N / 2 + N & N / 2;

    // if (a > b && a > c){
    //     cout << N - 1;
    // } else if (b > a && b > c){
    //     cout << 1;
    // } else {
    //     cout << N / 2;
    // }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

// 1000
// 0111

// 1100
// 0110 0011
// 1010 

// 1010
// 0101 0010



// 100
// 011
// 111(xor) 000(and)

// 11
// 10 01

// 01 10

// 11
// 00

// 1000

// 4 3