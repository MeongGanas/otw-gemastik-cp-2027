#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    vector<int> coins(n);
    int sum_of_coins = 0;

    int i = 0;
    while (i < n){
        cin >> coins[i];
        sum_of_coins += coins[i];
        i++;
    }

    sort(coins.begin(), coins.end());

    int total_coin_to_take = 0;
    int half = sum_of_coins / 2;
    int temp_sum = 0;
    
    for (int &c: coins){
        if (temp_sum > half){
            cout << total_coin_to_take << '\n';
            return 0;
        }
        temp_sum += c;
        total_coin_to_take += 1;
    }
    cout << total_coin_to_take << '\n';

    return 0;
}