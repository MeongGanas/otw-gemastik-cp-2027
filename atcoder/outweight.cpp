#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int N; cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    vector<int> B(N);
    for (int i = 0; i < N; i++){
        cin >> B[i];
    }

    int win_index = -1;
    for (int i = 0; i < N; i++){
        if (A[i] > B[i]){
            win_index = i;
            break;
        }
    }

    if (win_index == -1){
        cout << "No";
        return 0;
    }

    return 0;
}