#include<iostream>
using namespace std;

int main() {
	int a,c,e;
	char b,d;

	cin >> a >> b >> c >> d >> e;
	if (a + c == e) {
		cout << "+" << endl;
	} else if (a - c == e) {
		cout << "-" << endl;
	} else if (a * c == e) {
		cout << "*" << endl;
	} else if (c != 0 && a / c == e) {
		cout << "/" << endl;
	} else if (c != 0 && a % c == e) {
		cout << "%" << endl;
	} else {
		cout << "error" << endl;
	}
	return 0;
}