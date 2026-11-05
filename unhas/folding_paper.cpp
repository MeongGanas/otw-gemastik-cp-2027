#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long long L, W, A; cin >> L >> W >> A;

    long long current_A = A;
    long long target = L * W;

    while (current_A < target){
        current_A *= 2;
    }

    if (current_A == target) cout << "YES";
    else cout << "NO";

    return 0;
}