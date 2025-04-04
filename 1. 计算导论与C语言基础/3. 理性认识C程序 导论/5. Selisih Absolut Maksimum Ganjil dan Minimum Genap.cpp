// Dari 6 bilangan, cari odd maksimum (a) dan even minimum (b), lalu hitung |a - b|.

#include <iostream>
using namespace std;

int main() {
    int numbers[6];
    for (int i = 0; i < 6; i++) {
        cin >> numbers[i];
    }
    int max_odd = -1; // Inisialisasi kecil untuk ganjil
    int min_even = 101; // Inisialisasi besar untuk genap
    for (int i = 0; i < 6; i++) {
        if (numbers[i] % 2 == 1) { // Ganjil
            if (numbers[i] > max_odd) max_odd = numbers[i];
        } else { // Genap
            if (numbers[i] < min_even) min_even = numbers[i];
        }
    }
    int diff = max_odd - min_even;
    if (diff < 0) diff = -diff; // Absolut
    cout << diff << endl;
    return 0;
}