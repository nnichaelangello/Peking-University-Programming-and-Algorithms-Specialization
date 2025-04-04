// Bandingkan waktu bersepeda (27 detik start, 23 detik stop, kecepatan 3 m/s) dan berjalan (1.2 m/s) untuk n jarak, lalu tentukan mana yang lebih cepat.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int distance;
        cin >> distance;
        double bike_time = 27 + 23 + distance / 3.0; // Total waktu bersepeda
        double walk_time = distance / 1.2; // Total waktu berjalan
        if (bike_time < walk_time) cout << "Bike" << endl;
        else if (walk_time < bike_time) cout << "Walk" << endl;
        else cout << "All" << endl;
    }
    return 0;
}