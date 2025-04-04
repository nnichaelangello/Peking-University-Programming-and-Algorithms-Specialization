// Pisahkan n kultur bakteri menjadi dua kelompok (A: proliferasi tinggi, B: rendah) berdasarkan laju proliferasi.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int id[100];
    double rate[100];
    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> id[i] >> start >> end;
        rate[i] = (double)end / start;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (rate[j] > rate[j + 1]) {
                swap(rate[j], rate[j + 1]);
                swap(id[j], id[j + 1]);
            }
        }
    }
    int split = 0;
    double max_gap = 0;
    for (int i = 0; i < n - 1; i++) {
        double gap = rate[i + 1] - rate[i];
        if (gap > max_gap) {
            max_gap = gap;
            split = i + 1;
        }
    }
    cout << n - split << endl;
    for (int i = split; i < n; i++) cout << id[i] << endl;
    cout << split << endl;
    for (int i = 0; i < split; i++) cout << id[i] << endl;
    return 0;
}