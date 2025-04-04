//Kita harus menghitung jumlah semua bilangan ganjil dari m sampai n (termasuk m dan n), dengan batasan 0 ≤ m ≤ n ≤ 300.

#include <iostream>
using namespace std;

int main() {
    int m, n, result = 0;
    cin >> m >> n;
    while (m <= n) {
        if (m % 2 == 1) { // Jika m ganjil
            result += m;
        }
        m++;
    }
    cout << result << endl;
    return 0;
}