#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  
  string s; cin >> s;
  int last_index = s.size() - 1;
  
  string t = s;
  if (s[last_index] == 'e'){
    cout << t + 'r';
  } else {
    cout << t + "er";
  }
  
  return 0;
}