//Write a program of to swap the two values using templates

#include <iostream>
using namespace std;

template <class T>

T swap(T a,T b )
{
	cout<<"before swap:"<<a<<" "<<b<<endl;
	a = a+b;
	b = a-b;
	a = a-b;
	cout<<"After swap: "<<a<<" "<<b<<endl;
} 

int main()
{
	swap(2,3);
	return 0;
}
