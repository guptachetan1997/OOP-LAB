#include <iostream>

using namespace std;

class Human
{
	char name[50];
	int age;
public:
	Human()
	{
		cin >> name >> age;
	}
	void print_human_info()
	{
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
	}
};

class Employee : public Human
{
	char designation[50];
public:
	Employee()
	{
		cin >> designation;
	}
	void print_employee_info()
	{
		print_human_info();
		cout << "Designation : " << designation << endl;
	}
};

class Manager : public Employee
{
	char vertical[50];
public:
	Manager()
	{
		cin >> vertical;
	}
	void print_manager_info()
	{
		print_employee_info();
		cout << "Vertical : " << vertical << endl;
	}
};

int main()
{
	Manager m;
	m.print_manager_info();
}