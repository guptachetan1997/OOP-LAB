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

class student
{
	char name[50];
	int std;
	subject sbs[1];
public:
	void new_st()
	{
		cout << "Student Name : ";
		cin >> name;
		cout << "Standard : ";
		cin >> std;
		cout << "Enter details of subjects : \n";
		for (int i = 0; i < 1; ++i)
		{
			cout << "Subject " << i+1 << endl;
			sbs[i].new_sub();
		}
	}
	void print_student()
	{
		cout << "Name : " << name << endl;
		cout << "Standard : " << std << endl;
		cout << "Marks Details : \n";
		for (int i = 0; i < 1; ++i)
		{
			sbs[i].print_sub();
		}
	}
	int total_marks()
	{
		int sum=0;
		for (int i = 0; i < 1; ++i)
		{
			sum+=sbs[i].get_marks();
		}
		return sum;
	}
	
};

void swap(student &a, student &b)
{
	student c=a;
	a=b;
	b=c;
}

void sort_and_print(student a[], int n)
{
	cout << "\nStudents According to Descending order of marks : \n";
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			if(a[i].total_marks() < a[j].total_marks())
				swap(a[i], a[j]);
		}
	}
	for (int i = 0; i < n; ++i)
	{
		a[i].print_student();
	}
}

int main()
{
	cout << "Enter number of students : ";
	int n;
	cin >> n;
	student st[n];
	for (int i = 0; i < n; ++i)
	{
		st[i].new_st();
	}
	sort_and_print(st, n);

}

