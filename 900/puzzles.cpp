#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;

    vector<int> puzzles(m);
    for (int i = 0; i < m; i++){
        cin >> puzzles[i];
    }

    sort(puzzles.begin(), puzzles.end());

    int j = 0;
    int minimum_diff = puzzles[m-1] - puzzles[0];
    while (j < m-n+1){
        int diff = puzzles[j+n-1] - puzzles[j];
        minimum_diff = min(minimum_diff, diff);
        j++;
    }

    cout << minimum_diff;

    return 0;
}