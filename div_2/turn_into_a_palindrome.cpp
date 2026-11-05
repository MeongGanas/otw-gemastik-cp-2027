#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int m; cin >> m;
        char c; cin >> c;

        string s; cin >> s;

        int count_coins = 0;
        for(int i = 0; i < m / 2; i++){
            if (s[i] != s[m-i-1]){
                if (s[i] != c && s[m-i-1] != c){
                    s[i] = c;
                    s[m-i-1] = c;
                    count_coins += 2;
                } else if (s[i] != c){
                    s[i] = c;
                    count_coins++;
                } else {
                    s[m-i-1] = c;
                    count_coins++;
                }
            }
        }
        cout << count_coins << endl;
    }

    return 0;
}