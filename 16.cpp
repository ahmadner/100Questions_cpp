// 16. Write C++ Program to print table of any number.

#include <iostream>
using namespace std;
int main(){
	int inputNum;
	cout <<"[*] print table of any number\n\n";
	cout <<"Enter a number: ";cin>>inputNum;
	cout<<"\n";
	for(int i=1;i<=10;i++){
		cout<<i<<" * "<<inputNum<<" = "<<i*inputNum<<endl;
	}
}