// Cari median dari n bilangan (bilangan tengah jika ganjil, rata-rata dua tengah jika genap, dibulatkan ke bawah).

#include <iostream>
using namespace std;

void findKth(int arr[], int n, int k) {
    for (int i = 0; i < k; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx]) max_idx = j;
        }
        int temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        int arr[15000];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (n % 2 == 1) { // Ganjil
            findKth(arr, n, n / 2 + 1);
            cout << arr[n / 2] << endl;
        } else { // Genap
            findKth(arr, n, n / 2 + 1);
            int a = arr[n / 2 - 1], b = arr[n / 2];
            cout << (a + b) / 2 << endl;
        }
    }
    return 0;
}