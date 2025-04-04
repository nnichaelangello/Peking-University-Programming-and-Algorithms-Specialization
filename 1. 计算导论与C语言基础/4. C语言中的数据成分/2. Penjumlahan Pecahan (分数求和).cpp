// Kita perlu menjumlahkan n pecahan (numerator/denominator), lalu menyederhanakan hasilnya dengan mencari FPB (Faktor Persekutuan Terbesar).

#include <iostream>
using namespace std;

// Fungsi untuk mencari FPB
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    int sumn = 0, sumd = 1; // Hasil: sumn/sumd
    while (n--) {
        int num, deno;
        char slash; // Untuk membaca tanda "/"
        cin >> num >> slash >> deno;

        // Tambahkan pecahan: (sumn/sumd) + (num/deno)
        sumn = sumn * deno + num * sumd; // Pembilang baru
        sumd = sumd * deno; // Penyebut baru

        // Sederhanakan setiap langkah untuk menghindari overflow
        int divisor = gcd(sumn, sumd);
        sumn /= divisor;
        sumd /= divisor;
    }
    // Cetak hasil
    if (sumd == 1) {
        cout << sumn << endl; // Jika penyebut 1, cetak pembilang saja
    } else {
        cout << sumn << "/" << sumd << endl; // Cetak dalam bentuk pecahan
    }
    return 0;
}