/*1. Assume a class cricketer is declared. Declare a derived class batsman
from cricketer. Data member of batsman. Total runs, Average runs and
best performance. Member functions input data, calculate average
runs, Displaydata.(Single Inheritance)*/
 
#include<iostream>
using namespace std;

class Cricketer{
	
	public:
		string name;
		int age;
		
		inputData(){
			cout<<"enter name of bats man :"<<endl;
			cin>>name;
			
			cout<<"enter age : "<<endl;
			cin>>age;
			
		}
	
	
}; 

class Batsman:public Cricketer{
	     
	     public :
	     	int TotalRuns;
	     	float AverageRuns;
	     	int BestPerfomance;
	     	
	     	CalculateAverage(){
	     		
	     		cout << "Enter total runs: ";
                cin >> TotalRuns;
                cout << "Enter best performance: ";
                cin >> BestPerfomance;
       
	     		
	     		AverageRuns = TotalRuns/5;
	     		
	     		
			 }
	
	        DisplayData(){
	        	
	        	cout << "Total Runs: " << TotalRuns << endl;
                cout << "Average Runs: " << AverageRuns << endl;
                cout << "Best Performance: " << BestPerfomance << endl;
	         	
			}
	
};

main(){
	
	Batsman obj;
	obj.inputData();
	obj.CalculateAverage();
	obj.DisplayData();
	
	
}
