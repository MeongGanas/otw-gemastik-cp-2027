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
    int m, n, x; cin >> m >> n >> x;

    vector<vector<int>> res(m, vector<int>(n));

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> res[i][j];
        }
    }

    for (int k = 0; k < x; k++){
        string operation; cin >> operation;

        if (operation == "90" or operation == "180" or operation == "270"){
            int rotations = stoi(operation) / 90;

            for (int l = 0; l < rotations; l++){
                vector<vector<int>> temp;
                
                if (res.size() == res[0].size()){
                    for (int i = 0; i < res.size(); i++){
                        vector<int> temp2;
                        for (int j = 0; j < res[0].size(); j++){
                            int curr = res[j][i];
                            temp2.insert(temp2.begin(), curr);
                        }
                        temp.push_back(temp2);
                    }
                } else {
                     for (int i = 0; i < res[0].size(); i++){
                        vector<int> temp2;
                        for (int j = 0; j < res.size(); j++){
                            int curr = res[j][i];
                            temp2.insert(temp2.begin(), curr);
                        }
                        temp.push_back(temp2);
                    }
                }

                res = temp;
            }
        } else {
            if (operation == "_"){
                reverse(res.begin(), res.end());
            } else {
                for (int i = 0; i < res.size(); i++){
                    reverse(res[i].begin(), res[i].end());
                }
            }
        }
    }

    for (int i = 0; i < res.size(); i++){
        for (int j = 0; j < res[0].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}