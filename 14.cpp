// 14. Write a c++ Program to accept a string in any case and print it by another case.

#include <iostream>
using namespace std;
int main(){

	char ch;
	cout<<"Enter the Text: ";
	while ((ch=getchar())!='\n'){
		if (ch==' ')
			putchar(ch);
		if (ch>='A' && ch<='Z')
			putchar(ch+32);
		else if (ch>='a' && ch<='z')
			putchar(ch-32);
	}
	cout<<"\n";
}
