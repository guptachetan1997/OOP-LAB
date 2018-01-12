#include <iostream>

using namespace std;

class subject
{
	char name[50];
	int marks;
public:
	void new_sub()
	{
		cout << "Name : ";
		cin >> name;
		cout << "Marks : ";
		cin >> marks;
	}
	char* get_name()
	{
		return name;
	}
	int get_marks()
	{
		return marks;
	}
	void print_sub()
	{
		cout << name << " : " << marks << endl;
	}

};

inline void result(float marks)
{
	if(marks > 100)
		cout << "PASS";
	else
		cout << "FAIL";
}

class student
{
	char name[50];
	int std;
	subject sbs[3];
	int total;
public:
	void new_st()
	{
		cout << "Name : ";
		cin >> name;
		cout << "Standard : ";
		cin >> std;
		cout << "Enter details of subjects : \n";
		total=0;
		for (int i = 0; i < 3; ++i)
		{
			cout << "Subject " << i+1 << endl << endl;
			sbs[i].new_sub();
			total += sbs[i].get_marks();
		}
	}
	void print_student()
	{
		cout << "Name : " << name << endl;
		cout << "Standard : " << std << endl;
		cout << "Marks Details : \n";
		for (int i = 0; i < 3; ++i)
		{
			sbs[i].print_sub();
		}
		cout << "Result : ";
		result(total);
		cout << endl;
	}
	
};

int main()
{
	student a;
	a.new_st();
	cout << endl;
	a.print_student();
}