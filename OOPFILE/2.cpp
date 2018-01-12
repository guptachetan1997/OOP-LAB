//Create a class of complex numbers
#include <iostream>
using namespace std;
class Complex
{
	float real, imag;
public:
	Complex(float r, float i)
	{
		real = r;
		imag = i;
	}
	Complex add(Complex b)
	{
		Complex ans(0,0);
		ans.real = real + b.real;
		ans.imag = imag + b.imag;
		return ans;
	}
	Complex subtract(Complex b)
	{
		Complex ans(0,0);
		ans.real = real - b.real;
		ans.imag = imag - b.imag;
		return ans;
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
	cout << "A+B : ";
	(a.add(b)).print();
	cout << "A-B : ";
	(a.subtract(b)).print();
}

OUTPUT:
A : 1 + 2i
B : 3 + 4i
A+B : 4 + 6i
A-B : -2 + -2i
