// Tukar baris n dan m dalam matriks 5x5 jika valid, cetak matriks baru atau "error".

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int matrix[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }
    int n, m;
    cin >> n >> m;
    if (n < 0 || n >= 5 || m < 0 || m >= 5) {
        cout << "error" << endl;
    } else {
        for (int j = 0; j < 5; j++) {
            int temp = matrix[n][j];
            matrix[n][j] = matrix[m][j];
            matrix[m][j] = temp;
        }
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cout << setw(4) << matrix[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}