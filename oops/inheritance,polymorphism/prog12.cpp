/*12.Write a program to swap the two numbers using friend
functionwithout using third variable*/

#include<iostream>

using namespace std;

class A{
	
	//private variable
	private:
	int a,b;
	//public function
	public:
	sett(){
	
    //user input
	cout<<"enter first num:";
	cin>>a;
	//user input
	cout<<"enter second num";
	cin>>b;
	//befor swapping 
    cout<<"before swaping\n"<<a<<b;

}
//declared class A is friend of class B
	friend class B;
};

class B{
	public:
	show(A& t){   //GIVING REFERENCES
		
		
		//SWAPPING WITHOUT THIRD VARIABLE 
		t.a = t.a + t.b;
		t.b = t.a - t.b;
		t.a = t.a - t.b;
		//OUTPUT
		cout<<"after swaping:"<<t.a<<t.b;
	}
		
};

main(){
	//OBJECT CREATE
	A obj;

	B obj1;
	obj.sett();
	obj1.show(obj);
	
	
}
