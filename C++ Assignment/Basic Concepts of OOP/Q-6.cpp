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

		void Name(string n)
		{
			name = n;
		}

		void Country(string c)
		{
			country = c;
		}

		void Age(int a)
		{
			age = a;
		}

		string GetName()
		{
			return name;
		}

		string GetCountry()
		{
			return country;
		}

		int GetAge()
		{
			return age;
		}
};
int main()
{
	Person obj;

	obj.Name("Diya Patil");
	obj.Country("India");
	obj.Age(19);
	
	cout<<obj.GetName()<<endl;
	cout<<obj.GetCountry()<<endl;
	cout<<obj.GetAge()<<endl;
	
	return 0;
}
