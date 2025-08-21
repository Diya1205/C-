/*4. Write a C++ Program display Student Mark sheet using Multiple inheritance*/

#include<iostream>
using namespace std;

class Student{
		public:
		int RollNumber; //storing rollnumber
		 string Name;
		number(){
			//display rollnumber
			cout<<"Enter student RollNumber : "<<endl;
			cin>>RollNumber;
			
			cout<<"Enter student Name : "<<endl;
			cin>>Name;
		}
	
	
};

class Test{
	public:
	    	//storing marks of subject
	    	int marks1sub; 
	    	int marks2sub;
	    marks(){
	    	
	    	//display marks of subjects
	    	cout<<"Enter marks for 1st subject:"<<endl;
	    	cin>>marks1sub;
	    	
	    	cout<<"Enter marks for 2nd subject:"<<endl;
	    	cin>>marks2sub;
	    	
	  	}	
	    	
	
};

class Marksheet:public Student,public Test{
	
	    int totalMarks; //storing total marks
	      public:
	      	calculateTotal(){
	      		
	      		totalMarks = marks1sub + marks2sub;
	      		//displaying total marks
	      		cout<<"total marks of subject is : "<<endl<<totalMarks<<endl;
	      		
	      		cout << "Percentage: " << (totalMarks / 2.0) << "%" << endl; 
	      		
		}

};

main(){
	

	Marksheet obj;
	obj.number();
	obj.marks();
	obj.calculateTotal();	
}
