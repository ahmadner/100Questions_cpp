// 19. Write a c++ Program to accept a string in upper case and print it by lower case.

// input : HelLO UsEr
// output: hello user
#include <iostream>
using namespace std;
int main(){

	char ch,CH;
	cout <<"Enter text in upper case: ";

	while ((CH=getchar())!='\n'){
		if ((CH>='A' && CH<='Z') || CH==' '){
			if (CH == ' ')
				putchar(CH);
			else{
				ch=CH+32;
				putchar(ch);
			}
		}
		else{ 
			putchar(CH);}
	}
}
