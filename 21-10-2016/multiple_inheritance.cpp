#include <iostream>

using namespace std;

class A
{
	int x,y;
public:
	void get_xy()
	{
		cin >> x >> y;
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

class B
{
	int a,b;
public:
	void get_ab()
	{
		cin >> a >> b;
	}
	int get_a()
	{
		return a;
	}
	int get_b()
	{
		return b;
	}
};

class C : public A,public B
{
	int ax,by;
public:
	void set()
	{
		ax = get_a()*get_x();
		by = get_b()*get_y();
	}
	void print()
	{
		cout << ax << " " << by << endl;
	}
};

int main()
{
	C c;
	c.get_xy();
	c.get_ab();
	c.set();
	c.print();
}