//Do operator overloading for string manipulation
#include <iostream>
using namespace std;

class Str
{
	char value[1000];
	int length;
public:
	Str()
	{
		length = 0;
	}
	Str(int n)
	{
		length = n;
		cin >> value;
	}
	Str operator + (Str b)
	{
		Str c;
		c.length = length + b.length;
		for(int i=0 ; i<length ; i++)
			c.value[i] = value[i];

		for(int i=length ; i<length+b.length ; i++)
			c.value[i] = b.value[i-length];
		return c;
	}
	Str operator = (Str b)
	{
		Str c;
		c.length = b.length;
		for (int i = 0; i < c.length; ++i)
			c.value[i] = b.value[i];
		return c;
	}
	bool operator < (Str b)
	{
		for(int i=0 ; i<min(length, b.length) ; i++)
		{
			if(value[i] > b.value[i])
				return false;
		}
		if(b.length < length)
			return false;
		else
			return true;
	}
	bool operator > (Str b)
	{
		for(int i=0 ; i<min(length, b.length) ; i++)
		{
			if(value[i] < b.value[i])
				return false;
		}
		if(b.length > length)
			return false;
		else
			return true;
	}
	bool operator == (Str b)
	{
		if(length != b.length)
			return false;
		for(int i=0 ; i<(length) ; i++)
		{
			if(value[i] != b.value[i])
				return false;
		}
		return true;
	}
	void print()
	{
		cout << value << endl;
	}
	
};

int main()
{
	Str a(3),b(4);
	Str c = a + b;
	cout << int(a < b) << endl;
	cout << int(a > c) << endl;
	cout << int(a == a) << endl;
}

OUTPUT:
abc
def
1
0
1
