#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; cin >> s;
    int n = s.size();

    string new_string = "";
    for (int i = 0; i < n; i++){
        char current_char = tolower(s[i]);
        if (current_char != 'a' && current_char != 'i' && current_char != 'u' && current_char != 'e' && current_char != 'o' && current_char != 'y'){
            new_string += '.';
            new_string += current_char;
        }
    }   

    cout << new_string;
    return 0;
}