#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int s, n;
    cin >> s >> n;
    
    bool is_winning = true;

    multimap<int, int> dragons = {};

    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;

        dragons.insert({x, y});
    }

    for (const auto &p : dragons){
        if (s > p.first){
            s += p.second;
        } else {
            is_winning = false;
            break;
        }
    }

    if (is_winning) cout << "YES";
    else cout << "NO";

    return 0;
}