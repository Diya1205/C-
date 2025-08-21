/*Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.
*/
#include <iostream>
#include<string>

using namespace std;

//class create

class Person
{
//	Access Specifier
	private:
		string name;
		string country;
		int age;
//	Access Specifier
	public:
//		set function create
		void SetName()
		{
		     cout<<"Enter name: "<<endl;
		     cin>>name;
		}
//		set function create
		void SetCountry()
		{
			 cout<<"Enter country: "<<endl;
		     cin>>country;
		}
//		set function create
		void SetAge()
		{
			 cout<<"Enter age: "<<endl;
		     cin>>age;
		}
//		get function create
		string GetName()
		{
			cout<<"name :"<<name<<endl;
		}
//		get function create
		string GetCountry()
		{
			cout<<"country name : "<<country<<endl;
		}
//		get function create
		int GetAge()
		{
			cout<<"age  : "<<age<<endl;
		}
};
int main()
{
//	object create 
	Person obj;
//	set function call
	obj.SetName();
	obj.SetCountry();
	obj.SetAge();
	
//	get function call
	obj.GetName();
	obj.GetCountry();
	obj.GetAge();
	
}
