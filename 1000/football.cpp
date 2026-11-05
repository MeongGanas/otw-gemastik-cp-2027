#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    int count_a = 1;
    string symbol_1; cin >> symbol_1;
    n--;

    int count_b = 0;
    string symbol_2;
    while(n--){
        string symbol; cin >> symbol;

        if (symbol != symbol_1){
            symbol_2 = symbol;
            count_b++;
        } else {
            count_a++;
        }
    }

    if (count_a > count_b){
        cout << symbol_1;
    } else {
        cout << symbol_2;
    }

    return 0;
}