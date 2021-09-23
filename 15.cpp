// 15. Write C++ Program to check whether a given number is perfect or not.
#include <iostream>
using namespace std;
int main() {
	long inputNum,checkNum=0;
	cout <<"[*] check whether a given number is perfect or not\n\n";
	cout<<"Enter the number: ";cin>>inputNum;

	for (long i=1;i<=(inputNum/2);i++)
		if (inputNum%i==0)
			checkNum+=i;

	if (checkNum == inputNum)
		cout<<"\n[*] number "<<inputNum<<" is perfect\n\n";
	else
		cout<<"\n[*] number "<<inputNum<<" is NOT perfect\n\n";
}
