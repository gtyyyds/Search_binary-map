#include<iostream>
#include<map>
using namespace std;
void insert_num(multimap<int, int>& m)
{
	cout << "你想插入几个数据" << endl;
	int num = 0;
	cin >> num;
	cout << "请你输入要插入的数字" << endl;
	for (int i = 0; i < num; i++)
	{
		int ret = 0;
		cin >> ret;
		m.insert(make_pair(ret, i));
	}
}
void find_num(multimap<int, int>& m)
{
	cout << "你想查找哪个数据：" << endl;
	int num = 0;
	cin >> num;
	multimap<int, int>::iterator it = m.find(num);
	if (it != m.end())
	{
		cout << "找到了！它是：" << it->first << " " << "下标：" << it->second << endl;
	}
	else
	{
		cout << "没有查到！" << endl;
	}
}
int main()
{
	multimap<int, int>m;
	insert_num(m);
	find_num(m);
}