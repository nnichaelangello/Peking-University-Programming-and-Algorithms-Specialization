// 编程题 #3
// 来源: POJ
//  (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

// 注意： 总时间限制: 1000ms 内存限制: 65536kB

// 描述
// 下面的程序输出结果是：

// A::Fun

// A::Do

// A::Fun

// C::Do

// 请填空：

// 18192021222324252627282930313233
// #include <iostream>
// using namespace std;
// class A {
//     private:
//         int nVal;
//     public:
//         void Fun()
//         { cout << "A::Fun" << endl; }
//         virtual void Do()
//         { cout << "A::Do" << endl; }
// };
// class B:public A {
//     public:
//         virtual void Do()
//         { cout << "B::Do" << endl; }
// };
// class C:public B {
//     public:
//         void Do( )
//         { cout << "C::Do" << endl; }
//         void Fun()
//         { cout << "C::Fun" << endl; }
// };
// void Call(
// // 在此处补充你的代码
//         ) {
//     p->Fun(); p->Do();
// }
// int main() {
//     Call( new A() );
//     Call( new C() );
//     return 0;
// }

// 输入
// 无

// 输出
// A::Fun

// A::Do

// A::Fun

// C::Do

// 样例输入
// 1
// 无
// 样例输出
// 234
// A::Fun
// A::Do
// A::Fun
// C::Do

A* p