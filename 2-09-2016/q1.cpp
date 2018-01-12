#include <iostream>

using namespace std;

class B;

class A
{
	int x;
	friend float mean(A &a, B &b);
public:
	void get_data(int a)
	{
		x = a;
	}
};

class B
{
	int x;
	friend float mean(A &a, B &b);
public:
	void get_data(int a)
	{
		x = a;
	}
};

float mean(A &a, B &b)
{
	return ((a.x+b.x)/2.0);
}

int main()
{
	int t;
	A a;
	cout << "Number 1 : ";
	cin >> t;
	a.get_data(t);
	B b;
	cout << "Number 2 : ";
	cin >> t;
	b.get_data(t);
	cout << mean(a,b) << endl;
}