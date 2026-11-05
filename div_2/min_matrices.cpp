#include<bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n, k; cin >> n >> k;

    if(k < n || k > 2 * n - 1) { cout << -1; return; }
    
    vector<vector<int>> ans(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++){
        ans[i][i] = i+1;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    k -= n;
    int current = n;
    for (int i = 1; i <= k; i++){
        ans[i][0] = current;
        ans[i][i] = current + 1;
        current++;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        solve();
        if(t)   cout << "\n";
    }
}