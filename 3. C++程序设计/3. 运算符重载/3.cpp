// 注意： 总时间限制: 1000ms 内存限制: 65536kB

// 描述
// 写一个二维数组类 Array2,使得下面程序的输出结果是：

// 0,1,2,3,

// 4,5,6,7,

// 8,9,10,11,

// next

// 0,1,2,3,

// 4,5,6,7,

// 8,9,10,11,

// 程序：

// #include <iostream>
// #include <cstring>
// using namespace std;
// // 在此处补充你的代码
// int main() {
//     Array2 a(3,4);
//     int i,j;
//     for( i = 0;i < 3; ++i )
//         for( j = 0; j < 4; j ++ )
//             a[i][j] = i * 4 + j;
//     for( i = 0;i < 3; ++i ) {
//         for( j = 0; j < 4; j ++ ) {
//             cout << a(i,j) << ",";
//         }
//         cout << endl;
//     }
//     cout << "next" << endl;
//     Array2 b; b = a;
//     for( i = 0;i < 3; ++i ) {
//         for( j = 0; j < 4; j ++ ) {
//             cout << b[i][j] << ",";
//         }
//         cout << endl;
//     }
//     return 0;
// }

class Array2 {
    private:
        int** data;
        int row, col;
    public:
        Array2(int r = 0, int c = 0) : row(r), col(c) {
            if (r > 0 && c > 0) {
                data = new int*[r];
                for (int i = 0; i < r; ++i)
                    data[i] = new int[c];
            }
        }
        ~Array2() {
            if (data) {
                for (int i = 0; i < row; ++i)
                    delete[] data[i];
                delete[] data;
            }
        }
        int* operator[](int i) {
            return data[i];
        }
        int& operator()(int i, int j) {
            return data[i][j];
        }
    };