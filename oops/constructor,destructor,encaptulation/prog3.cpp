/*3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables*/

#include<iostream>

using namespace std;

class Car{
	private:
		//private variable
		string car_company;
		string car_model;
		int car_year;
		public:
		//get method 	
		Get(string cmp,string model,int year ){
			
			 car_company = cmp;
			 car_model = model;
			 car_year = year;
			 
			cout<<"enter company name:"<<endl;
			cin>>car_company;
			
			cout<<"enter model name:"<<endl;
			cin>>car_model;
			
			cout<<"enter year :"<<endl;
			cin>>car_year;
					 
		}
		//set method
		Set(){
			
			cout<<"company name : "<<car_company<<endl;
			cout<<"model number : "<<car_model<<endl;
			cout<<"manfacturing year  : "<<car_year<<endl;
			
		}
	
};

main(){
	
	Car obj;
	obj.Get("rtrr","ferhrt",2022);
	obj.Set();
}
