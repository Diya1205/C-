//WAP to create simple calculator using class

#include<iostream>
using namespace std;

class calculator{

	public:	
	int num1,num2;
};
int main()
{

	calculator obj;
	cout<<"Enter num1:";
	cin>>obj.num1;
	cout<<"Enter num2:";
	cin>>obj.num2;
	
	cout<<"ADD:"<<" "<<obj.num1<<" "<<"+"<<" "<<obj.num2<<" "<<"="<<" "<<obj.num1+obj.num2<<endl;
	cout<<"SUB:"<<" "<<obj.num1<<" "<<"-"<<" "<<obj.num2<<" "<<"="<<" "<<obj.num1-obj.num2<<endl;
	cout<<"MUL:"<<" "<<obj.num1<<" "<<"*"<<" "<<obj.num2<<" "<<"="<<" "<<obj.num1*obj.num2<<endl;
	cout<<"DIV:"<<" "<<obj.num1<<" "<<"/"<<" "<<obj.num2<<" "<<"="<<" "<<obj.num1/obj.num2<<endl;
	return 0;
}
