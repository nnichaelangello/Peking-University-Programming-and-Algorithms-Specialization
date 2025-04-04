// Diberikan 6 bilangan, dengan bilangan pertama sebagai a. Hitung jumlah bilangan dari 5 bilangan berikutnya yang lebih kecil dari a.

#include <iostream>
using namespace std;

int main() {
    int a, numbers[5];
    cin >> a;
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        if (numbers[i] < a) {
            sum += numbers[i];
        }
    }
    cout << sum << endl;
    return 0;
}