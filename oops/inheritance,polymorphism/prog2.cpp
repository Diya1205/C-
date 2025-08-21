/*2. Write a C++ Program to find Area of Rectangle using inheritance*/


#include<iostream>

using namespace std;

class areaOfRectangle{ //create main class 
	public:
		int h,w;
		calcareas(){ // take input from user for height and width
			cout<<"enter height: "<<endl;
			cin>>h;
			cout<<"enter width:"<<endl;
			cin>>w;
			
		}
	
	
};

class area:public areaOfRectangle{  // create child class 
	public:
		float areas;
		 calcarea(){ 
		 //calculate area 
		 	areas = 0.5*h*w;
		 	cout<<"area of rectangle is : "<<areas;
		 	
		 }
		 

};

main(){
	//create object and call object 
	area obj;
	obj.calcareas();
	obj.calcarea();
	 
}
