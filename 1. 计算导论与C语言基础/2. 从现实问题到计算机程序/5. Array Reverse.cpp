// Diberikan array dengan n elemen (1 < n < 100), balikkan urutan elemennya dan cetak dengan spasi antar elemen.

#include <iostream>
using namespace std;

int a[100];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i];
        if (i > 0) cout << " ";
    }
    cout << endl;
    return 0;
}