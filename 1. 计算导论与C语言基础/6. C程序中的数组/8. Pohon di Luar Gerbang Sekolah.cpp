// Hitung pohon yang tersisa setelah menghapus pohon di M segmen dari jalan sepanjang L.

#include <iostream>
using namespace std;

int main() {
    int L, M;
    cin >> L >> M;
    bool trees[10001] = {true}; // Inisialisasi semua pohon ada
    for (int i = 0; i <= L; i++) trees[i] = true;
    for (int i = 0; i < M; i++) {
        int start, end;
        cin >> start >> end;
        for (int j = start; j <= end; j++) {
            trees[j] = false;
        }
    }
    int count = 0;
    for (int i = 0; i <= L; i++) {
        if (trees[i]) count++;
    }
    cout << count << endl;
    return 0;
}