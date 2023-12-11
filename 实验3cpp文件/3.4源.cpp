#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形的三条边：";
	cin >> a >> b >> c;
	if (is_valid(a, b, c))
	{
		cout << "三角形的面积为：" << area(a, b, c);
	}
	else
		cout << "三角形三边不符合定义" << endl;
	
	return 0;

}
