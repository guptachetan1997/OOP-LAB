#include <iostream>

using namespace std;

class Product
{
	long serial;
	char name[50];
public:
	Product()
	{
		cout << "Enter Product Details : \n";
		cout << "Serial : ";
		cin >> serial;
		cout << "Product Name : ";
		cin >> name;
	}
	void show_product()
	{
		cout << "Product Serial : " << serial << endl;
		cout << "Product Name : " << name << endl;
	}
};

class Manufacturer
{
	char name[50];
	char state[50];
public:
	Manufacturer()
	{
		cout << "Enter Manufacturer Details : \n";
		cout << "Name : ";
		cin >> name;
		cout << "State : ";
		cin >> state;
	}
	void show_manufacturer()
	{
		cout << "Manufacturer Name : " << name << endl;
		cout << "State : " << state << endl;
	}
};

class NCDT : public Product,public Manufacturer
{
public:
	void display()
	{
		cout << "-----------------------------\n";
		show_product();
		show_manufacturer();
		cout << "-----------------------------\n";
	}
};

int main()
{
	NCDT a;
	cout << endl;
	a.display();
}