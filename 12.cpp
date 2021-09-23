// 12. Write a c++ Program to print ODD numbers from 1 to 10
#include <iostream>
using namespace std;
int main(){

	cout <<"[*] odd numbers from 1 to 10\n\n";
	for (int num=1 ;num<=10;num++){

		if(num%2 != 0)
			cout<<"===> "<<num<<" <==="<<endl;
	}
	cout<<endl;

}