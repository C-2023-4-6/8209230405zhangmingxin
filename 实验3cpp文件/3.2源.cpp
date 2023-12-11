#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int i;
	if (num == 1)
	{
		return false;
	}
	if (num == 2)
	{
		return true;
	}
	for (i=2; i <= num - 1; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n = 0;
	for (int i = 2; i <= 200; i++)
	{
			if (is_prime(i))
			{
				cout << i << " ";
				n++;
			}
			if (n == 10)
			{
				cout << endl;
				n = 0;
			}
			
	}
	return 0;
}