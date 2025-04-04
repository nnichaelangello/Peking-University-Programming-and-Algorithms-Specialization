// Cari kata terpanjang dalam kalimat yang diakhiri titik, cetak kata pertama jika ada beberapa.

#include <iostream>
using namespace std;

int main() {
    char s[500];
    cin.getline(s, 500);
    int max_len = 0, start = 0, max_start = 0;
    for (int i = 0; s[i] != '.'; i++) {
        if (s[i] == ' ') {
            int len = i - start;
            if (len > max_len) {
                max_len = len;
                max_start = start;
            }
            start = i + 1;
        }
    }
    // Cek kata terakhir sebelum titik
    int len = strlen(s) - 1 - start;
    if (len > max_len) {
        max_len = len;
        max_start = start;
    }
    for (int i = max_start; i < max_start + max_len; i++) {
        cout << s[i];
    }
    cout << endl;
    return 0;
}