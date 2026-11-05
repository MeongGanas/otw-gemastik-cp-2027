#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    int full_plus = a + b + c;
    int max_with_paran = max((a+b) * c, a * (b+c));
    int max_plus_and_paran = max(full_plus, max_with_paran);
    cout << max(max_plus_and_paran, a * b * c);

    return 0;
}