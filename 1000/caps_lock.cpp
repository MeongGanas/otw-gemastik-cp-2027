#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; cin >> s;

    bool can_change = true;
    for (size_t i = 1; i < s.size(); i++) {
        if (islower(s[i])) {
            can_change = false;
            break;
        }
    }

    if (can_change) {
        for (char &c : s) {
            c = isupper(c) ? tolower(c) : toupper(c);
        }
    }

    cout << s << "\n";

    // int cnt_upper = 0;
    // int word_length = s.size();

    // for(int i = 1; i < word_length; i++){
    //     if(isupper(s[i]) && isupper(s[i-1])){
    //         cnt_upper++;
    //     } else if (isupper(s[i]) && !isupper(s[i-1])){
    //         cnt_upper = 1;
    //     }
    // }

    // if(cnt_upper >= word_length - 1){
    //     string new_s = "";
    //     for(char &c: s){
    //         if (isupper(c)){
    //             new_s += tolower(c);
    //         } else {
    //             new_s += toupper(c);
    //         }
    //     }
    //     cout << new_s << endl;
    // } else {
    //     cout << s << endl;
    // }

    return 0;
}