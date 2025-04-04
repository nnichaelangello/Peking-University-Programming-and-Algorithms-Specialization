// Tentukan apakah tahun a adalah tahun kabisat: bisa dibagi 4, tapi bukan 100 kecuali juga dibagi 400, dan bukan dibagi 3200.

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0 && a % 3200 != 0)) {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }
    return 0;
}