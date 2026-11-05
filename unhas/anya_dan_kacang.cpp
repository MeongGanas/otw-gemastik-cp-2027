#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int N, X; cin >> N >> X;

    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    for (int i = 0; i < N-1; i++){
        if (A[i] > A[i+1] && i != X - 1 && i + 1 != X - 1){
            cout << 0;
            return 0;
        }
    }

    cout << 1;
    return 0;
}