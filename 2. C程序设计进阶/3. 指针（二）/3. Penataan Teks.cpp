/*
=========================================
描述

给一段英文短文，单词之间以空格分隔（每个单词包括其前后紧邻的标点符号）。请将短文重新排版，要求如下：

每行不超过80个字符；每个单词居于同一行上；在同一行的单词之间以一个空格分隔；行首和行尾都没有空格。

输入

第一行是一个整数n，表示英文短文中单词的数目. 其后是n个以空格分隔的英文单词（单词包括其前后紧邻的标点符号，且每个单词长度都不大于40个字母）。

输出

排版后的多行文本，每行文本字符数最多80个字符，单词之间以一个空格分隔，每行文本首尾都没有空格。

=========================================
*/
#include<iostream>
#include<cstring> 
using namespace std;

int main(){
	char words[1000][40];
	char wordlen[1000];
	int n = 0;
	cin >> n;
	
	cin.get();//获取换行符
	
	for(int i = 0; i < n; i++){
		char temp;
		
		for(int j = 0; j < 40; j++){
			cin.get(temp);
		
			if(temp !=' ' && temp !='\n'){
				words[i][j] = temp;
			}else{
				wordlen[i] = j;
				break;
			}
		}
		
	}
	
	int length = wordlen[0];
	for(int j = 0; j < wordlen[0]; j++){
		cout << words[0][j];
	} 
	
	for(int i = 1; i < n; i++){
		if(length + 1 + wordlen[i] <= 80 ){
			length = length + 1 + wordlen[i]; 
			cout << ' ';
			for(int k = 0; k < wordlen[i]; k++){
				cout << words[i][k];
			}
		}else{
			cout << endl;
			length = wordlen[i];
			for(int k = 0; k < wordlen[i]; k++){
				cout << words[i][k];
			}
		}
	}
	return 0;
}