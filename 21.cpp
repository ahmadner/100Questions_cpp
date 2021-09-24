// 21. Write C++ program to reverse a number.
#include<iostream>
using namespace std;
int main()
{
	long num,rev=0,dot;
  
	cout<<"[*] program to reverse a number: ";cin>>num;
	while (num!=0){

		dot = num%10;
		rev = (rev*10)+dot;
		num=num/10;
	}
	cout<<"\n\nreverse Number is : "<<rev<<"\n\n";
}
