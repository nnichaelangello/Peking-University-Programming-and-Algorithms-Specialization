// Diberikan skor (0-100), tentukan grade berdasarkan rentang tertentu (1 untuk 95-100, 2 untuk 90-94, dst.).

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 95 && n <= 100) cout << 1 << endl;
    else if (n >= 90) cout << 2 << endl;
    else if (n >= 85) cout << 3 << endl;
    else if (n >= 80) cout << 4 << endl;
    else if (n >= 70) cout << 5 << endl;
    else if (n >= 60) cout << 6 << endl;
    else cout << 7 << endl;
    return 0;
}