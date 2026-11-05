#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector<int> numbers(n);
        vector<int> cnt(101, 0);
        for(int i = 0; i < n; i++){
            cin >> numbers[i];
            cnt[numbers[i]]++;
        }

        vector<int> res;

        while(res.size() < n){
            int biggest_num = 0;
            for(int v = 100; v >= 1; v--){
                if(cnt[v] > 0){
                    biggest_num = v;
                    break;
                }
            }
            int count_biggest_num = cnt[biggest_num];

            for(int j = 0; j < count_biggest_num; j++){
                res.push_back(biggest_num);
            }
            cnt[biggest_num] = 0;

            for(int v = biggest_num - 1; v >= 1; v--){
                if(cnt[v] > 0){
                    int take = min(cnt[v], count_biggest_num);
                    for(int j = 0; j < take; j++){
                        res.push_back(v);
                    }
                    cnt[v] -= take; 
                }
            }
        }

        for(int &r: res){
            cout << r << ' ';
        }
        cout << "\n";
    }

    return 0;
}