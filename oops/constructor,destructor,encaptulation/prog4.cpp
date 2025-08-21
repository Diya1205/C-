#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accNumber, double initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
        
        
    }

    // Method to deposit money
    void deposit(double amount) {
    	cout<<"enter ammount that you want deposit"<<endl;
    	cin>>amount;
    	
        balance += amount;
        cout << "Deposited " << amount << " into account number " << accountNumber << endl;
    }

    // Method to withdraw money
    void withdraw(double amount) {
    	
    	cout<<"enter the amount that you want widraw"<<endl;
    	cin>>amount;
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn " << amount << " from account number " << accountNumber << endl;
        } else {
            cout << "Insufficient funds to withdraw " << amount << " from account number " << accountNumber << endl;
        }
    }

    // Method to check balance
    double getBalance() {
        return balance;
    }
};

int main() {
    // Creating a BankAccount object
    BankAccount myAccount(34344, 2000.0);

    // Deposit some money
    myAccount.deposit(200.0);

    // Withdraw some money
    myAccount.withdraw(100.0);

    // Withdraw more money than available
    myAccount.withdraw(1500.0);

    // Check balance
    cout << "Current balance: " << myAccount.getBalance() << endl;


}

