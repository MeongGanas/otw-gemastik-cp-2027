#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long long n, m, a; cin >> n >> m >> a;

    long long fill_n = n / a;
    long long fill_m = m / a;

    if(n % a != 0) fill_n++;
    if(m % a != 0) fill_m++;

    cout << fill_m * fill_n;

    return 0;
}