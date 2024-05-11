#include<iostream>
using namespace std;

class calculator{
public:
    int num1,num2;

    // get input from the user
    void getInput() {
        cout<<"Enter num1:";
        cin>>num1;
        cout<<"Enter num2:";
        cin>>num2;
    }
    void displayResults() {
        
        cout<<"ADD: "<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;// Addition
        
        cout<<"SUB: "<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;// Subtraction
       
        cout<<"MUL: "<<num1<<" * "<<num2<<" = "<<num1*num2<<endl; // Multiplication
        
        cout<<"DIV: "<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;// Division
    }
};
int main() {
    calculator obj;
    obj.getInput();
    obj.displayResults();
    return 0;
}

