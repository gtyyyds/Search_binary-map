#include<iostream>
#include<map>
using namespace std;
void insert_num(multimap<int, int>& m)
{
	cout << "������뼸������" << endl;
	int num = 0;
	cin >> num;
	cout << "��������Ҫ���������" << endl;
	for (int i = 0; i < num; i++)
	{
		int ret = 0;
		cin >> ret;
		m.insert(make_pair(ret, i));
	}
}
void find_num(multimap<int, int>& m)
{
	cout << "��������ĸ����ݣ�" << endl;
	int num = 0;
	cin >> num;
	multimap<int, int>::iterator it = m.find(num);
	if (it != m.end())
	{
		cout << "�ҵ��ˣ����ǣ�" << it->first << " " << "�±꣺" << it->second << endl;
	}
	else
	{
		cout << "û�в鵽��" << endl;
	}
}
int main()
{
	multimap<int, int>m;
	insert_num(m);
	find_num(m);
}