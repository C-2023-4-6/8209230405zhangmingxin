#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		char letter = s[i];
		if (letter >= 'A' && letter <= 'Z')
		{
			letter += 32;
		}
		if (letter >= 'a' && letter <= 'z')
		{
			int index = letter - 97;
			counts[index]++;
		}
	}
}
int main()
{
	int counts[26] = { 0 };
	char s[1000];
	cout << "������һ���ַ�����" << endl;
	cin.getline(s, 1000);
	count(s, counts);
	cout << "ÿ����ĸ���ֵĴ�����" << endl;
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			char letter = 'a' + i;
			cout << letter << "���ֵĴ����ǣ�" << counts[i] << endl;
		}
	}
	return 0;
}