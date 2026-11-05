#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    while (n--){
        int x; cin >> x;

        if (x == 1){
            cout << 0 << '\n';
            continue;
        }

        if (x % 2 == 0 || x % 5 == 0){
            cout << -1 << endl;
        } else {
            cout << 1 << endl;
        }
    }

    return 0;
}