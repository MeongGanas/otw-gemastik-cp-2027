#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A = {4, 3, 2, 1};

    // C++ gunakna konsep half open interval [begin, end)
    // [1, 3] -> 1, 2, 3
    // (1, 3) -> 2
    // [1, 3) -> 1, 2
    // (1, 5] -> 2, 3, 4, 5

    // sort(A.begin(), A.end()); // [1, 2, 3, 4]
    sort(A.begin(), A.end() - 1); // [2, 3, 4, 1]

    return 0;
}