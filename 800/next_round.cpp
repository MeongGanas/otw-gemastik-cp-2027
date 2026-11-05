#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n, k; cin >> n >> k;
    
    int count = 0;
    int low_score = 0;

    for (int i = 1; i <= n; i++){
        int a; cin >> a;

        if (i == k) low_score = a;

        if (a > 0){
            if (i <= k || a == low_score){
                count++;
            }
        }
    }
    
    cout << count;

    return 0;
}