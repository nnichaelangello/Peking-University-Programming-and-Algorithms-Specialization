//Hitung total uang per orang (ID 1-3) dan per kategori (A, B, C) dari data faktur.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double person[4] = {0}, category[3] = {0}; // Indeks 0 tidak digunakan untuk person
    for (int i = 0; i < 3; i++) {
        int id, num;
        cin >> id >> num;
        for (int j = 0; j < num; j++) {
            char cat;
            double amount;
            cin >> cat >> amount;
            person[id] += amount;
            category[cat - 'A'] += amount;
        }
    }
    cout << fixed << setprecision(2);
    for (int i = 1; i <= 3; i++) {
        cout << i << " " << person[i] << endl;
    }
    for (int i = 0; i < 3; i++) {
        cout << (char)('A' + i) << " " << category[i] << endl;
    }
    return 0;
}