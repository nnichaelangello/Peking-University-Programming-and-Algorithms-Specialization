// 编程题＃2： 实数的输出格式
// 来源: POJ
//  (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

// 注意： 总时间限制: 1000ms 内存限制: 1000kB

// 描述
// 利用流操纵算子实现： 输入一个实数，先以非科学计数法输出，小数点后面保留5位有效数字；再以科学计数法输出，小数点后面保留7位有效数字。

// 注意：在不同系统、编译器上的输出格式略有不同，但保证在程序中采用默认格式设置一定能在OJ平台上得到正确结果。

// 输入
// 以非科学计数法表示的一个正实数，保证可以用double类型存储。

// 输出
// 第一行：以非科学计数法输出该实数，小数点后面保留5位有效数字；

// 第二行：以科学计数法输出该实数，小数点后面保留7位有效数字。

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num;
    cin >> num;
    cout << fixed << setprecision(5) << num << endl;
    cout << scientific << setprecision(7) << num << endl;
    return 0;
}