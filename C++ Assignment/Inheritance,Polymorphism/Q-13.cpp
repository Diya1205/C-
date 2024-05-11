/* Write a program to find the max number from given two numbers
using friend function */

#include<iostream>
using namespace std;

class Test 
{
	public:
  		int num1, num2;
//		function create
   		void input() 
		{
       		cout << "Enter first numbers: ";
       		cin>>num1;
       		cout<<"Enter Second number: ";
       		cin>>num2;
   		}
//	friend function
   friend void maxnum(Test obj);
};

//function create
void maxnum(Test obj) 
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
main() 
{
   Test obj;
   obj.input();
//   friend function call
   maxnum(obj);
}
