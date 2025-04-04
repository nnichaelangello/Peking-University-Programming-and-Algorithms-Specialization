#include <iostream>
using namespace std;

int main() {
    int n;
    int id[100];
    double rate[100];

    cin >> n;
    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> id[i] >> start >> end;
        rate[i] = (double)end / start;
    }

    // Urutkan berdasarkan rate
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (rate[j] > rate[j + 1]) {
                double temp_rate = rate[j];
                rate[j] = rate[j + 1];
                rate[j + 1] = temp_rate;
                int temp_id = id[j];
                id[j] = id[j + 1];
                id[j + 1] = temp_id;
            }
        }
    }

    // Cari gap terbesar
    int split = 0;
    double max_gap = 0;
    for (int i = 0; i < n - 1; i++) {
        double gap = rate[i + 1] - rate[i];
        if (gap > max_gap) {
            max_gap = gap;
            split = i + 1;
        }
    }

    // Kelompok A (laju tinggi): split sampai n-1
    cout << n - split << endl;
    for (int i = split; i < n; i++) {
        cout << id[i] << endl;
    }

    // Kelompok B (laju rendah): 0 sampai split-1
    cout << split << endl;
    for (int i = 0; i < split; i++) {
        cout << id[i] << endl;
    }

    return 0;
}