/*8. Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/


#include<iostream>
using namespace std;

class Calculator{
	public:
		
		//addition
		calculate(int a,int b){
			
			cout<<"enter value 1:"<<endl;
			cin>>a;
			
			cout<<"enter value 2:"<<endl;
			cin>>b;
			
			cout<<"sum is :"<<a+b<<endl;
		}
		
		calculate(int a,int b,int c){
			
			//substraction
			cout<<"substraction is :"<<a-b-c<<endl;
		}
		//multiplication
		calculate(float a,float b,float c,float d){
			
			
			cout<<"multiplication is :"<<a*b*c*d<<endl;
		}
		//division
			calculate(float a,float b){
				if(b!=0){
						
			cout<<"division is :"<<a/b<<endl;
					
				}
				else{
					
					cout<<"not possible divison by zero"<<endl;
				}
			
		
		}
		
		
};

main(){
	Calculator obj;
	obj.calculate(3,4);
	obj.calculate(3,6,5);
	obj.calculate(3.5,3.0,2.5,2.4);
	obj.calculate(234,12);
	
}
