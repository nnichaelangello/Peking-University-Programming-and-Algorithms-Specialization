// Cari apakah ada dua elemen dalam array n bilangan yang jumlahnya sama dengan k.

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool found = false;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k) {
                found = true;
                break;
            }
        }
        if (found) break;
    }
    if (found) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}