#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;

    while (t--){
        int k; cin >> k;

        int ramable = 0;

        for (int i = 1; i <= k; i++){
            int ck; cin >> ck;
            
            if (ck > 2) ramable += 2;
            else if (ck == 2) ramable += 1;
        }
        
        if (ramable >= 2) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}