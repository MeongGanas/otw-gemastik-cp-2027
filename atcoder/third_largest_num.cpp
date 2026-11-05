#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    int a = 0;
    int b = 0;
    int c = 0;

    for (int i = 0; i < n; i++){
        int a; cin >> a;

        if (a >= a){
            c = b;
            b = a;
            a = a;
        } else if (a >= b){
            c = b;
            b = a;
        } else if (a > c) {
            c = a;
        }

        if(i > 1){
            cout << c << '\n';
        }
    }

    return 0;
}