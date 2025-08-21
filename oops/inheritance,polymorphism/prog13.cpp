/*13.Write a program to find the max number from given two
numbersusing friend function*/


#include<iostream>
using namespace std;

class Max{
	
	//private data member
	private:
		int a,b;
		public:
			//public function to get data from user 
			getUser(){
				
				// user input
				cout<<"enter first number : "<<endl;
				cin>>a;
				
				cout<<"enter second number :"<<endl;
				cin>>b;
				
				
			}
	//declared friend class
	friend class CalculateMax;
};
 
 
class CalculateMax{
	public:
		maxnum(Max& t){
			//condition for maximum number 
			
			if(t.a>t.b){
				
				cout<<t.a<<endl <<" is maximum"<<endl;
			}
			else
			{
				
				cout<<t.b<<endl <<"is maximum"<<endl;
			}
			
			
			
		}
		
	
}; 

main(){
	
	//object create and calling 
	Max obj;
	obj.getUser();
	CalculateMax obj1;
	obj1.maxnum(obj);

	
	
}

