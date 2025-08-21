/*7. Write a C++ Program to illustrates the use of Constructors in multilevel
inheritance*/

#include<iostream>
using namespace std;

class Vehicle{
	public:
		int wheels;
		//default constructor
	Vehicle(){
		
		cout<<"welcome to the world of vehicle"<<endl;
		
	}
	
};

//multilevel inheritance
class Car:public Vehicle{
	public:
		//default constructor
		Car(){
			cout<<"car have how many wheels"<<endl;
			cin>>wheels;
			
		}
	
};
//multilevel inheritance
class Truck:public Car{
	public:
		Truck(){
			cout<<"truck have how many wheels"<<endl;
			cin>>wheels;
			
			
		}
	
	
};


main(){
	//only need to create obj no need to call object in constructor
	Truck obj;
}
