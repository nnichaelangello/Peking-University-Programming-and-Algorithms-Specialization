// Diberikan jumlah uang, hitung jumlah lembar uang kertas (100, 50, 20, 10, 5, 1) yang diperlukan, prioritaskan denominasi besar.

#include <iostream>
using namespace std;

int main() {
    int amount;
    cin >> amount;
    cout << amount / 100 << endl; // 100 yuan
    amount %= 100;
    cout << amount / 50 << endl; // 50 yuan
    amount %= 50;
    cout << amount / 20 << endl; // 20 yuan
    amount %= 20;
    cout << amount / 10 << endl; // 10 yuan
    amount %= 10;
    cout << amount / 5 << endl; // 5 yuan
    amount %= 5;
    cout << amount << endl; // 1 yuan
    return 0;
}