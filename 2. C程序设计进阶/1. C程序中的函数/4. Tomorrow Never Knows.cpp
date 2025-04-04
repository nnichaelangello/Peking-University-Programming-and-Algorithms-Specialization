// Hitung tanggal berikutnya dari input yyyy-mm-dd, perhatikan aturan kabisat.

#include <iostream>
#include <iomanip>
using namespace std;

bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year, month, day;
    char dash;
    cin >> year >> dash >> month >> dash >> day;
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeap(year)) daysInMonth[2] = 29;
    day++;
    if (day > daysInMonth[month]) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
    cout << setfill('0');
    cout << year << "-" << setw(2) << month << "-" << setw(2) << day << endl;
    return 0;
}