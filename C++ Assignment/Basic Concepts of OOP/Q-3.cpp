/*  Define a class to represent a bank account */

#include<iostream>
using namespace std;

class BankAccount{
	private:
		int accountNumber;
		double balance;
	public:
		BankAccount(int accNum, double Bal)
		{
			accountNumber = accNum;
			balance = Bal;
		}
		void deposit(double amount,string name)
		{
			balance += amount;
			cout<<"Deposit: "<<amount<<endl;
			cout<<name<<"Current Balance : "<< balance<<endl;
		}
		void withdraw(double amount,string name)
		{
			if (balance >= amount)
			{
				balance -= amount;
				cout<<"Withdrawal Successful : "<<amount<<endl;
				cout<<name<<" Current Balance : "<<balance<<endl;
			}
			else
			{
				cout<<"Insufficient balance. cannot withdraw. :"<<balance<<endl;
			}
		}
};
int main()
{
	string name = "Diya Patil";
	string type = "saving";
	int accountNumber = 142;
	double Balance = 1000, amount;
	
	cout<<"Name of the Account Holder : "<<name<<endl;
	cout<<"Account Number : "<<accountNumber<<endl;
	cout<<"Type of Account : "<<type<<endl;
	cout<<"Your Balance : "<<Balance<<endl;
	
	BankAccount Account(accountNumber, Balance);
	int choice;
		cout<<"Enter 1 to deposit"<<endl<<"2 to withdraw"<<endl<<"or 0 to exit :"<<endl;
		cin>>choice;
		
		if(choice == 0)
		{
			return 0;
		}
		else if(choice == 1)
		{
			cout<<"Enter Amount to Deposit : ";
			cin>>amount;
			Account.deposit(amount,name);
		}
		else if(choice == 2)
		{
			cout<<"Enter amount to withdraw : ";
			cin>>amount;
			Account.withdraw(amount,name);
		}
		else
		{
			cout<<"Invalid Choice."<<endl;
		}
		return 0;
}
