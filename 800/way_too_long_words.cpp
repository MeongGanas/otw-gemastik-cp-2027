#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    while (N > 0){
        string word;
        cin >> word;
        
        int size_of_word = word.size();
        if (size_of_word > 10){
            cout << word.front() << size_of_word - 2 << word.back() << '\n';
        } else {
            cout << word << '\n';
        }
        
        N -= 1;
    } 

    return 0;
}