// Kita perlu menghitung persentase pasien dalam empat kelompok usia (≤18, 19-35, 36-60, >60) berdasarkan data usia pasien, lalu menampilkan hasil dalam format persentase dengan dua desimal.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ages[100];
    for (int i = 0; i < n; i++) {
        cin >> ages[i];
    }
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0; // Hitung per kelompok
    for (int i = 0; i < n; i++) {
        if (ages[i] <= 18) count1++;
        else if (ages[i] <= 35) count2++;
        else if (ages[i] <= 60) count3++;
        else count4++;
    }
    double total = n;
    cout << fixed << setprecision(2); // Format dua desimal
    cout << "1-18: " << (count1 / total) * 100 << "%" << endl;
    cout << "19-35: " << (count2 / total) * 100 << "%" << endl;
    cout << "36-60: " << (count3 / total) * 100 << "%" << endl;
    cout << "60-: " << (count4 / total) * 100 << "%" << endl;
    return 0;
}