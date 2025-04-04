// Tanpa mengurutkan array, temukan bilangan terbesar ke-k dari n bilangan. Ini bisa dilakukan dengan algoritma seleksi (mirip QuickSelect), tapi untuk kesederhanaan dan batasan waktu, kita bisa gunakan pendekatan berulang untuk menemukan elemen ke-k.

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[max_idx]) max_idx = j;
        }
        // Tukar elemen maksimum ke posisi i
        int temp = a[i];
        a[i] = a[max_idx];
        a[max_idx] = temp;
    }
    cout << a[k - 1] << endl; // Elemen ke-k
    return 0;
}