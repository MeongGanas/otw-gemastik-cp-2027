#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    int size = n * 3;

    vector<int> items;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            int x; cin >> x;
            items.push_back(x);
        }
    }

    for (int i = 0; i < 3; i++){
        int j = i;
        int temp_count = 0;

        while (j < size){
            temp_count += items[j];
            j += 3;
        }

        if(temp_count != 0){
            cout << "NO\n";
            return 0;
        }
    }
    
    cout << "YES\n";
    return 0;
}