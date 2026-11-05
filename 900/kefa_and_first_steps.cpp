#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    int maximum_length = 0;
    int curr_length = 0;
    int prev_a = 0;

    for (int i = 0; i < n; i++){
        int a; cin >> a;
        if (a < prev_a){
            maximum_length = max(curr_length, maximum_length);
            curr_length = 1;
        } else {
            curr_length++;
        }
        prev_a = a;
    }
    maximum_length = max(curr_length, maximum_length);

    cout << maximum_length;

    return 0;
}