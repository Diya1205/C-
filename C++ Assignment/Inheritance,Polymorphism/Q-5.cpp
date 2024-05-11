/*5. Assume that the test results of a batch of students are stored in three
different classes. Class Students are storing the roll number. Class Test
stores the marks obtained in two subjects and class result contains the
total marks obtained in the test. The class result can inherit the details
of the marks obtained in the test and roll number of students.
(Multilevel Inheritance)*/

#include<iostream>
using namespace std;

class Student{//create student class
	public:
		int RollNumber; //storing rollnumber
		number(){
			//display rollnumber
			cout<<"Enter student RollNumber : "<<endl;
			cin>>RollNumber;
			
		}
};
class Test:public Student{ 
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

class Result:public Test{ 
	        int totalMarks; //storing total marks
	      public:
	      	calculateTotal(){
	      		
	      	totalMarks = marks1sub + marks2sub;
	      	//displaying total marks
	      	cout<<"total marks of subject is : "<<endl<<totalMarks<<endl; 		
		}	
};

main(){
	Result obj;
	obj.number();
	obj.marks();
	obj.calculateTotal();	
}
