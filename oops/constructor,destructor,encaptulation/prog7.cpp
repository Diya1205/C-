/*7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.*/

#include<iostream>
using namespace std;

class Date{
	
	private:
		int day,month,year;
		
	public:
	    getDate(){
	                
	            cout << "Input day: ";   // Prompt user to input day
                cin >> day;              // Input for day
    			cout << "Input month: "; // Prompt user to input month
    			cin >> month;            // Input for month
   				cout << "Input year: ";  // Prompt user to input year
    			cin >> year;             // Input for year

		}
		
		setDate(){
			//display date
                cout << "Date: " << day << "/" << month  << "/" << year << endl;			
		}	
		
		vaalidateDate(){
			   if (month < 1 || month > 12)
            return false;

        // Check if the day is valid
        if (day < 1 || day > 31)
            return false;

        // Check for specific month-day combinations that are invalid
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
            return false;

        if (month == 2) {
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                if (day > 29)
                    return false;
            } else {
                if (day > 28)
                    return false;
            }
        }

        // Date is valid
        return true;
    }
			
		
	
};


main(){
	Date obj;
	obj.getDate();
	obj.setDate();
	
	   if (obj.vaalidateDate())
        cout << "The date is valid." << endl;
    else
        cout << "The date is invalid." << endl;
	
}

