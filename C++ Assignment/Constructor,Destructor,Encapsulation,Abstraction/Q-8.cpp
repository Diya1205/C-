/*Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation*/

#include<iostream>
#include<string>
using namespace std;
 
class Address{

	public:
		string state;
		string city;
		int pin;

	Address(string state,string city,int pin)
	{
		this->city = city;
		this->state = state;
		this->pin=pin;
	}
		
};

class Student{

	private:
		string name;
		int std_class;
		int roll_number;

		Address *address;

		public:

		Student(string name,int std_class,int roll_number,Address *address)
		{
			this -> name = name;
			this -> std_class = std_class;
			this -> roll_number = roll_number;
			this -> address = address;
		}

		void displaystd()
			{
				cout<<"student details ---------------\n";
				
				cout<<"student Name: "<<name<<endl;
				cout<<"Class: "<<std_class<<endl;
				cout<<"roll_number: "<<roll_number<<endl;
				cout<<"city: "<<address ->city<<endl;
				cout<<"state: "<<address->state<<endl;
				cout<<"pin: "<<address->pin<<endl; 
			}

		float grade()
		{
			float marks;
			cout<<"Enter Student marks: ";
			cin>>marks;
			if (marks >= 60)
			{
				cout << "Grade A" << endl;
			}
    		else if (marks > 35 && marks < 60)
			{
    			cout << "Grade B" << endl;
			}
    		else
    		{
    			cout << "Grade C" << endl;
			}
		}
};

int main()
{

	Address Add("Gujarat","Ahamdabad",382418);
	

	Student std("Diya",5,42,&Add);

	std.displaystd();

	std.grade();
	cout<<endl;
	cout<<"2nd ";
	
	Student std1("Neel",5,56,&Add);
	std1.displaystd();
	std1.grade();
	
	return 0;
}
