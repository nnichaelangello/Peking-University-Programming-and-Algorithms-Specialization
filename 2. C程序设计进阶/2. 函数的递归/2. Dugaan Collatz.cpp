// Simulasikan proses Collatz (jika ganjil: n*3+1, jika genap: n/2) dari bilangan input hingga 1, cetak setiap langkah.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "End" << endl;
    } else {
        while (n != 1) {
            if (n % 2 == 1) {
                cout << n << "*3+1=" << n * 3 + 1 << endl;
                n = n * 3 + 1;
            } else {
                cout << n << "/2=" << n / 2 << endl;
                n = n / 2;
            }
        }
        cout << "End" << endl;
    }
    return 0;
}