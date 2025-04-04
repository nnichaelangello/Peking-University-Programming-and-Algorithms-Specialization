/*
#include <iostream>
using namespace std;
class CType {
    int value;
public:
    void setvalue(int n) { value = n; }
    CType operator++(int) {
        CType tmp = *this;
        value = value * value;
        return tmp;
    }
    friend ostream& operator<<(ostream& os, const CType& ct) {
        os << ct.value;
        return os;
    }
};
int main(int argc, char* argv[]) {
    CType obj;
    int n;
    cin>>n;
    while ( n ) {
        obj.setvalue(n);
        cout<<obj++<<" "<<obj<<endl;
        cin>>n;
    }
    return 0;
}
*/
class CType {
    int value;
public:
    void setvalue(int n) { value = n; }
    CType operator++(int) {
        CType tmp = *this;
        value = value * value;
        return tmp;
    }
    friend ostream& operator<<(ostream& os, const CType& ct) {
        os << ct.value;
        return os;
    }
};