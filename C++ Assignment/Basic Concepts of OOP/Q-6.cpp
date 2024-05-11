/*Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.
*/
#include <iostream>
#include<string>

using namespace std;

class Person
{

	private:
		string name;
		string country;
		int age;

	public:
	//Set Name function 
		void SetName(string n)
		{
			name = n;
		}
	//Set Country function 
		void SetCountry(string c)
		{
			country = c;
		}
	//Set Age function 
		void SetAge(int a)
		{
			age = a;
		}
	//get function create
		string GetName()
		{
			return name;
		}
	//get function create
		string GetCountry()
		{
			return country;
		}
	//get function create
		int GetAge()
		{
			return age;
		}
};
 main()
{
	Person obj;

	obj.SetName("Diya Patil");
	obj.SetCountry("India");
	obj.SetAge(19);

	cout<<obj.GetName()<<endl;
	cout<<obj.GetCountry()<<endl;
	cout<<obj.GetAge()<<endl;
	
	
}
