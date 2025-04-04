// Gajah membutuhkan 20 liter (20,000 cm³) air. Kita hitung volume satu ember (silinder: π × r² × h) dan tentukan berapa ember minimum yang dibutuhkan.

#include <iostream>
using namespace std;

int main() {
    int h, r;
    cin >> h >> r;
    double pi = 3.14159;
    double volume = pi * r * r * h; // Volume dalam cm³
    int buckets = (20000 + volume - 1) / volume; // Pembulatan ke atas
    cout << buckets << endl;
    return 0;
}