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

    vector<int> heights;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        heights.push_back(x);
    }

    if (n == 1){
        cout << n << endl;
        cout << heights[0] << endl;
        return;
    }

    sort(heights.begin(), heights.end());

    vector<int> right;
    for (int i = 0; i < n-1; i++){
        if (heights[i] == heights[i+1]){
            right.push_back(heights[i]);
            heights[i] = 0;
        }
    }

    reverse(right.begin(), right.end());
    sort(heights.begin(), heights.end());
    
    int new_n = heights.size();

    int count = 0;
    for (int i = 0; i < new_n - 1; i++){
        if(heights[i] != 0){
            if (heights[i] < heights[i+1]){
                count++;
            }
        }
    }

    if (heights[new_n - 1] > heights[new_n - 2]) count++;

    if(right.size() != 0){
        for (int i = 0; i < right.size() - 1; i++){
            if (right[i] > right[i+1]){
                count++;
            }
        }
        if (right.front() <= heights.back()) count++;
    } else {
        if(n > 2){
            int temp = heights[new_n - 1];
            heights[new_n - 1] = heights[new_n - 2];
            heights[new_n - 2] = temp;
        }
    }
    
    cout << count << endl;
    for (int i = 0; i < new_n; i++){
        if (heights[i] != 0){
            cout << heights[i] << " ";
        }
    }
    for (int i = 0; i < right.size(); i++){
        cout << right[i] << " ";
    }

    cout << endl;
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