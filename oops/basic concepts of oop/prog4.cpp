/*4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.*/

#include<iostream>

using namespace std;

class Circle{ //class 
	private : 
	    float radius;
	public: 
	//function
	     circleArea(){
	     	 //user input
	     	 cout<<"enter value of radius : "<<endl;
	     	 cin>>radius;
	     	 //radius
	     	 cout<<"area of circle is : "<<3.14*radius*radius<<endl;
	     	 
		 }    
	      // function
	    circleCircumference(){
	    	
	    	cout<<"circumference of circle is : "<<2*3.14*radius;
		} 
};

main(){
  	//object create
 	Circle obj;
 	obj.circleArea();
	obj.circleCircumference();	
}
