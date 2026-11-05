#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> cnt(n + 1, 1);
    int min_v = 1;

    while (q--) {
        int x, y;
        cin >> x >> y;

        if (x < min_v) {
            cout << 0 << "\n";
            continue;
        }

        long long total_upgraded = 0;

        while (min_v <= x) {
            total_upgraded += cnt[min_v];
            min_v++;
        }

        cnt[y] += total_upgraded;

        cout << total_upgraded << "\n";
    }

    return 0;
}