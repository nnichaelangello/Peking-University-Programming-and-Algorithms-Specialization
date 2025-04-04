// Hitung tahun berapa gaji tahunan N (dalam puluhan ribu) cukup untuk membeli rumah (awalnya 200 juta, naik K% per tahun) dalam 20 tahun, dengan gaji diterima di awal tahun.

#include <iostream>
using namespace std;

int main() {
    int N, K;
    while (cin >> N >> K) {
        double price = 200; // Harga awal dalam juta
        int savings = N; // Tabungan awal
        int year = 1;
        while (year <= 20) {
            if (savings >= price) {
                cout << year << endl;
                break;
            }
            price *= (1 + K / 100.0); // Kenaikan harga
            savings += N; // Tambah gaji tahunan
            year++;
        }
        if (year > 20) cout << "Impossible" << endl;
    }
    return 0;
}