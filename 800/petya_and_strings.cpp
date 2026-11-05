#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b; cin >> a >> b;

    for (char &c: a) c = tolower(c);
    for (char &c: b) c = tolower(c);

    if (a < b) cout << -1;
    else if (a > b) cout << 1;
    else cout << 0;

    // for(int i = 0; i < a.size(); i++){
    //     char lower_a = tolower(a[i]);
    //     char lower_b = tolower(b[i]);

    //     if (lower_a != lower_b){
    //         int check_lexico_a = lower_a - 'a' + 1;
    //         int check_lexico_b = lower_b - 'a' + 1;

    //         if (check_lexico_a < check_lexico_b){
    //             cout << -1;
    //             return 0;
    //         } else {
    //             cout << 1;
    //             return 0;
    //         }
    //     }
    // }

    // cout << 0;
    return 0;
}