/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/

#include<iostream>
#include<string>
using namespace std;

class person
{
	public:
		string name;
		int age;

		void readperson()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter Age: ";
			cin>>age;
		}

		string writeperson()
		{
			return name;
		}

		int writepersonAge()
		{
			return age;
		}
};

class Student : public person{
	public:
		float percentage;

		void readStudent()
		{
			cout<<"Enetr percentage: ";
			cin>>percentage;
		}

		float writepercentage()
		{
			return percentage;
		}
};

class Teacher : public Student{
	public:
		int salary;

		void readTeacher()
		{
			cout<<"Enter salary: ";
			cin>>salary;
		}

		int writesalary()
		{
			return salary;
		}
};

int main()
{
	Teacher obj;
	
	obj.readperson();
	obj.readStudent();
	obj.readTeacher();
	
	cout<<"Name: "<<obj.writeperson()<<endl;
	cout<<"Age: "<<obj.writepersonAge()<<endl;
	cout<<"Percentage: "<<obj.writepercentage()<<endl;
	cout<<"Salary: "<<obj.writesalary()<<endl;
	
	return 0;
}
