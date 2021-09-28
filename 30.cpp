//30. Write C++ program to find sum of series x^1+x^2+......+x^n.

/*
output:
[*] find sum of series x^1+x^2+......+x^n

[+] Enter the X number: 5
[+] Enter the N number: 3

==> 5^1 + 5^2 + 5^3 = 156
*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){

	int inputNum,end,res=1;

	cout<<"[*] find sum of series x^1+x^2+......+x^n\n\n";

	cout<<"[+] Enter the X number: ";cin>>inputNum;
	cout<<"[+] Enter the N number: ";cin>>end;

	cout<<"\n==> ";
	for (int i=1;i<=end;i++){
		res+=pow(inputNum,i);
		cout<<inputNum<<"^"<<i;
		if (i==end)
			cout<<" = ";
		else
			cout<<" + ";
	}
	cout<<res<<"\n\n";
}