#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    if (!(cin >> q)) return 0;

    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    vector<int> pref(n + 1, 0);
    for (int i = 0; i <= n - m; i++) {
        if (s.substr(i, m) == t) {
            pref[i + 1] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        pref[i] += pref[i - 1];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        if (r - l + 1 < m) {
            cout << "No\n";
            continue;
        }

        int max_start = r - m + 1;
        int count_match = pref[max_start] - pref[l - 1];

        if (count_match > 0) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}