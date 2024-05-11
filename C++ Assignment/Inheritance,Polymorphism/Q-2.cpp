//Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;

class Rectangle{

	public:
		int length;
		int breadth;

		void input()
		{
			cout<<"Enter length: ";
			cin>>length;
			cout<<"Enter breadth: ";
			cin>>breadth;
		}
};
//derived class
class calculation : public Rectangle{

	public:
//		function create
		float area()
		{
			return length * breadth;
		}
		
};
int main()
{
	calculation obj;
	obj.input();
	cout<<"Area of Rectangle:"<<obj.area()<<endl;
}
