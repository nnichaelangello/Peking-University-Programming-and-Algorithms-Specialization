// 编程题＃2
// 来源: POJ 
// (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

// 注意： 总时间限制: 1000ms 内存限制: 65536kB

// 描述
// 下面程序的输出结果是：

// destructor B

// destructor A

// 请完整写出 class A。 限制条件：不得为 class A 编写构造函数。

// 123456789101112131415
// #include <iostream>
// using namespace std;
// class A {
// // 在此处补充你的代码
// };
// class B:public A {
//     public:
//         ~B() { cout << "destructor B" << endl; }
// };
// int main() {

// 输入
// 无

// 输出
// destructor B

// destructor A

// 样例输入
// 1
// 无
// 样例输出
// 12
// destructor B
// destructor A

public:
    virtual ~A() { cout << "destructor A" << endl; }