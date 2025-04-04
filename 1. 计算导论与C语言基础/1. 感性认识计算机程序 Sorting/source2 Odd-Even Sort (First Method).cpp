#include <iostream>
using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    // Langkah 1: Pisahkan ganjil ke kiri, genap ke kanan
    int l = 0, r = 9;
    while (l < r) {
        // Cari elemen genap dari kiri
        while (l < r && a[l] % 2 == 1) l++;
        // Cari elemen ganjil dari kanan
        while (l < r && a[r] % 2 == 0) r--;
        if (l < r) {
            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;
        }
    }
    // Tentukan batas antara ganjil dan genap
    int boundary = 0;
    for (int i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            boundary = i;
            break;
        }
    }
    // Jika semua ganjil atau semua genap, sesuaikan boundary
    if (boundary == 0) {
        boundary = (a[0] % 2 == 0) ? 0 : 10;
    }
    // Langkah 2: Urutkan bagian ganjil (0 sampai boundary-1)
    for (int i = 0; i < boundary - 1; i++) {
        for (int j = 0; j < boundary - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    // Langkah 3: Urutkan bagian genap (boundary sampai 9)
    for (int i = boundary; i < 9; i++) {
        for (int j = boundary; j < 9 - (i - boundary); j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    // Langkah 4: Cetak hasil dengan spasi, tanpa spasi di akhir
    for (int i = 0; i < 10; i++) {
        cout << a[i];
        if (i < 9) cout << " ";
    }
    cout << endl;
    return 0;
}