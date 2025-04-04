#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main(){
	int sign[50];
	float ill[50];
	int m = 0;
	float level = 0.0; //���ǲ������س̶�
	cin >> m >> level;
	for(int i = 0; i < m; i++){
		cin >> sign[i] >> ill[i];
	}
	bool be = false; //��ʶ�Ƿ��в�������֢����
	for(int i = 0; i < m; i++){
		if(ill[i] > level){
			be = true;
			for(int j = i+1; j < m; j++){
				if(ill[j] >= level && ill[j] > ill[i]){
					float temp;
					temp = ill[j];
					ill[j] = ill[i];
					ill[i] = temp;
					int signTemp;
					signTemp = sign[i];
					sign[i] = sign[j];
					sign[j] = signTemp;
				}
			}
		}
	}
	if(be == false){
		cout << "None." << endl;
		return 0;
	}else{
		for(int i = 0; i < m; i++){
			if(ill[i] >= level){
				printf("%03d", sign[i]); //��Ҫ����cstdio
				cout << " " << setiosflags(ios::fixed) <<setprecision(1) << ill[i] << endl;
				//ȷ��С��λ����Ҫ����iomanip
			}
		}
	}
	return 0;
}