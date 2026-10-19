#include <iostream>
using namespace std;
int main()
{
	long long a;
	cin >> a;
	int bits[64];
	int count = 0;
	if (a > 0)
	{
		for (;a > 0;)
		{
			int b = a % 2;
			bits[count] = b;
			count++;
			a = a / 2;
		}
		for (int i = count - 1;i >= 0;i--)
		{
			cout << bits[i];
		}
		cout << endl;
	}
	return 0;
}