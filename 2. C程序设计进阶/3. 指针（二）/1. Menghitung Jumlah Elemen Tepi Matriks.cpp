// Hitung jumlah elemen di baris pertama, baris terakhir, kolom pertama, dan kolom terakhir dalam matriks, dengan hati-hati agar elemen sudut tidak dihitung dua kali.

#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    while (k--) {
        int m, n;
        cin >> m >> n;
        int matrix[100][100];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }
        int sum = 0;
        if (m == 1 && n == 1) {
            sum = matrix[0][0];
        } else {
            // Baris pertama dan terakhir
            for (int j = 0; j < n; j++) {
                sum += matrix[0][j];
                if (m > 1) sum += matrix[m-1][j];
            }
            // Kolom pertama dan terakhir, kurangi sudut yang sudah dihitung
            for (int i = 1; i < m - 1; i++) {
                sum += matrix[i][0] + matrix[i][n-1];
            }
        }
        cout << sum << endl;
    }
    return 0;
}