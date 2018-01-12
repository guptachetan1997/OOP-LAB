//Using classes maintain Employee details and increments
#include <iostream>
using namespace std;
class Employee
{
	long number;
	char dob[9];
	int rank;
	float salary;
public:
	Employee()
	{
		number=rank=salary=0;
	}
	void enter_details()
	{
		cout << "Number : ";
		cin >> number;
		cout << "DOB(dd-mm-yy) : ";
		cin >> dob;
		cout << "Starting Salary : ";
		cin >> salary;
	}
	void increment_salary(bool check=0)
	{
		if(check)
			salary = salary + 0.25*salary;
		else
			salary = salary + 0.10*salary;
	}
	void increment_rank()
	{
		rank++;
		increment_salary(1);
	}
	void print_details()
	{
		cout << "---------------------------\n";
		cout << "Number : " << number << endl;
		cout << "DOB : " << dob << endl;
		cout << "Rank : " << rank << endl;
		cout << "Salary : " << salary << endl;
		cout << "---------------------------\n";
	}
};

int main()
{
	Employee emp;
	emp.enter_details();
	cout << "After promoting rank : " << endl << endl;
	emp.increment_rank();
	emp.print_details();

}

OUTPUT:
Number : 12312
DOB(dd-mm-yy) : 19-09-97
Starting Salary : 100923
After promoting rank : 

---------------------------
Number : 12312
DOB : 19-09-97
Rank : 1
Salary : 126154
---------------------------
