#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;

    while (t--){
        int n; cin >> n;
        string s; cin >> s;

        int base_len = 1;
        for (int i = 0; i < n-1; i++){
            if (s[i] != s[i+1]) base_len++;
        }

        int min_len = base_len;
        for (int i = 1; i < n-1; i++){
            int old_cost = (s[i] != s[i-1]) + (s[i] != s[i+1]);
            int new_cost = (s[i-1] != s[i+1]);

            int current_len = base_len - old_cost + new_cost;
            min_len = min(min_len, current_len);
        }

        cout << min_len << '\n';
    }

    return 0;
}