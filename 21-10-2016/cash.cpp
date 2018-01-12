#include <iostream>
#include <string.h>

using namespace std;

class Bill
{
	float amount;
public:
	void enter()
	{
		cout << "Bill amount : ";
		cin >> amount;
	}
	void show()
	{
		cout << "Bill amount : " << amount << endl;
	}
	float get_amount()
	{
		return amount;
	}
};

class Cheque_Payment : public Bill
{
	long check_number;
	char bank_name[50];
	char branch[50];
	char username[50];
public:
	Cheque_Payment()
	{
		enter();
		cout << "Username : ";
		cin >> username;
		cout << "Check Number : ";
		cin >> check_number;
		cout << "Bank Name : ";
		cin >> bank_name;
		cout << "Branch : ";
		cin >> branch;
	}
	void make_payment()
	{
		cout << "----------------------------------------\n";
		cout << "Making Payment of || " << get_amount() << " || " << endl;
		cout << "Username : " << username << endl;
		cout << "CheckNumber : " << check_number << endl;
		cout << "Bank Name : " << bank_name << endl;
		cout << "Branch : " << branch << endl; 
		cout << "----------------------------------------\n";
	}
};

class Cash_Payment : public Bill
{
	int denominations[1001];
public:
	Cash_Payment()
	{
		enter();
		memset(denominations, 0, 1001);
		cout << "Enter Denomination type and Number of notes (for exit type 0)\n";
		int d,n;
		cin >> d;
		while(d!=0)
		{
			cin >> n;
			denominations[d] = n;
			cin >> d;
		}
	}
	void make_payment()
	{
		cout << "----------------------------------------\n";
		cout << "Making Payment of || " << get_amount() << " || " << endl;
		cout << "5 X " << denominations[5] << " = " <<  5*denominations[5] << endl;
		cout << "10 X " << denominations[10] << " = " <<  10*denominations[10] << endl;
		cout << "20 X " << denominations[20] << " = " <<  20*denominations[20] << endl;
		cout << "50 X " << denominations[50] << " = " <<  50*denominations[50] << endl;
		cout << "100 X " << denominations[100] << " = " <<  100*denominations[100] << endl;
		cout << "500 X " << denominations[500] << " = " <<  500*denominations[500] << endl;
		cout << "1000 X " << denominations[1000] << " = " <<  1000*denominations[1000] << endl;
	}
};

int main()
{
	int choice;
	cout << "Enter type of Payment : \n";
	cout << "1. Cash\n";
	cout << "2. Cheque\n";
	cin >> choice;
	if(choice == 2)
	{
		Cheque_Payment c;
		c.make_payment();
	}
	else
	{
		Cash_Payment c;
		c.make_payment();
	}
}