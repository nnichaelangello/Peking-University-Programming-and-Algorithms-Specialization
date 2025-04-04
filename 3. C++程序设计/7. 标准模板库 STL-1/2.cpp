// 编程题＃1 List
// 来源: POJ
//  (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

// 注意： 总时间限制: 4000ms 内存限制: 65536kB

// 描述
// 写一个程序完成以下命令：

// new id ——新建一个指定编号为id的序列(id<10000)

// add id num——向编号为id的序列加入整数num

// merge id1 id2——合并序列id1和id2中的数，并将id2清空

// unique id——去掉序列id中重复的元素

// out id ——从小到大输出编号为id的序列中的元素，以空格隔开

// 输入
// 第一行一个数n，表示有多少个命令( n＜＝２０００００)。以后n行每行一个命令。

// 输出
// 按题目要求输出。


// 样例输入
// 1234567891011121314151617
// 16
// new 1
// new 2
// add 1 1
// add 1 2
// add 1 3
// add 2 1
// add 2 2
// add 2 3
// add 2 4

// 样例输出
// 12345
// 1 2 3 
// 1 2 3 4
// 1 1 2 2 3 3 4

// 1 2 3 4

// 如何提交
// 准备好提交后，您可以在‘我提交的作业’选项卡上，上传作业每部分的文件

#include <list>  
#include <iostream>  
#include <map> 
#include <string>
using namespace std;

class info
{
public:
	int idnum;
	int idnum1;
	int add;

};



int main()
{
	typedef map< int, list<int> > map_;
	int  num, n, m, p = 0, id1;
	string str;
	info A;
	map_ op;
	list<int>::iterator i;
	cin >> n;
	while (n--)
	{
		cin >> str;
		if (str == "new")
		{
			cin >> A.idnum;
			op.insert(map_::value_type(A.idnum, list<int>()));
		}
		else
			if (str == "add")
			{
				cin >> A.idnum >> A.add;
				op[A.idnum].push_back(A.add);
			}
			else
				if (str == "out")
				{
					cin >> A.idnum;
					op[A.idnum].sort();
					for (i = op[A.idnum].begin(); i != op[A.idnum].end(); i++)
					{
						cout << *i << " ";
					}
					cout << endl;
				}
				else
					if (str == "merge")
					{
						cin >> A.idnum >> A.idnum1;
						op[A.idnum].merge(op[A.idnum1]);
					}
					else
						if (str == "unique")
						{
							cin >> A.idnum;
							op[A.idnum].sort();
							op[A.idnum].unique();
						}
	}
	return 0;
}