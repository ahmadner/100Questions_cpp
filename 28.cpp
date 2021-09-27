// 28. Write C++ program to find sum of series 1 + 2 + 3 +......+ n

/*
output: 

[*]find factors of a number

enter the number: 7

==> 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28
*/

#include<iostream>
using namespace std;
int main(){

	int i,inputNum,sum=0;
	cout<<"[*]find factors of a number\n\n";
	cout<<"enter the number: ";cin>>inputNum;
	cout<<"\n==> ";

	for (i=1;i<=inputNum;i++){ // while (true){}
		sum+=i;  // sum = sum+i
		if (i!=inputNum)
			cout<<i<<" + ";
		else
			cout<<i<<" = "<<sum<<"\n\n";
	}
}
