#include<iostream>
using namespace std;
void bs(double list[], int listSize)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				double temp = list[j + 1];
				list[j + 1] = list[j];
				list[j] = temp;
				changed = true;
			}
	} while (changed);
}
int main()
{
	double list[10];
	cout << "请输入十个小数：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}
	int len = sizeof(list) / sizeof(list[0]);
	bs(list, len);
	for (int i = 0; i < 10; i++)
	{
		cout << list[i] << "  ";
	}
	return 0;
}