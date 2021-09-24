// 24. Write C++ Program to find area of a triangle when there sides are given.

#include<iostream>
#include<math.h> // need math lib
using namespace std;
int main (){

	float side1,side2,side3,sideSum,area;
	cout<<"[*] area of a triangle with 3 sides\n\n";
	cout<<"enter length of the first side: ";cin>>side1;
	cout<<"enter length of the second side: ";cin>>side2;
	cout<<"enter length of the third side: ";cin>>side3;
	
	// The sum of two side lengths has to exceed the length of the third side
	if ((side1+side2)<=side3||(side2+side3)<=side1||(side1+side3)<=side2){
		cout<<"\n\n[!] The sum of two side lengths has to exceed the length of the third side.\n\n";
		return 0;
	}
	else{
		sideSum=(side1+side2+side3)/2;
		area=sqrt(sideSum*((sideSum-side1)*(sideSum-side2)*(sideSum-side3)));
		cout<<"\nArea= "<<area<<"\n\n";
	}
}
