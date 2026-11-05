#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long long n, m; cin >> n >> m;

    long long prev_start = 1;
    long long count_move = 0;
    while(m--){
        long long a; cin >> a;

        if (a >= prev_start){
            count_move += (a - prev_start);
        } else {
            count_move += (n + a - prev_start);
        }

        prev_start = a;
    }

    cout << count_move;

    return 0;
}