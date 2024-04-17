/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/
#include<iostream>
using namespace std;

class Cricketer{
	public:
		
		void inputData(int Total_runs)
		{
			cout<<"Total Runs: "<<Total_runs<<endl;
		}
};

class batsman : public Cricketer{
	public:
		
		float Average_runs;
		int Total_runs;
		int best_performance;
		
		float calculateAverageRuns()
		{
			return Total_runs / 50.0;
		}
		void diplayData()
		{
			cout<<"Avg Runs: "<<Average_runs<<endl;
			cout<<"best performance: "<<best_performance<<endl;
			
		}
};

int main()
{
	batsman obj;
	obj.inputData(100);
	obj.calculateAverageRuns();
	obj.diplayData();
	return 0;
}
