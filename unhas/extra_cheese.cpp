#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long long N; cin >> N;

    int count = 0;
    int i = 19;
    while (i <= N){
        count++;
        i += 10;
    }
    cout << count;
    return 0;
}