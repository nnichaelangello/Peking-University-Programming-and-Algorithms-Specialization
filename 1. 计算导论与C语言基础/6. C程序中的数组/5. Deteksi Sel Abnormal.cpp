// Hitung sel dalam matriks N x N yang nilainya lebih kecil 50 atau lebih dari keempat tetangganya.

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int grid[100][100];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }
    int count = 0;
    for (int i = 1; i < N - 1; i++) {
        for (int j = 1; j < N - 1; j++) {
            int val = grid[i][j];
            if (val + 50 <= grid[i-1][j] && val + 50 <= grid[i+1][j] &&
                val + 50 <= grid[i][j-1] && val + 50 <= grid[i][j+1]) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}