// Bandingkan dua string tanpa memperhatikan huruf besar/kecil, lalu cetak "<", ">", atau "=".

#include <iostream>
using namespace std;

int main() {
    char s1[80], s2[80];
    cin.getline(s1, 80);
    cin.getline(s2, 80);
    int i = 0;
    char result;
    while (s1[i] != '\0' && s2[i] != '\0') {
        char c1 = (s1[i] >= 'A' && s1[i] <= 'Z') ? s1[i] + 32 : s1[i];
        char c2 = (s2[i] >= 'A' && s2[i] <= 'Z') ? s2[i] + 32 : s2[i];
        if (c1 != c2) {
            result = (c1 > c2) ? '>' : '<';
            cout << result << endl;
            return 0;
        }
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0') result = '=';
    else result = (s1[i] == '\0') ? '<' : '>';
    cout << result << endl;
    return 0;
}