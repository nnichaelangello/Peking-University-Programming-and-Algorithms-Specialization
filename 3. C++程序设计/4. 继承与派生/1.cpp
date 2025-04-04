// 注意： 总时间限制: 1000ms 内存限制: 65536kB

// 描述
// 写一个MyString 类，使得下面程序的输出结果是：

// 1. abcd-efgh-abcd-

// 2. abcd-

// 3.

// 4. abcd-efgh-

// 5. efgh-

// 6. c

// 7. abcd-

// 8. ijAl-

// 9. ijAl-mnop

// 10. qrst-abcd-

// 11. abcd-qrst-abcd- uvw xyz

// about

// big

// me

// take

// abcd

// qrst-abcd-

// 要求：MyString类必须是从C++的标准类string类派生而来。提示1：如果将程序中所有 "MyString" 用"string" 替换，那么题目的程序中除了最后两条语句编译无法通过外，其他语句都没有问题，而且输出和前面给的结果吻合。也就是说，MyString类对 string类的功能扩充只体现在最后两条语句上面。提示2: string类有一个成员函数 string substr(int start,int length); 能够求从 start位置开始，长度为length的子串

// 程序：

// 3637383940413533343132282930272526232421222019181716151411121310897564321
// #include <iostream>
// #include <cstring>
// #include <cstdlib>
// using namespace std;
// // 在此处补充你的代码
// int CompareString( const void * e1, const void * e2) {
//     MyString * s1 = (MyString * ) e1;
//     MyString * s2 = (MyString * ) e2;
//     if( *s1 < *s2 ) return -1;
//     else if( *s1 == *s2 ) return 0;
// …}
// 输入
// 无

// 输出
// 1. abcd-efgh-abcd-

// 2. abcd-

// 3.

// 4. abcd-efgh-

// 5. efgh-

// 6. c

// 7. abcd-

// 8. ijAl-

// 9. ijAl-mnop

// 10. qrst-abcd-

// 11. abcd-qrst-abcd- uvw xyz

// about

// big

// me

// take

// abcd

// qrst-abcd-

// 样例输入
// 1
// 无
// 样例输出
// 1234567891011121314151617
// 1. abcd-efgh-abcd-
// 2. abcd-
// 3.
// 4. abcd-efgh-
// 5. efgh-
// 6. c
// 7. abcd-
// 8. ijAl-
// 9. ijAl-mnop
// 10. qrst-abcd-

class MyString : public string {
    public:
        MyString() : string() {}
        MyString(const char* s) : string(s) {}
        MyString(const string& s) : string(s) {}
        
        MyString operator()(int start, int length) {
            return this->substr(start, length);
        }
    };