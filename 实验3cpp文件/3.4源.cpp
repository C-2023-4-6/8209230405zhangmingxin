#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double a, b, c;
	cout << "�����������ε������ߣ�";
	cin >> a >> b >> c;
	if (is_valid(a, b, c))
	{
		cout << "�����ε����Ϊ��" << area(a, b, c);
	}
	else
		cout << "���������߲����϶���" << endl;
	
	return 0;

}
