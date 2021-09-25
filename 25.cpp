// 25. Write C++ Program to find whether a number is divisible by ‘11’ or not.

#include<iostream>
using namespace std;
int main(){
	int inputNum;
	cout<<"[*]Divisibility test for 11\n\n";

	cout<<"enter the number: ";cin>>inputNum;

	if (inputNum%11==0){
		cout<<"\n\n[*]The number is divisible\n\n";
		return 0;
	}
	else{
		cout<<"\n\n[*]The number is not divisible\n\n";
		return 0;
	}

}
