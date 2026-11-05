#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector<int> A(n);
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }

        cout << __gcd(A[0], A[n - 1]) << endl;
    }

    return 0;
}