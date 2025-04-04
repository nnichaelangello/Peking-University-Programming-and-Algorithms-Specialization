// 编程题＃1
// 来源: POJ
//  (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

// 注意： 总时间限制: 1000ms 内存限制: 65536kB

// 描述
// 实现一个三维数组模版CArray3D，可以用来生成元素为任意类型变量的三维数组，使得下面程序输出结果是：

// 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,

// 注意，只能写一个类模版，不能写多个。

// #include <iostream>
// using namespace std;
// // 在此处补充你的代码
// int main()
// {
//     CArray3D<int> a(3,4,5);
//     int No = 0;
//     for( int i = 0; i < 3; ++ i )
//         for( int j = 0; j < 4; ++j )
//             for( int k = 0; k < 5; ++k )
//                 a[i][j][k] = No ++;
//     for( int i = 0; i < 3; ++ i )
//         for( int j = 0; j < 4; ++j )
//             for( int k = 0; k < 5; ++k )
//                 cout << a[i][j][k] << ",";
// return 0;
// }


template <class T>
class CArray3D {
public:
    template <class T1>
    class CArray2D {
    public:
        template <class T2>
        class CArray1D {
        public:
            T2* data;
            CArray1D(): data(NULL) {}
            void init(int k) { data = new T2[k]; }
            T2& operator[](int index) { return data[index]; }
            ~CArray1D() { if(data) delete [] data; }
        };
        
        CArray1D<T1>* array1D;
        CArray2D(): array1D(NULL) {}
        void init(int j, int k) {
            array1D = new CArray1D<T1>[j];
            for(int m = 0; m < j; ++m)
                array1D[m].init(k);
        }
        CArray1D<T1>& operator[](int index) { return array1D[index]; }
        ~CArray2D() { if(array1D) delete [] array1D; }
    };
    
    CArray2D<T>* array2D;
    CArray3D(int i, int j, int k) {
        array2D = new CArray2D<T>[i];
        for(int m = 0; m < i; ++m)
            array2D[m].init(j, k);
    }
    CArray2D<T>& operator[](int index) { return array2D[index]; }
    ~CArray3D() { if(array2D) delete [] array2D; }
};