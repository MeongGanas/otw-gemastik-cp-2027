#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int N, Q; cin >> N >> Q;

    vector<int> P(N);
    for (int i = 0; i < N; i++){
        cin >> P[i];
    }

    vector<int> a(Q);
    for (int i = 0; i < Q; i++){
        cin >> a[i];
    }

    vector<int> moved;
    vector<bool> visited(N + 1, false);
    for (int i = Q - 1; i >= 0; i--){
        if (!visited[a[i]]){
            visited[a[i]] = true;
            moved.push_back(a[i]);
        }
    }
    reverse(moved.begin(), moved.end());

    for (int i = 0; i < N; i++) {
        if (!visited[P[i]]) {
            cout << P[i] << " ";
        }
    }

    for (int x : moved) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}