/* Write C++ Program To Accept Student Roll No, Marks
in 3 Subjects and Calculate Total, Average and Print it.*/

#include <iostream>
using namespace std;

int main(){


	float mark1,mark2,mark3,sum,avg;

	cout <<"[*]  Student Roll numbers\n";

	cout <<"\n[*]  1# Mark: ";
	cin>>mark1;
	cout <<"[*]  2# Mark: ";
	cin>>mark2;
	cout <<"[*]  3# Mark: ";
	cin>>mark3;

	sum=mark1+mark2+mark3;
	avg= sum/3;

	cout<<"total marks: "<<sum<<endl;
	cout<<"average marks: "<<avg<<endl;


}

