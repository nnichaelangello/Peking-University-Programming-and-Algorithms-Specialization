/*
编程题＃6： priority queue练习题

描述
我们定义一个正整数a比正整数b优先的含义是：
*a的质因数数目（不包括自身）比b的质因数数目多；
*当两者质因数数目相等时，数值较大者优先级高。
现在给定一个容器，初始元素数目为0，之后每次往里面添加10个元素，
每次添加之后，要求输出优先级最高与最低的元素，并把该两元素从容器中删除。

输入
第一行: num (添加元素次数，num <= 30)
下面10*num行，每行一个正整数n（n < 10000000).

输出
每次输入10个整数后，输出容器中优先级最高与最低的元素，两者用空格间隔。

样例输入
1
10 7 66 4 5 30 91 100 8 9
*/

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> members;  // 存储 power->id 的映射
    members.insert({1000000000, 1});  // 初始会员facer
    
    int n;
    cin >> n;
    while (n--) {
        int id, power;
        cin >> id >> power;
        
        // 使用lower_bound找到第一个不小于当前power的迭代器
        auto it = members.lower_bound(power);
        
        int opponent_id;
        if (it == members.begin()) {
            // 如果所有会员都比当前强，选择最弱的那个
            opponent_id = it->second;
        } else if (it == members.end()) {
            // 如果所有会员都比当前弱，选择最强的那个
            opponent_id = (--it)->second;
        } else {
            // 比较前后两个会员，选择实力更接近的
            auto prev_it = it;
            --prev_it;
            if (power - prev_it->first <= it->first - power) {
                opponent_id = prev_it->second;
            } else {
                opponent_id = it->second;
            }
        }
        
        cout << id << " " << opponent_id << endl;
        members.insert({power, id});
    }
    return 0;
}