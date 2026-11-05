#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;

    while (t--){
        int n; cin >> n;
        string s; cin >> s;

        string pattern[4] = {
            "0011",
            "0110",
            "1001",
            "1100"
        };
        int count = 0;
        for(int p = 0; p < 4; p++){
            bool ok = true;
            for(int i = 0; i < n; i++){
                if (s[i] != '?' and s[i] != pattern[p][i % 4]){
                    ok = false;
                    break;
                }
            }
            if (ok) count++;
        }
        cout << count << '\n';
    }

    return 0;
}