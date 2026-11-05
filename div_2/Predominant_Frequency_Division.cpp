#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;

    while (t--){
        int n; cin >> n;

        int current_part = 1;
        
        int count_1 = 0;
        int count_2_and_3 = 0;

        int count_1_and_2 = 0;
        int count_3 = 0;
        while (n--){
            int An; cin >> An;

            if (current_part == 4) break;

            if (current_part == 1){
                if (An == 1) count_1 += 1;
                else count_2_and_3 += 1;

                if (count_1 >= count_2_and_3){
                    current_part += 1;
                }
            } else if (current_part == 2){
                if (An == 3) count_3 += 1;
                else count_1_and_2 += 1;

                if (count_3 <= count_1_and_2){
                    current_part += 1;
                }
            } else {
                current_part += 1;
            }
        }

        cout << current_part << '\n';
        if (current_part >= 3){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}