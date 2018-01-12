#include <iostream>

using namespace std;

class complexno
{
	float real, complex;
	public:
		float get_real()
		{
			return real;
		}
		float get_complex()
		{
			return complex;
		}
		void set_real(float r)
		{
			real = r;
		}
		void set_complex(float c)
		{
			complex = c;
		}
		void new_cn()
		{
			cout << "Enter real part : ";
			cin >> real;
			cout << "Enter complex part : ";
			cin >> complex;
		}
		void print_cn()
		{
			cout << real << " + " << complex << "i" << endl;
		}
};

complexno add(complexno &a, complexno &b)
{
	complexno c;
	c.set_real(a.get_real()+b.get_real());
	c.set_complex(a.get_complex()+b.get_complex());
	return c;
}

int main()
{
	cout << "Enter the two complex numbers you want to add : \n";
	complexno a,b,c;
	cout << "Number 1 \n";
	a.new_cn();
	cout << "Number 2 \n";
	b.new_cn();
	c = add(a,b);
	c.print_cn();
}