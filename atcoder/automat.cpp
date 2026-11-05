#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long long n, m, k, x, y; cin >> n >> m >> k >> x >> y;

    vector<long long> desserts(n);
    for(int i = 0; i < n; i++){
        cin >> desserts[i];
    }
    sort(desserts.begin(), desserts.end());

    vector<long long> drinks(m);
    for(int d = 0; d < m; d++){
        cin >> drinks[d];
    }
    sort(drinks.begin(), drinks.end());

    vector<long long> pref_dessert(n);
    pref_dessert[0] = desserts[0];
    for(int d = 1; d < n; d++){
        pref_dessert[d] = desserts[d] + pref_dessert[d-1];
    }

    vector<long long> pref_drinks(m);
    pref_drinks[0] = drinks[0];
    for(int d = 1; d < m; d++){
        pref_drinks[d] = drinks[d] + pref_drinks[d-1];
    }

    long long total_k_dollar_value = k * y;
    int idx_up_drinks = upper_bound(pref_drinks.begin(), pref_drinks.end(), total_k_dollar_value) - pref_drinks.begin();
    x += 10 - pref_drinks[idx_up_drinks - 1] % 10;
    cout << idx_up_drinks << endl;

    int idx_up_dessert = upper_bound(pref_dessert.begin(), pref_dessert.end(), x) - pref_dessert.begin();
    cout << idx_up_dessert << endl;
    
    return 0;
}