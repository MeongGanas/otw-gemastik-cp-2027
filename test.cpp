#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<int> coins(n);
    int total = 0;
    for(int i = 0; i < n; i++){
        cin >> coins[i];
        total += coins[i];
    }
    sort(coins.begin(), coins.end());
    reverse(coins.begin(), coins.end());

    int sum_of_coins = 0;
    int i = 0;

    while (sum_of_coins < total / 2 + 1){
        sum_of_coins += coins[i];
        i++;
    }

    cout << i << endl;
    return 0;
}