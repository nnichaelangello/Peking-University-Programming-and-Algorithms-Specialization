// 晶晶 harus menentukan apakah dia bisa pergi ke pameran berdasarkan hari yang diajukan oleh Bebe. Hari 1, 3, dan 5 (Senin, Rabu, Jumat) adalah hari sibuk, jadi dia tidak bisa pergi pada hari itu. Kita hanya perlu memeriksa input hari dan memberikan output "YES" atau "NO".

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if (a == 1 || a == 3 || a == 5) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}