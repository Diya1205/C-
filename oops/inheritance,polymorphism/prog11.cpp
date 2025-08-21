/*11.Write a program to calculate the area of circle, rectangle and
triangleusing Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area*
breadthCircle: Pi * Area
*Area*/


#include<iostream>
using namespace std;


class Area{
	public:
		int length,breath,l,w,area,r;
		//create calculatearea fun as samename for all 
		CalculateArea(int  length,int breath){
		
			//user input
			cout<<"Enter value of length"<<endl;
			cin>>l;
			
			cout<<"Enter value of breath"<<endl;
			cin>>w;
			//calculate area
			 area =  l*w;
			 cout<<"area of rectangle is "<<area<<endl;
			
			
		}
	 //same function name as above
	 	CalculateArea(int  length,int breath,char triangle){
		
			//user input
			cout<<"Enter value of length"<<endl;
			cin>>l;
			
			cout<<"Enter value of breath"<<endl;
			cin>>w;
			//calculate area
			 area =  0.5*l*w;
			 cout<<"area of triangle is "<<area<<endl;
			
			
		}
		
	CalculateArea(int radius){
		
			
			cout<<"Enter value of radius"<<endl;
			cin>>r;
			
		
			 area =  3.14*r*r;
			 cout<<"area of circle is "<<area<<endl;
			
			
		}	
	
};

main(){
	//create object
	 Area obj;
	 //call object with different argument
	 obj.CalculateArea(20,30);
	 obj.CalculateArea(5,6,'t');
	  obj.CalculateArea(5);
	 
	
} 
