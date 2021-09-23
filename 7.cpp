/* 7. Write C++ Program to print numeric pyramid.

output: 
1
12
123
1234
12345 */

#include<iostream>
using namespace std;
int main()
{
	for (int i=1;i<=5;i++){
		for (int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
}