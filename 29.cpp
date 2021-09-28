//29. Write a C++ program to find the triple root of a number using function
/*
output: 

[*]get triple root of a number

Enter the number: 12

the triple root is ==>  2.28943
*/
#include<iostream>
#include<math.h> // need math lib
using namespace std;

float getRoot(float num){
	return cbrt(num);
}

int main(){

	float inputNum;
	cout<<"[*]get triple root of a number\n\n";
	cout<<"Enter the number: ";cin>>inputNum;
	cout<<"\nthe triple root is ==>  "<<getRoot(inputNum)<<"\n\n";
}