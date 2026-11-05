#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; cin >> s;
    unordered_set<char> seen;
    int count = 0;

    for (char &c: s){
        if (seen.find(c) == seen.end()){
            seen.insert(c);
            count++;
        }
    }

    if (count % 2 == 1) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";

    return 0;
}