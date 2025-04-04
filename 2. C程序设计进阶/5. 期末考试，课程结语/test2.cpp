#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main () {
	int count1[26] = { 0 };
	char a[1000];

	cin.getline(a, 1000);

	for (int i = 0; i < strlen(a); i++) {
		if (a[i] >= 65 && a[i] <= 90) {	// uppercase
			count1[a[i] - 65] ++;
		} else if (a[i] >= 97 && a[i] <= 122) { // lowercase to upper
			count1[a[i] -97] ++;
			a[i] -= 32;
		}
	}

	int firstMax = 0, secondMax = 0;

	for (int i = 0; i < 26; ++i) {	// handle max
		if (count1[firstMax] <= count1[i]) {
			firstMax = i;
		}
	}

	// use 'for' to set max equal 0, in case max more than 1
	for (int i = 0; i < 26; ++i) {
		if (count1[i] == count1[firstMax]) {
			count1[i] = 0;
		}
	}


	for (int i = 0; i < 26; ++i) {
		if (count1[secondMax] <= count1[i]) {
			secondMax = i;
		}
	}

	int num = count1[secondMax];

	for (int i = 0; i < 26; i++) {
		if (count1[secondMax] == count1[i]) {
			count1[i] = 500;
		}
	}


	for (int i = 0; i < strlen(a); i++) {
		if (count1[a[i] - 65] == 500) {
			cout << char(a[i]) << "+" << char(a[i] + 32) << ":" << num;
			return 0;
		}
	}
	return 0;
}