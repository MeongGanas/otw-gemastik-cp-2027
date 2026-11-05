#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N; cin >> N;
    int X = 0;

    while (N--){
        string operation; cin >> operation;
        if(operation[1] == '+') X++; 
        else X--;
    }
    cout << X;

    return 0;
}