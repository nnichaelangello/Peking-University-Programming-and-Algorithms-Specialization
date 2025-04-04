#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	cin.get();
	for (int i = 0; i < n; i++) {
		char a[256];
		cin.getline(a,256);// ���������ж�ȡһ���ַ�
		char newA[256];
		for (int j = 0; j < 256; j++) {
			// ֻ��ͨ����ȡһ�еķ�ʽ���������룬����һ������һ�ߴ���
			if (a[j] == 'A') {
				newA[j] = 'T';
			} else if (a[j] == 'T') {
				newA[j] = 'A';
			} else if (a[j] == 'G') {
				newA[j] = 'C';
			} else if (a[j] == 'C') {
				newA[j] = 'G';
			} else {
				newA[j] = '\0';
				break;
			}
		}

		for (int j = 0; j < 256; j++){
			if (newA[j] != '\0') {
				cout << newA[j];
			} else {
				cout << endl;
				break;// ����������������ѭ��
			}
		}
	}
	return 0;
}