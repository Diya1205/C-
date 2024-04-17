/*Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.*/

#include<iostream>
#include<string>
using namespace std;

class Car
{

	private:
		string company;
		string model;
		int year;

	public:

		void SetCompany(string c)
		{
			company = c;
		}

		void SetModel(string m)
		{
			model = m;
		}

		void SetYear(int y)
		{
			year = y;
		}

		string GetCompany()
		{
			return company;
		}

		string GetModel()
		{
			return model;
		}

		int GetYear()
		{
			return year;
		}
};
int main()
{

	Car obj;
	
	obj.SetCompany("Mahindra");
	obj.SetModel("Thar");
	obj.SetYear(2010);
	
	cout<<obj.GetCompany()<<endl;
	cout<<obj.GetModel()<<endl;
	cout<<obj.GetYear()<<endl;
	
	return 0;
}
