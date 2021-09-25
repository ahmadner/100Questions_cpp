// 26. Write C++ Program to check whether a number is prime number or not

#include<iostream>
using namespace std;
int main(){

	int inputNum,halfNum,isPrime=1;

	cout<<"[*] check is prime number or not\n\n";

	cout<<"enter the number: ";cin>>inputNum;

	halfNum=inputNum/2;

	for (int i=2;i<=halfNum;i++){
		if (inputNum%i==0){
			cout<<"\n[*]number "<<inputNum<<" is NOT a prime number\n\n";
			isPrime=0;
			break;
		}
	}
	if (isPrime==1)
		cout<<"\n[*]number "<<inputNum<<" is a prime number\n\n";
}
