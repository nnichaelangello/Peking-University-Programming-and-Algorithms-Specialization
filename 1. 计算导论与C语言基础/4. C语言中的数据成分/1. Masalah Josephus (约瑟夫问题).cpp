// Ini adalah masalah klasik Josephus: ada n monyet dalam lingkaran (nomor 1 sampai n), dan mereka menghitung dari 1 sampai m. Setiap monyet yang mencapai m keluar dari lingkaran, dan proses berlanjut hingga tersisa satu monyet, yang menjadi raja. Kita perlu menemukan nomor monyet terakhir yang tersisa untuk setiap pasangan n dan m.

#include <iostream>
using namespace std;

// Maksimum 300 monyet
int succedent[300]; // Penerus monyet
int precedent[300]; // Pendahulu monyet

int main() {
    int n, m;
    while (true) {
        cin >> n >> m;
        if (n == 0 && m == 0) break; // Keluar jika input 0 0

        // Inisialisasi lingkaran
        for (int i = 0; i < n; i++) {
            succedent[i] = (i + 1) % n; // Penerus (modulo untuk lingkaran)
            precedent[i] = (i - 1 + n) % n; // Pendahulu (tambah n untuk menghindari negatif)
        }

        int current = 0; // Mulai dari monyet 1 (indeks 0)
        int count = n; // Jumlah monyet yang tersisa
        while (count > 1) {
            // Hitung sampai m
            for (int i = 1; i < m; i++) {
                current = succedent[current];
            }
            // Hapus monyet saat ini
            int next = succedent[current];
            int prev = precedent[current];
            succedent[prev] = next;
            precedent[next] = prev;
            current = next; // Lanjut ke monyet berikutnya
            count--;
        }
        // Cetak monyet terakhir (indeks + 1 karena nomor dimulai dari 1)
        cout << current + 1 << endl;
    }
    return 0;
}