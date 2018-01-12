#include "iostream"
#include "iomanip"

using namespace std;

class Income
{
public:
	virtual double pay_salary()=0;
	virtual double compute_deductions()=0;
	virtual double calculate_tax()=0;
};

class Income2 : public Income
{
	double basic;
	double DA;
public:
	void set_salary()
	{
		basic = 1000000;
		DA = 50000;
	}
	double compute_deductions()
	{
		return 0.08*basic;
	}

	double pay_salary()
	{
		return (basic + DA + 0.15*basic - compute_deductions());
	}
	double calculate_tax()
	{
		double salary = pay_salary();
		if(salary <= 100000)
			return 0.2*salary;
		else
			return (0.3*salary + 0.3*0.1*salary);
	}
};

int main()
{
	Income2 obj;
	obj.set_salary();
	cout << fixed << setprecision(2);
	cout << "Deductions : " << obj.compute_deductions() << endl;
	cout << "Salary : " << obj.pay_salary() << endl;
	cout << "Tax : " << obj.calculate_tax() << endl;
}