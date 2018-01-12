//Create a class of a right angled triangle and calculate its Area and Perimeter
#include <iostream>
#include <math.h>

using namespace std;

class Triangle
{
	int base, height;
public:
	void set_triangle()
	{
		cout << "Base : ";
		cin >> base;
		cout << "Height : ";
		cin >> height;
	}
	float get_area()
	{
		return 0.5*base*height;
	}
	float get_perimeter()
	{
		return base + height + sqrt(base*base + height*height);
	}
};

int main()
{
	Triangle t;
	t.set_triangle();
	cout << "Area : " << t.get_area() << endl;
	cout << "Perimeter : " << t.get_perimeter() << endl;
}

OUTPUT:
Base : 3
Height : 4
Area : 6
Perimeter : 12

