#include<iostream>
using namespace std;
int gongyue(int a, int b)
{
	int i = min(a, b);
	for (i; a % i != 0 || b % i != 0; i--);
	return i;
}
int main()
{
	int m,n;
	cout << "��������������";
	cin >> m >> n;
	cout << "m��n���������Ϊ��" << gongyue(m, n) << endl;
	int d = gongyue(m, n);
	int e = m / d;
	int f = n / d;
	int g = e * f * d;
	cout << "m��n����С������Ϊ��" <<g<< endl;
	return 0;

}