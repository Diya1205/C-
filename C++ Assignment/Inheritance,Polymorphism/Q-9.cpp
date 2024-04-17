//Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;

class Addition{
	public:
		int a;

	Addition(int c)
	{
		a=c;
	}

	int operator +(Addition obj)
	{
		return a+obj.a;
	}
};


int main()
{
	Addition obj(10);
	Addition obj1(12);
	cout<<obj+obj1;
	return 0;
}
