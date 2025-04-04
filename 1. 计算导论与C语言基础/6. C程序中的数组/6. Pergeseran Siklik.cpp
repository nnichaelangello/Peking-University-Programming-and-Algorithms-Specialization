#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    m = m % n; // Normalisasi m
    reverse(arr, 0, n - 1); // Balik seluruh array
    reverse(arr, 0, m - 1); // Balik m elemen pertama
    reverse(arr, m, n - 1); // Balik sisa elemen
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;
    return 0;
}