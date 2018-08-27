#include <iostream>
using namespace std;

int main()
{
	//Exercise 1
	{
		//100-0
		{
			for (int i = 99; i > 0; i--)
			{
				cout << i << " ";
			}
		}
		cout << endl;
		cout << endl;
		//Include 0 & 100
		{
			for (int i = 100; i > -1; i--)
			{
				cout << i << " ";
			}
		}
		cout << endl;
		cout << endl;
		//Include 0 & not 100
		{
			for (int i = 99; i > -1; i--)
			{
				cout << i << " ";
			}
		}
		cout << endl;
		cout << endl;
		//Include 100 & not 0
		{
			for (int i = 100; i > 0; i--)
			{
				cout << i << " ";
			}
		}
		cout << endl;
		cout << endl;
		//Decrement of 2
		{
			for (int i = 100; i > -1; i -= 2)
			{
				cout << i << " ";
			}
		}
		cout << endl;
		cout << endl;
	}
	//Exercise 2
	{
		for (int i = 1; i < 101; i++)
			{
				if (i % 3 == 0 && i % 5 == 0)
				{
					cout << "FizzBuzz\n";
				}
				else if (i % 3 == 0)
				{
					cout << "Fizz\n";
				}
				else if (i % 5 == 0)
				{
					cout << "Buzz\n";
				}
				else
				{
					cout << i << "\n";
				}
			}
		cout << endl;
	}
	//Exercise 3
	{
		int sum = 0;
		for (int i = 0; i < 1000; i++)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				sum += i;
			}
		}
		cout << sum;
		cout << endl;
	}
	//Exercise 4
	{

	}
	system("pause");
	return 0;
}