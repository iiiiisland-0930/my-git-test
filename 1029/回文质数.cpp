#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (0 < a && 0 < b)
	{
		if (2 >= a && 1 <= b)
		{
			cout << 2 << endl;
		}
		for (int i = 3;i <= 9;i += 2)//1
			{
				bool f = true;
				for (int j = 3;j <= sqrt(i);j+=2)
				{
					if (i % j == 0)
					{
						f = false;
						break;
					}
				}
				if (f)
				{
					if (a <= i && i <= b)
					{
						cout << i << endl;
					}
				}

			}
		if (a <= 11 && 11 <= b)
		{
			cout << 11 << endl;
		}
			for (int i = 1;i <= 9;i += 2)//2
			{
				int d = 10 * i + i;
				bool g = true;
				for (int k = 3;k <= sqrt(d);k+=2)
				{
					if (d % k == 0)
					{
						g = false;
						break;
					}
				}
				if (g)
				{
					if (a <= d && d <= b)
					{
						cout << d << endl;
					}
				}
			}
			for (int i = 1;i <= 9;i += 2)//3
			{
				for (int j = 0;j <= 9;j++)
				{
					int e = 100 * i + 10 * j + i;
					bool h = true;
					for (int k = 3;k <= sqrt(e);k+=2)
					{
						if (e % k == 0)
						{
							h = false;
							break;
						}
					}
					if (h)
					{
						if (a <= e && e <= b)
						{
							cout << e << endl;
						}
					}
				}
			}
			
			for (int i = 1;i <= 9;i += 2)//5
			{
				for (int j = 0;j <= 9;j++)
				{
					for (int k = 0;k <= 9;k++)
					{
						int x = 10000 * i + 1000 * j + 100 * k + 10 * j + i;
						bool w = true;
						for (int l = 3;l <= sqrt(x);l+=2)
						{
							if (x % l == 0)
							{
								w = false;
								break;
							}
						}
						if (w)
						{
							if (a <= x && x <= b)
							{
								cout << x << endl;
							}
						}
					}
				}
			}
			
	}
	return 0;
}