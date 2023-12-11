#include<iostream>
#include<string>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int i = 0;
	int numReturn = -1;
	while (s2[i] != '\0')
	{
		int k = i, j = 0;
		while (s1[j] != '\0' && s1[j] == s2[k])
		{
			k++;
			j++;
		}
		if (s1[j] == '\0')
		{
			numReturn = i;
		}
		i++;
	}
	return numReturn;
}
int main()
{
	char* s1 = new char[100];
	char* s2 = new char[100];
	cout << "请输入第一个字符串：" << endl;
	cin.getline(s1, 100);
	cout << "请输入第二个字符串：" << endl;
	cin.getline(s2, 100);
	int index = indexOf(s1, s2);
	cout << "indexOf" << "(“" << s1 << "”，" << "“" << s2 << "”）" << "is" << index;
	return 0;
}