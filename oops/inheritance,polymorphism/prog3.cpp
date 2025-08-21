/*3. Create a class person having members name and age. Derive a class
student having member percentage. Derive another class teacher
having member salary. Write necessary member function to initialize,
read and write data. Write also Main function (Multiple Inheritance)*/

#include<iostream>
using namespace std;

class Person{ //base class person
	public:
		
		string name;
		int age;
		data(){
		
		//read data
		cout<<"enter name:"<<endl;
		cin>>name;
		cout<<"enter age :"<<endl;
		cin>>age;
		//write data 
    	cout<<"name : "<<name<<endl;
	    cout<<"age : "<<age<<endl;
} 
};

class Student:public Person{ //class student is inherited class from person
	public :
		float percentage;
	    
		personData(){
			
			cout<<"student data "<<endl;
			//read data
			cout<<"Enter percentage of student:"<<endl;
			cin>>percentage;
			//write data
			cout<<"student percentage is : "<<percentage<<endl ;
			
		} 
	
	
};

class Teacher:public Person{ //class teacher is a inherited class from person
	   public :
	   	  
            int salary;
			teacherData(){
				//teacher data read
				 cout<<"teacher data "<<endl;
				
				 cout << "Enter salary: "<<endl;
                 cin >> salary;
                 
                 //write data
                 cout<<"salary is : "<<salary<<endl;
            	
            	
			}	   	   
	   	 
	
};

main(){
	//object create and call for student
	Student obj;
	obj.data();
	obj.personData();
   //object create and call for teacher 
	Teacher obj1;
    obj1.data();
	obj1.teacherData();
	
	
}
