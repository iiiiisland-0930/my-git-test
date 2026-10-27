#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	//some examples notice the setting of bool to control the printout of goal numbers.
	/*int k = 0;
	for (int i = 2;i <= 1000;i++)
	{
		bool f = 1;
		for (int j = 2;j < i;j++)
		{
			if (i % j == 0)
			{
				f= 0;
				break;
			}
		}
		if (f)
		{
			cout << i << " ";
			k++;
		}
		if (k % 10 == 0)
		{
			cout << endl;
		}

	}*/

	//1-100 
	/*for (int i = 1;i < 101;i++)
	{
		if (i % 3 == 0)
		{
			cout << i << " ";
		}
	}*/

	/*int m;
	cin >> m;
	bool f = 1;
	for (int i = 2;i < sqrt(m);i++)
	{
		if (m % i == 0)
		{
			f = 0;
			cout << "No!";
			break;
		}
	}
	if (f)
	{
		cout << "Yes!";
	}*/


	/*int i, j;
	cout << setw(4) << "*" ;
	for (int i = 1;i < 10;i++)
	{
		cout << setw(4) << i;
	}
	cout << endl;
	for (int i = 1;i < 10;i++)
	{
		cout << setw(4) << i;
		for (int j = 1;j < 10;j++)
		{
			cout << setw(4) << i * j;
		}
		cout << endl;
	}*/


	//calculate 'e'
	/*const  double m = 0.1e-10;
	double a = 1.0, b = 1.0,e=1.0;
	double i = 1.0;
	do
	{
		a *= i;
		b = 1 / a;
		e += b;
		i++;
	} while (b > m);
	cout << "e=" << e;*/
	//print rectangle
	/*for (int i = 1;i < 5;i++)
	{
		for (int j = 1;j <= 4 - i;j++)
		{
			cout << " ";
		}
		for (int k= 1;k <= 2 * i - 1;k++)
		{
			cout << "*";
		}
		cout << endl;
	}*/
	

	    /*int n;
		cin >> n;
		int k = 0;
		if (1 <= n && n <= 13)
		{
			for (int i = 1;i <= (n + 1) * n / 2;i++)
			{
				cout << setfill('0') << setw(2) << i;
				for (int j = n;j >= 1;j--)
				{
					k += j;
					if (i == k)
					{
						cout << endl;
					}
				}
			}
		}*/
int arr[3][3] = {
	{7,8,9},{1,2,3},{4,5,6} };
//for (int i = 0;i < 3;i++)
//{
//	for (int j = 0;j < 3;j++)
//	{
//		cout << arr[i][j] << " ";
//	}
//}
cout << (int)&arr[2][2];

	return 0;
}