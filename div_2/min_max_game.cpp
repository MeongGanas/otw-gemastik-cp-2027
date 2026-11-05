#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        int count_0 = 0;
        int count_1 = 0;

        while(n--){
            int a; cin >> a;
            if (a == 1) count_1++;
            else count_0++;
        }

        if (count_0 > count_1) cout << "Elsie\n";
        else cout << "Bessie\n";
    }

    return 0;
}