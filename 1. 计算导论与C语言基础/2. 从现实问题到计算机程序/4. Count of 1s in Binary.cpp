// Diberikan N bilangan bulat, konversi setiap bilangan ke biner dan hitung jumlah digit 1 di dalamnya.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, ans = 0;
        cin >> x;
        while (x > 0) {
            if (x % 2 == 1) ans++; // Jika bit terakhir adalah 1
            x /= 2; // Geser ke kanan (bagi 2)
        }
        cout << ans << endl;
    }
    return 0;
}