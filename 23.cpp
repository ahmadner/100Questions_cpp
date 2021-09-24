// 23. Write C++ Program to calculate and print the sum of even and odd integers of the first n natural numbers.

/*
OUTPUT

[*]calculate even and odd from user input
enter the number: 9
sum of even numbers from 1 to 9 is :   20
sum of ood numbers from 1 to 9 is :   25
*/
#include<iostream>
using namespace std;
int main(){

	int toNum,evenSum=0,oddSum=0;

	cout<<"[*]calculate even and odd from user input\n\n";
	cout<<"enter the number: ";cin>>toNum;
	for(int i=1;i<=toNum;i++){

		if(i%2==0)
			evenSum+=i;
		else if (i%2!=0)
			oddSum+=i;
	}
	cout<<"\nsum of even numbers from 1 to "<<toNum<<" is :   "<<evenSum<<"\n";
	cout<<"\nsum of ood numbers from 1 to "<<toNum<<" is :   "<<oddSum<<"\n";
}
