// 编程题＃1
// 来源: POJ
//  (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

// 注意： 总时间限制: 1000ms 内存限制: 65536kB

// 描述
// 下面的程序输出结果是: 

// 1 2 6 7 8 9

// 请填空：

// 1234567891011
// #include <iostream> 
// #include <iterator> 
// #include <set> 
// using namespace std;
// int main() { 
//     int a[] = {8,7,8,9,6,2,1}; 
// // 在此处补充你的代码
//     ostream_iterator<int> o(cout," ");
//     copy( v.begin(),v.end(),o); 
//     return 0;

// 输入
// 无

// 输出
// 1 2 6 7 8 9

// 样例输入
// 1
// 无
// 样例输出
// 1
// 1 2 6 7 8 9


set<int> v(a, a + sizeof(a)/sizeof(int));