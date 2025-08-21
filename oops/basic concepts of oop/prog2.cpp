/*2. Define a class to represent a bank account. Include the following members:
 Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/

#include<iostream>
using namespace std;
 
 
class Bank_Account{ // create class 
	//access specifiers
	private : 
	     string name;
	     double accountNumber;
	     string accountType;
	     float currentBal ;
	     double amount ;
	     //access specifiers
	public:
	     //assign values
		 assignValue(){
		 	cout<<"Enter account holder name : "<<endl;
		 	cin>>name;
		 	
		 	cout<<"enter account number : "<<endl;
		 	cin>>accountNumber;
		 	
		 	cout<<"Enter account type (current or saving ?) "<<endl;
		 	cin>>accountType;
		 	
		}     
	    //function create
	    deposit() 
        {
            currentBal += amount;
            cout<<"Deposit: "<<amount<<endl;
            cout<<name<<" Current balance: "<<currentBal<<endl;
        }
//        function create
        void withdraw() 
        {
//        	condition for low balance
            if (currentBal >= amount) 
            {
                currentBal -= amount;
                cout<<"Withdrawal successful: "<<amount<<endl;
                cout<<name<<" Current balance: "<<currentBal<<endl;
            } 
            else 
            {
                cout<<"Insufficient balance. Cannot withdraw.: "<<currentBal<<endl;
            }
        }
	
}; 


main(){
	
	     string name = "ruh" ;
	     double accountNumber = 2334 ;
	     string accountType = "saving";
	     float currentBal  = 1000;
	     double amount;

	cout<<"Name of the Accoutnt Holder: "<<name<<endl;
    cout << "Account number: "<<accountNumber<<endl;
    cout<<"Type of Account: "<<accountType<<endl;
    cout << "Balance: "<<currentBal<<endl;
//    object create
   	Bank_Account obj;
   	obj.assignValue();

    int choice;
        cout << "Enter 1 to deposit, 2 to withdraw, or 0 to exit: ";
        cin >> choice;
//        condition to withdraw or deposit
        if (choice == 0) 
        {
            return 0;
        } 
        else if (choice == 1) 
        {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            obj.deposit();
        } 
        else if (choice == 2) 
        {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            obj.withdraw();
        } 
        else 
        {
            cout << "Invalid choice." << endl;
        }
    
	
	
}
