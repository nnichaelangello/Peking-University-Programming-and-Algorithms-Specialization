// Pisahkan digit ratusan, puluhan, dan satuan dari bilangan tiga digit, cetak masing-masing per baris.

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int hundreds = num / 100; // Ratusan
    int tens = (num / 10) % 10; // Puluhan
    int ones = num % 10; // Satuan
    cout << hundreds << endl;
    cout << tens << endl;
    cout << ones << endl;
    return 0;
}