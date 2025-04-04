//Sisipkan string substr (panjang 3) setelah karakter dengan ASCII terbesar dalam str.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[11], substr[4];
    while (cin >> str >> substr) {
        int max_idx = 0;
        for (int i = 1; i < strlen(str); i++) {
            if (str[i] > str[max_idx]) max_idx = i;
        }
        for (int i = 0; i <= max_idx; i++) {
            cout << str[i];
        }
        cout << substr;
        for (int i = max_idx + 1; i < strlen(str); i++) {
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}