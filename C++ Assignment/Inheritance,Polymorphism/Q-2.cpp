//Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;

class Rectangle{

	public:
		int l;
		int b;

		void input()
		{
			cout<<"Enter length: ";
			cin>>l;
			cout<<"Enter breadth: ";
			cin>>b;
		}
};

class calculation : public Rectangle{

	public:

		float area()
		{
			return l * b;
		}
		
};
int main()
{
	calculation obj;
	obj.input();
	cout<<"Area of Rectangle:"<<obj.area()<<endl;
}
