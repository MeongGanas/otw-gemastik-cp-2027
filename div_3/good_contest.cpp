#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        int participants; cin >> participants;

        int a, b, c; cin >> a >> b >> c;

        int maximum_solve = min(min(a, b), c);

        cout << participants - maximum_solve << '\n';
    }

    return 0;
}