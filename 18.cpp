// 18. Write C++ Program to accept two numbers and print the sum of given two numbers by using pointers
#include <iostream>
using namespace std;
int main(){

	int num1,num2,sumRes,*ptr1,*ptr2,*ptrRes;
	cout<<"[*] sum of given two numbers by using pointers\n";
	cout<<"\nenter first number: ";cin>>num1;
	cout<<"enter second number: ";cin>>num2;

	ptr1=&num1;
	ptr2=&num2;
	sumRes=*ptr1+*ptr2;
	ptrRes=&sumRes;

	cout<<*ptr1<<" + "<<*ptr2<<" = "<<*ptrRes<<endl;
}
