// 注意： 总时间限制: 1000ms 内存限制: 65536kB


// 下面程序的输出结果是：

// A::Fun

// C::Do

// 请填空：

// 1234567891011121314151617181920212223242526272829303132
// #include <iostream>
// using namespace std;
// class A {
//     private:
//         int nVal;
//     public:
//         void Fun()
//         { cout << "A::Fun" << endl; }
//         void Do()
//         { cout << "A::Do" << endl; }
// };
// class B:public A {
//     public:
//         virtual void Do()
//         { cout << "B::Do" << endl; }
// };
// class C:public B {
//     public:
//     void Do( )
//     { cout << "C::Do" <<endl; }
//     void Fun()
//     { cout << "C::Fun" << endl; }
// };
// void Call(
// // 在此处补充你的代码
//         ) {
//     p.Fun(); p.Do();
// }
// int main() {
//     C c; Call(c);
//     return 0;
// }

// 输入
// 无

// 输出
// A::Fun

// C::Do

// 样例输入
// 1
// 无

// 样例输出
// 2
// A::Fun
// C::Do

B& p