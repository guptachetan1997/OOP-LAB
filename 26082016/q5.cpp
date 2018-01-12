#include <iostream>

using namespace std;

class Product
{
	int id;
	char type;
public:
	static int obj_count;
	void new_prod()
	{
		cout << "ID : ";
		cin >> id;
		cout << "Type : ";
		cin >> type;
		obj_count++;
	}
	static void reset_obj_count()
	{
		obj_count=0;
	}
};

int Product::obj_count=0;

int main()
{
	Product p[5];
	for (int i = 0; i < 5; ++i)
	{
		p[i].new_prod();
	}
	cout << "Object Counter : " << Product::obj_count << endl;
	Product::reset_obj_count();
	cout << "After Reset Object Counter : " << Product::obj_count << endl;
}