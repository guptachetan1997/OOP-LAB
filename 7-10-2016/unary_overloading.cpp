#include <iostream>

using namespace std;

class Number
{
	int x;
public:
	Number()
	{
		x=0;
	}
	Number(int a)
	{
		x = a;
	}
	Number operator -()
	{
		Number temp;
		temp.x = -x;
		return temp;
	}
	void show()
	{
		cout << " X : " << x << endl;
	}
};

int main()
{
	Number a(-10);
	Number b = -a;
	b.show();
}