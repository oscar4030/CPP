#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "1~100������ ���ڸ� �Է��ϼ���" << endl;
	cin >> n;
	for (int i = 1; i <= (n+1)/2; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i >= j ||i + j >= n+1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			
			

			// << " ";
		}
		cout << "\n";
	}
}