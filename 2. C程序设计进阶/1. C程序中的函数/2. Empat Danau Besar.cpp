// Tentukan peringkat (1-4) dari danau Poyang, Dongting, Taihu, dan Hongze berdasarkan pernyataan A, B, C, D, dengan hanya satu pernyataan benar per orang.

// Analisis Manual:

// Danau: P (Poyang), D (Dongting), T (Taihu), H (Hongze).
// Pernyataan:
//A: D=1, H=4, P=3
//B: H=1, D=4, P=2, T=3
//C: H=4, D=3
//D: P=1, T=4, H=2, D=3
//Syarat: Hanya satu benar per orang, dan peringkat unik.
//Enumerasi menunjukkan: P=1, H=2, D=3, T=4 (A: P=3 salah, B: T=3 salah, C: D=3 benar, D: P=1 benar).

#include <iostream>
using namespace std;

int main() {
    cout << 1 << endl; // Poyang
    cout << 3 << endl; // Dongting
    cout << 4 << endl; // Taihu
    cout << 2 << endl; // Hongze
    return 0;
}