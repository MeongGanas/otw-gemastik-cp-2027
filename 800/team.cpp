#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    int res = 0;

    while (N--){
        int p, v, t;
        cin >> p >> v >> t; 

        if (p + v + t > 1){
            res += 1;
        }
    }
    cout << res;

    return 0;
}