/*2. Write a program of Addition, Subtraction, Division, Multiplication
usingconstructor.*/


#include<iostream>
using namespace std;

class Calculation{
	     float n1,n2;
	public :
		Calculation(){ //create constructor
		cout<<"enter number 1:"<<endl;
		cin>>n1;
		
		cout<<"enter number 2 : "<<endl;
		cin>>n2;
			
		}
	add(){ //addition
		
		cout<<"addition of number is : "<<n1+n2<<endl;
	}
	
	sub(){ //substraction
		
			cout<<"subtraction of number is : "<<n1-n2<<endl;
		
	}
	multiplication(){ //multiplication
		
			cout<<"multiplication of number is : "<<n1*n2<<endl;
	}
	division(){ //division
		if (n2 != 0) {
            cout<<"division of number is : "<< n1/ n2 <<endl;
        } else {
            cout << "Error: Division by zero" << endl;
            
        }
	}
	
};


main(){
	Calculation obj;
	obj.add();
	obj.sub();
	obj.multiplication();
	obj.division();
	
}
