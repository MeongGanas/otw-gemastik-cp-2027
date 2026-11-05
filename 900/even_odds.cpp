#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long long n, k; cin >> n >> k;

    long long half = (n + 1) / 2;

    if (k <= half){
        cout << k * 2 - 1 << '\n';
    } else {
        cout << (k - half) * 2 << '\n';
    }

    return 0;
}