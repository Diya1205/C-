/*Write a program to find the multiplication values and the cubic values using
inline function*/

#include<iostream>
using namespace std;

// Inline function to find multiplication of two numbers
inline int multiplication(int a,int b)
{
	return a*b;
}

// Inline function to find cubic value of three numbers
inline int cubic(int a,int b,int c)
{
	return a*b*c;
}

int main()
{
	cout<<"multiplication Values: "<<multiplication(10,10)<<endl;
	cout<<"Cubic values: "<<cubic(10,10,10);
	return 0;
}
