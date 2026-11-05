#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long long N, M; cin >> N >> M;

    long long factor = __gcd(N, M);
    long long next_factor = factor + 1;

    long long base_N = N / factor;
    long long base_M = M / factor;
    
    long long current_area = N * M;
    long long next_area = base_M * next_factor * base_N * next_factor;
    
    cout << next_area - current_area;

    return 0;
}