#include <iostream>
using namespace std;

int main() {
    // Enumerasi setiap kemungkinan mobil terbaik (1-4)
    for (int best = 1; best <= 4; best++) {
        bool a = (best == 2); // A benar jika 2 terbaik
        bool b = (best == 4); // B benar jika 4 terbaik
        bool c = (best != 3); // C benar jika 3 bukan terbaik
        bool d = !b;          // D benar jika B salah

        // Hitung jumlah pernyataan yang benar
        int correct = a + b + c + d;
        if (correct == 1) { // Harus tepat 1 benar
            if (a) {
                cout << best << endl << "A" << endl;
                return 0;
            } else if (b) {
                cout << best << endl << "B" << endl;
                return 0;
            } else if (c) {
                cout << best << endl << "C" << endl;
                return 0;
            } else if (d) {
                cout << best << endl << "D" << endl;
                return 0;
            }
        }
    }
    return 0;
}