#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; cin >> s;

    int n = s.size();
    int i = 0;

    string final_word;
    while (i < n){
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            if (!final_word.empty() && final_word.back() != ' '){
                final_word += ' ';
            }
            i += 3;
        } else {
            final_word += s[i];
            i++;
        }
    }

    cout << final_word;

    return 0;
}