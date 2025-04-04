// Cari elemen dalam array yang sama dengan indeksnya (x[i] == i), cetak elemen pertama yang memenuhi atau "N" jika tidak ada.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[100];
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        if (x[i] == i) {
            cout << i << endl;
            return 0;
        }
    }
    cout << "N" << endl;
    return 0;
}