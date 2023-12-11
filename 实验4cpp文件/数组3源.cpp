#include<iostream>
using namespace std;
int main()
{
	bool lists[100] = { 0 };
	for (int student = 1; student <= 100; student++)
	{
		for (int lock = student - 1; lock < 100; lock += student)
		{
			lists[lock] = !lists[lock];
		}
	}
	cout << "操作完成后，开着的柜子序号为：" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (lists[i])
		{
			cout << i + 1 << " ";
		}
	}
	return 0;
}