#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
char c[110]={0};
char female;
char male;
int bg(int n){
	//找到匹配 
	if(c[n] == female){
		return n;
	}
		
	//到达最后 
	if(c[n] == 0){
		return n;
	}
		
	int r = n+1; 
	//从下一个开始遍历
	while(c[r] != 0 && c[r] != female){
		//完成平行的递归的循环，以及注意之前r=n+1，原因在于我们每次递归完成时返回的是所匹配的右括号的下一个位置。
		r = bg(r); 
	} 
	if(c[r] == female){
		cout << n << " " << r << endl;
		return r+1;
	}else{
		return r;
	}
		
}

int main(){
	cin >> c;
	//区分性别 
	male = c[0];
	int n = strlen(c);
	for(int i = 0; i < n; i++){
		if( c[i] != male ){
			female = c[i];
			break;
		}
	}
	bg(0);//进入递归函数 
	
	return 0;
}