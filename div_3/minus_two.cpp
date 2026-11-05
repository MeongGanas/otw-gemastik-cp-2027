#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;

    while (t--){
        int n; cin >> n;

        int total_ganjil = 0;
        int total_mod2 = 0;
        int total_mod4 = 0;

        for (int i = 0; i < n; i++){
            int a; cin >> a;
            
            if (a % 2 != 0) total_ganjil++;
            else if (a % 4 == 0) total_mod4++;
            else total_mod2++;
        }

        cout << max({total_ganjil, total_mod2, total_mod4}) << '\n';
    }

    return 0;
}