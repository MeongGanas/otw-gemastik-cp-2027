#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int x; cin >> x;

    int move = (x / 5);
    if (x % 5 != 0){
        move += 1;
    }

    cout << move << '\n';

    return 0;
}