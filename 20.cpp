// 20. Write a c++ Program to accept any single digit number and print it in words.

# include <iostream>
using namespace std;
int main( )
{
	int num;
	cout<<"enter a number :";
	cin>>num;
	switch(num){

		case 0: cout<<"\nZERO\n";break;
		case 1: cout<<"\nONE\n";break;
		case 2: cout<<"\nTWO\n";break;
		case 3: cout<<"\nTHREE\n";break;
		case 4: cout<<"\nFOUR\n";break;
		case 5: cout<<"\nFIVE\n";break;
		case 6: cout<<"\nSIX\n";break;
		case 7: cout<<"\nSEVEN\n";break;
		case 8: cout<<"\nEIGHT\n";break;
		case 9: cout<<"\nNINE\n";break;
		default:
			cout<<"please enter the number between 0 and 9\n";
	}
}
