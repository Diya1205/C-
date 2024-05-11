//Write a C++ Program to show access to Private Public and Protected using
//Inheritance
#include<iostream>
using namespace std;

class A
{
	private:
		int a = 10;

	public:
		int b = 20;

	protected:
		int c = 30;
	public:
//	function create
	void xyz()
	{
		cout<<"private: a "<<a<<endl;
		cout<<"public: b "<<b<<endl;
		cout<<"protected: c "<<c<<endl;
	}	
};

class B:public A
{
	public:
//	function create
	void abc()
	{
		cout<<"Pubic: b "<<b<<endl;
		cout<<"Protected: c "<<c<<endl;
	}
};

int main()
{
	B obj;
	obj.xyz();
	obj.abc();
}
