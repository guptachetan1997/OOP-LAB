#include "iostream"
#include "string.h"

using namespace std;

long fibonacci(long n)
{
	if(n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main()
{
	cout << "Fibonnaci Series till 55\n";
	for(int i=0 ; i<=10 ; i++)
	{
		cout << fibonacci(i) << " , ";
	}
	cout << endl;
}