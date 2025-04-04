//#include <iostream>
//#include <string>
//using namespace std;
// �ڴ˴�������Ĵ���
template <class T>
class CMyistream_iterator
{
public:
	T data;
	istream &mycin;
	CMyistream_iterator(istream &in) :mycin(in)
	{
		mycin >> data;
	}
	T operator*()
	{
		return data;
	}
	istream& operator++(int)
	{
		mycin >> data;
		return mycin;
	}


};
//
//
//int main()
//{
//	CMyistream_iterator<int> inputInt(cin);
//	int n1, n2, n3;
//	n1 = *inputInt; //���� n1
//	int tmp = *inputInt;
//	cout << tmp << endl;
//	inputInt++;
//	n2 = *inputInt; //���� n2
//	inputInt++;
//	n3 = *inputInt; //���� n3
//	cout << n1 << "," << n2 << "," << n3 << endl;
//	CMyistream_iterator<string> inputStr(cin);
//	string s1, s2;
//	s1 = *inputStr;
//	inputStr++;
//	s2 = *inputStr;
//	cout << s1 << "," << s2 << endl;
//
//	return 0;
//}