#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//Solution #4 Print All Perfect Number 1 to N
//Course #5



int ReadPositiveNumber(string Message)
{

	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

bool isperfectNumber(int Number)
{
	int sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			sum += i;
	}

	return Number == sum;
}


void PrintResults(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		if (isperfectNumber(i))
		{
			cout << i << endl;
		}

	}



}


int main()
{

	PrintResults(ReadPositiveNumber("Please enter postitvie number"));
}

