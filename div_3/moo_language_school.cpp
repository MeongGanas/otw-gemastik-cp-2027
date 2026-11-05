#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;


    int count_total_minimum = 0;
    while (t--){
        int n, k; cin >> n >> k;
        string s; cin >> s;

        int count = 0;

        int count_0 = 0;
        for(int i = 1; i <= n; i++){
            if (s[i-1] == '0') count_0++;

            if (i % k == 0){
                if (count_0 == 0) {
                    count++;
                } else {
                    count_0 = 0;
                }
            }
        }

        cout << count << '\n';
    }

    return 0;
}