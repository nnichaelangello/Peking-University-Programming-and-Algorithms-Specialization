// Simulasikan penyebaran flu dalam matriks n x n selama m hari, hitung jumlah orang yang terinfeksi.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char grid[100][100];
    int infected[100][100] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == '@') infected[i][j] = 1;
        }
    }
    int m;
    cin >> m;
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    for (int day = 1; day < m; day++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (infected[i][j] == day && grid[i][j] != '#') {
                    for (int k = 0; k < 4; k++) {
                        int ni = i + dx[k], nj = j + dy[k];
                        if (ni >= 0 && ni < n && nj >= 0 && nj < n && grid[ni][nj] == '.' && infected[ni][nj] == 0) {
                            infected[ni][nj] = day + 1;
                        }
                    }
                }
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (infected[i][j] > 0) count++;
        }
    }
    cout << count << endl;
    return 0;
}