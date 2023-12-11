#include<iostream>
using namespace std;
int main()
{
	int b = 1;
	for (int i = 0; i < 9; i++)
	{ 
		 b = (b + 1) * 2;
	}
	cout << "一开始有 " << b << "个桃子" << endl;
	return 0;
}