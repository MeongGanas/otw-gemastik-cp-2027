#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string formation; cin >> formation;

    int temp_count = 1;
    for (int i = 1; i < formation.size(); i++){
        if (formation[i] == formation[i-1]){
            temp_count += 1;
            if (temp_count == 7){
                cout << "YES" << '\n';
                return 0;
            }
        } else {
            temp_count = 1;
        }
    }

    cout << "NO" << '\n';
    return 0;
}