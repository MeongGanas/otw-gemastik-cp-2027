#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; cin >> s;

    string target = "hello";
    int j = 0;

    for (char c : s) {
        if (c == target[j]) {
            j++;
            if (j == target.size()) break;
        }
    }
    if (j == target.size()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    // solusi saya
    // int n = s.size();

    // char expected = 'h';
    // bool is_hello = false;
    // int count_l = 1;

    // for(int i = 0; i < n; i++){
    //     if (s[i] == expected && expected == 'h'){
    //         expected = 'e';
    //     } else if (s[i] == expected && expected == 'e'){
    //         expected = 'l';
    //     } else if (s[i] == expected && expected == 'l'){
    //         if (count_l == 1){
    //             expected = 'l';
    //         } else {
    //             expected = 'o';
    //         }
    //         count_l++;
    //     } else if (s[i] == expected && expected == 'o'){
    //         is_hello = true;
    //     }
    // }

    // if (is_hello) cout << "YES";
    // else cout << "NO";

    return 0;
}