// Cari nilai maksimum dari n skor siswa.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max_score = 0;
    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;
        if (score > max_score) max_score = score;
    }
    cout << max_score << endl;
    return 0;
}