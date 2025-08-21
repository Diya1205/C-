/*6. Write a C++ Program to show access to Private Public and Protected
using Inheritance*/

#include<iostream>
using namespace std;

class Base{
	private:
		int privateVar;
	protected:
	    int protectedVar;
	public:
	    int publicVar;		
	
	   Base(){
	   	    privateVar = 10;
	   	    protectedVar=20;
	   	    publicVar = 30;
	   	  }
	   	
};

class Derived:public Base{
	
	public:
    void accessBaseMembers() {
        // Accessing public member of the Base class
        cout << "Accessing public variable of Base class: " << publicVar << endl;

        // Accessing protected member of the Base class
        cout << "Accessing protected variable of Base class: " << protectedVar << endl;

        // Private members of the Base class are not accessible in the derived class
      }
	
	
};

main(){
	
	 Derived derivedObj;
    derivedObj.accessBaseMembers();
    
      cout << "Accessing public variable of Base class from main: " << derivedObj.publicVar << endl;
	
}
