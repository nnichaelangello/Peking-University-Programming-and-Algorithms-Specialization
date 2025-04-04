// Balik setiap kata dalam kalimat sambil mempertahankan spasi antar kata.

#include <iostream>
#include <cstring>
using namespace std;

void reverse(char* start, char* end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char s[501];
    cin.getline(s, 501);
    int start = 0;
    for (int i = 0; i <= strlen(s); i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            reverse(s + start, s + i - 1);
            start = i + 1;
        }
    }
    cout << s << endl;
    return 0;
}