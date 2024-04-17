/*Write a program of Addition, Subtraction, Division, Multiplication using
constructor.
*/

#include<iostream>
using namespace std;

class calculator
{

	private:
		int num1;
		int num2;

	public:

		calculator(int a,int b)
		{
			num1 = a;
			num2 = b;
			
			cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
			cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
			cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
			cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
		}
};

int main()
{
	int num1,num2;
	
	cout<<"Enter First Number:";
	cin>>num1;
	cout<<"Enter Secound Number:";
	cin>>num2;
	
	calculator obj(num1,num2);
	
	return 0;
}
