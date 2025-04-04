// Lakukan traversal diagonal dari kiri atas (array[0][0]) ke kanan bawah dalam matriks row x col.

#include <iostream>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;
    int array[100][100];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> array[i][j];
        }
    }
    for (int sum = 0; sum <= row + col - 2; sum++) {
        for (int i = 0; i < row; i++) {
            int j = sum - i;
            if (j >= 0 && j < col) {
                cout << array[i][j] << endl;
            }
        }
    }
    return 0;
}