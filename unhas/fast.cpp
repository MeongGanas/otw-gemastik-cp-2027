#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int length = 6;

    int result; cin >> result;

    while (length--){
        int now; cin >> now;
        result = max(result + now, result - now);
    }
    cout << result;
    return 0;
}