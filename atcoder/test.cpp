#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Syarat mutlak: vector HARUS sudah terurut (sorted)
    vector<long long> v = {10, 20, 20, 20, 30, 50};

    long long target = 20;

    // lower_bound: elemen pertama yang >= target
    auto it_low = lower_bound(v.begin(), v.end(), target);

    // upper_bound: elemen pertama yang > target
    auto it_up = upper_bound(v.begin(), v.end(), target);

    // Kurangkan dengan v.begin() untuk mendapatkan indeks (0-indexed)
    int idx_low = it_low - v.begin(); // Menunjuk ke 20 pertama -> indeks 1
    int idx_up  = it_up - v.begin();  // Menunjuk ke 30 (karena 30 > 20) -> indeks 4

    cout << "Index lower_bound (>= 20): " << idx_low << "\n";
    cout << "Index upper_bound (> 20) : " << idx_up << "\n";

    // --- TRIK CP PALING PENTING ---
    // Mencari "Berapa banyak barang yang sanggup dibeli dengan budget X"
    // Misal v adalah prefix sum harga barang:
    long long budget = 25;
    
    // Elemen pertama yang harganya > budget ada di indeks berapa?
    // Nilai indeks tersebut sama persis dengan JUMLAH BARANG yang sanggup dibeli!
    int jumlah_barang = upper_bound(v.begin(), v.end(), budget) - v.begin();
    
    cout << "Jumlah barang dengan budget " << budget << ": " << jumlah_barang << "\n"; 
    // Output: 4 (karena budget 25 cukup untuk elemen indeks 0, 1, 2, dan 3)

    return 0;
}