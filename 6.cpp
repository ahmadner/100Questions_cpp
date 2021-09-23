/* 6. Write C++ Program to Read Three Numbers And Print
The Biggest Of Given Three Numbers.*/

#include <iostream>
using namespace std;

int main(){

	float num1,num2,num3,big=0;

	cout<<"enter #1 number :";
	cin>>num1;
	cout<<"enter #2 number :";
	cin>>num2;
	cout<<"enter #3 number :";	
	cin>>num3;


	if (num1 > num2 )
		big = num1;
	else 
		big = num2;

	if (num3 > big)
		big = num3;

	cout<<"\nBiggest number is : "<<big<<endl;

}

