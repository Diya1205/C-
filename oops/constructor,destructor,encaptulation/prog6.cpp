/*15.Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/

#include <iostream>
#include<string>

using namespace std;

class Employee{
	private:
		string name;
		int emp_id;
		int salary;
	public:
		Employee(string n,int id,int s)
		{
			name = n;
			emp_id = id;
			salary = s;
		}
		void displayDetails(){
		cout<<"enter name:"<<endl;
		cin>>name;
		
		cout<<"enter empid:"<<endl;
		cin>>emp_id;
		
		cout<<"enter salary:"<<endl;
		cin>>salary;
		
			
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Salary: " << salary << endl;
    }
		void setSalary(double performanceFactor) 
		{
       	 // Assume a base salary and adjust based on performance
       	 
        	double baseSalary;
        	
        	cout<<"enter base salary"<<endl;
        	cin>>baseSalary;
        	
        	cout<<"enter perfomancefactor:"<<endl;
        	cin>>performanceFactor;
        	
        	salary = baseSalary * performanceFactor;
   		 }
	
		
};

int main()
{
	
	Employee obj("err",23,4000);
	
	obj.displayDetails();
	
	obj.setSalary(1.2);
	
	obj.displayDetails();
	
}
