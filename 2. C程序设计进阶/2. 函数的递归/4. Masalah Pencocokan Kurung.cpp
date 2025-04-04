// Cari kurung yang tidak cocok dalam string, tandai dengan "$" untuk kurung kiri dan "?" untuk kurung kanan.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101];
    while (cin.getline(s, 101)) {
        cout << s << endl;
        int n = strlen(s);
        char mark[101];
        for (int i = 0; i < n; i++) mark[i] = ' ';
        mark[n] = '\0';
        int stack[101], top = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                stack[++top] = i;
            } else if (s[i] == ')') {
                if (top >= 0) {
                    top--;
                } else {
                    mark[i] = '?';
                }
            }
        }
        while (top >= 0) {
            mark[stack[top--]] = '$';
        }
        cout << mark << endl;
    }
    return 0;
}