// 22. Write C++ program to find largest number of a list of numbers entered through keyboard
#include<iostream>
using namespace std;
int main(){

	int numCount;
	float checkNum,largNum=0;
	cout<<"[*] find largest number\n\n";
	cout<<"how many numbers: ";cin>>numCount;
	cout<<endl;
	for (int num=1;num<=numCount;num++){
		cout<<"enter number #"<<num<<" : ";cin>>checkNum;
		if (checkNum>largNum)
			largNum=checkNum;
	}
	cout<<"\nthe largest number is: "<<largNum<<endl<<endl;
}
