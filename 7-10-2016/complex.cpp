#include <iostream>

using namespace std;

class Complex
{
	float real, imag;
public:
	Complex()
	{
		real = imag = 0;
	}
	Complex(float r,float i)
	{
		real = r;
		imag = i;
	}
	Complex operator + (Complex a)
	{
		return Complex(a.real+real, a.imag+imag);
	}
	Complex operator - (Complex a)
	{
		return Complex(real-a.real, imag-a.imag);
	}
	void print()
	{
		cout << real << " + " << imag << "i" << endl;
	}
};

int main()
{
	Complex a(1,2), b(3,4);
	cout << "A : ";
	a.print();
	cout << "B : ";
	b.print();
	cout << "A + B : ";
	Complex c = a+b;
	c.print();
	c = a-b;
	cout << "A - B : ";
	c.print();
}