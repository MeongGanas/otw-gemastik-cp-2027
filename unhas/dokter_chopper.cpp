#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int N; cin >> N;

    vector<int> biaya(N);

    for (int i = 0; i < N; i++){
        cin >> biaya[i];
    }

    int minimum_biaya = biaya[N - 1] * 2;
    for (int i = 1; i < N - 1; i++){
        int current = biaya[i-1] * abs(i - N);
        minimum_biaya = min(minimum_biaya, current);
    }

    cout << minimum_biaya;
    return 0;
}