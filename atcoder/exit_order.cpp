#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;

    int current_group = 1;
    int people_per_group = 10;
    for (int i = 1; i <= N; i++){
        int p; cin >> p;

        int low = ((current_group - 1) * people_per_group) + 1;
        int high = current_group * people_per_group;
        if (p > high || p < low){
            cout << "No";
            return 0;
        }

        if (i % people_per_group == 0) current_group++;
    }

    cout << "Yes";
    return 0;
}