#include <iostream>

using namespace std;

class A
{
	int x;
	int y;
public:
	void get_info()
	{
		cin >> x >> y;
	}
	void put_info()
	{
		cout << x << " " << y << endl;
	}
	int get_x()
	{
		return x;
	}
	int get_y()
	{
		return y;
	}
};

class B : public A
{
	int xx;
	int yy;
public:
	void set()
	{
		xx = get_x()*get_x();
		yy = get_y()*get_y();
	}
	void print()
	{
		cout << xx << " " << yy << endl;
	}
};

int main()
{
	B b;
	b.get_info();
	b.put_info();
	b.set();
	b.print();
}