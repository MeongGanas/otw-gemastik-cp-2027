#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        long long a, b, c; cin >> a >> b >> c;

        long long score = max(abs(a + c - b), abs(a - b));

        cout << score << '\n';
    }

    return 0;
}