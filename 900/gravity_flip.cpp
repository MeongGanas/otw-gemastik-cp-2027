#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    vector<int> boxes(n);

    for (int i = 0; i < n; i++){
        cin >> boxes[i];
    }

    sort(boxes.begin(), boxes.end());

    for (int &b: boxes){
        cout << b << " ";
    }

    return 0;
}