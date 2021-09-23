// 11. Write a program to swap to numbers using a third variable called temp.

#include <iostream>
using namespace std;
int main(){

	int num1,num2,temp=0;

	cout<<"enter first number: ";cin>>num1;
	cout<<"enter second number: ";cin>>num2;

	cout<<"\n[*] Before\n";
	cout<<"first number = "<<num1<<endl;
	cout<<"second number = "<<num2;

	cout<<"\n\n[*] After\n";
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout<<"first number = "<<num1<<endl;
	cout<<"second number = "<<num2<<"\n\n";

	cout<<"<===========END===========>\n";

}