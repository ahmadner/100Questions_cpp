// 27. Write a C++ program to draw an equilateral triangle with the number of rows entered

/*
output: 

Enter number of rows: 5     
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 

*/
#include <iostream>
using namespace std;
int main(){
	int space, rows;

	cout <<"Enter number of rows: ";
	cin >> rows;

	for(int i = 1, k = 0; i <= rows; ++i, k = 0){

		for(space = 1; space <= rows-i; ++space)
			cout <<"  ";

		while(k != 2*i-1){
			cout << "* ";
			++k;
		}
		cout << endl;
	}
	return 0;
}