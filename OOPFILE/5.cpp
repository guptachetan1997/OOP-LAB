//Bank account management using classes
#include <iostream>
using namespace std;

class Account
{
	char name[50];
	long account_no;
	int account_type;
	double balance;
public:
	void new_acc()
	{
		cout << "Name : ";
		cin >> name;
		cout << "Account Number : ";
		cin >> account_no;
		cout << "Account Type : ";
		cin >> account_type;
		cout << "Starting Balance : ";
		cin >> balance;
	}
	void get_type()
	{
		if(account_type == 0)
		{
			cout << "Savings";
		}
		else
		{
			cout << "Current";
		}
	}
	void get_statement()
	{
		cout << "\n========================================\n";
		cout << "Account Number : " << account_no << endl;
		cout << "Holder : " << name << endl;
		cout << "Account Type : ";
		get_type();
		cout << endl;
		cout << "Balance : " << balance << endl;
		cout << "\n========================================\n";
	}
	void deposit()
	{
		double amount;
		cout << "Enter amount to deposit : ";
		cin >> amount;
		balance+=amount;
	}
	void withdraw()
	{
		double amount;
		cout << "Enter amount to withdraw : ";
		cin >> amount;
		if(balance > amount)
			balance-=amount;
		else
			cout << "Not Enough balance";
	}
		
};

int main()
{
	Account a;
	a.new_acc();
	a.deposit();
	a.get_statement();
	a.withdraw();
	a.get_statement();
}

OUTPUT:
Name : Chetan
Account Number : 123193129
Account Type : 0
Starting Balance : 100000
Enter amount to deposit : 123

========================================
Account Number : 123193129
Holder : Chetan
Account Type : Savings
Balance : 100123

========================================
Enter amount to withdraw : 123

========================================
Account Number : 123193129
Holder : Chetan
Account Type : Savings
Balance : 100000

========================================
