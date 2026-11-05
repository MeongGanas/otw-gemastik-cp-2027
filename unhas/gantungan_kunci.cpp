#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int N, K; cin >> N >> K;

    if (N < K){
        cout << "TIDAK";
        return 0;
    }

    int unique = 0;
    while (N--){
        int x; cin >> x;

        if (x > K){
            unique++;
        }
    }

    if (unique >= K) cout << "YES";
    else cout << "NO";

    return 0;
}