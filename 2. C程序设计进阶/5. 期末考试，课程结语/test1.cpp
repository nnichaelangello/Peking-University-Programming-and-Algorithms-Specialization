#include<iostream>
using namespace std;

int main() {
  int m = 0, k = 0, count = 0;
  bool right1 = false, right2 = false;
  cin >> m >> k;
  if (m % 19 == 0) {
    right1 = true;
  }
  while (m > 0) {
    if (m % 10 == 3 ) {
      count ++;
    }
    m = m / 10;
  }
  if (count == k) {
    right2 = true;
  }
  if (right1 && right2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}