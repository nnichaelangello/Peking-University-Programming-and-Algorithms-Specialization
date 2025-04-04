//Hitung jarak Euclidean terbesar antara dua titik dari n titik dalam koordinat (x, y).

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    double x[100], y[100];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    double max_dist = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double dx = x[i] - x[j];
            double dy = y[i] - y[j];
            double dist = sqrt(dx * dx + dy * dy);
            if (dist > max_dist) max_dist = dist;
        }
    }
    cout << fixed << setprecision(4) << max_dist << endl;
    return 0;
}