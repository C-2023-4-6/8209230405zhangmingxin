#include<iostream>
using namespace std;
void bubbleSort(int p[], int len)
{
	int temp;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				temp = p[j + 1];
				p[j + 1] = p[j];
				p[j] = temp;
			}
		}
	}
}
int main()
{
	int len;
	int index;
	cout << "请输入数组元素个数：" << endl;
	cin >> len;
	int* p = new int[len];
	cout << "请输入数组中的元素：" << endl;
	for (int i = 0; i < len; i++)
	{
		cin >> *(p + i);
	}
	cout << "请输入你想要观察的元素：" << endl;
	cin >> index;
	cout << "该元素为：" << *(p + index - 1) << endl;
	bubbleSort(p, len);
	for (int i = 0; i < len; i++)
	{
		cout << *(p + i) << " ";
	}
	delete p;
	return 0;
}