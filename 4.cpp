// Write C++ program to swap two numbers using macros

#include <iostream>
using namespace std;
int main (){

int num1,num2;

cout<<"Enter 1# number:";
cin>>num1;

cout<<"Enter 2# number:";
cin>>num2;

cout<<"\n[*] before swap\n";

cout<<"number1 ="<<num1<<endl<<"number2 ="<<num2;

swap(num1,num2);

cout<<"\n\n[*] after swap\n";

cout<<"number1 ="<<num1<<endl<<"number2 ="<<num2<<endl;


}
