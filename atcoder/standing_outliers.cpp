#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d; cin >> n >> d;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    int k = 0;
    vector<int> res;
    for (int i = 0; i < n; i++){
        bool ok = true;
        for (int j = 0; j < n; j++){
            // cout << numbers[i] << '-' << numbers[j] << ' ' << abs(numbers[i] - numbers[j]) << endl;
            if (i != j){
                if (abs(numbers[j] - numbers[i]) < d){
                    ok = false;
                    break;
                }
            }
        }
        if (ok){
            // cout << i+1 << endl;
            res.push_back(i + 1);
            k++;
        }
    }

    cout << k << endl;
    for (int i = 0; i < k; i++){
        cout << res[i] << ' ';
    }

    return 0;
}