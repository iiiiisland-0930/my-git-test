#include<iostream>
using namespace std;
int main()
{
	int arr[6] = { 9,5,2,7,4,6 };
	for (int i = 0;i < 6;i++)
	{
		cout << arr[i] << endl;
	}
	for (int j = 0;j < 5;j++)
	{
		for (int k=0;k < 6 - j - 1;k++)
		{
			if (arr[k] > arr[k+1])
			{
				int temp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = temp;
			}

		}
	}
	cout << endl;
	for (int i = 0;i < 6;i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}