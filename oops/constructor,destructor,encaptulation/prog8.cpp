/*Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation*/

#include<iostream>
using namespace std;

class Student{
	private : //private datamember 
	   string name;
	   int classname;
	   int rollnumber;
	   float marks;
	public://grade calculation
	    calculateGrade(){
	       if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }
    
   		
		   
		displayInfo(){ //member function to display 
	    cout << "Name: " << name << endl;
        cout << "Class: " << classname << endl;
        cout << "Roll Number: " << rollnumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
		}   
};

main(){
	  string name;
	   int classname;
	   int rollnumber;
	   float marks;
	Student obj;
	
	cout<<"enter name:"<<endl;
	cin>>name;
	
	cout<<"enter classname:"<<endl;
	cin>>classname;
	
	cout<<"enter rrollnumber:"<<endl;
	cin>>rollnumber;
	
	
	cout<<"enter marks:"<<endl;
	cin>>marks;
	
	obj.displayInfo();
	obj.calculateGrade();
	
}
