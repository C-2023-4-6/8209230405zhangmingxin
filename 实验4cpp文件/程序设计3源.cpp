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
	cout << "����������Ԫ�ظ�����" << endl;
	cin >> len;
	int* p = new int[len];
	cout << "�����������е�Ԫ�أ�" << endl;
	for (int i = 0; i < len; i++)
	{
		cin >> *(p + i);
	}
	cout << "����������Ҫ�۲��Ԫ�أ�" << endl;
	cin >> index;
	cout << "��Ԫ��Ϊ��" << *(p + index - 1) << endl;
	bubbleSort(p, len);
	for (int i = 0; i < len; i++)
	{
		cout << *(p + i) << " ";
	}
	delete p;
	return 0;
}