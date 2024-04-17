//Write a program to find the max number from given two numbers
//using friend function

#include<iostream>
using namespace std;

class Test 
{
	public:
  		int num1, num2;

   		void input() 
		{
       		cout << "Enter first numbers: ";
       		cin>>num1;
       		cout<<"Enter Second number: ";
       		cin>>num2;
   		}

   friend void max_number(Test obj);
};

void max_number(Test obj) 
{
   if (obj.num1 > obj.num2) 
    {
       cout << "Largest is:" << obj.num1;
    } 
   else 
    {
       cout << "Largest is:" << obj.num2;
    }
}

int main() 
{
   Test obj;
   obj.input();
   max_number(obj);
   return 0;
}
