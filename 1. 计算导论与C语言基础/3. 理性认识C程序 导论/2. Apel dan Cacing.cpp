// Kita perlu menghitung berapa banyak apel utuh yang tersisa setelah cacing memakan apel selama y jam. Cacing memakan 1 apel setiap x jam, dan hanya memakan apel utuh satu per satu.

#include <iostream>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    int eaten = y / x; // Jumlah apel yang dimakan (pembagian bulat)
    int remaining = n - eaten; // Apel yang tersisa
    if (remaining < 0) remaining = 0; // Jika apel habis, set ke 0
    cout << remaining << endl;
    return 0;
}