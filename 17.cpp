// 17. Write C++ Program to entering and printing the rows, columns, and elements of an array.

/*

* input and output: 

Enter matrix row size: 2
Enter matrix column size: 3
enter item [1][1] : 1
enter item [1][2] : 2
enter item [1][3] : 3
enter item [2][1] : 4
enter item [2][2] : 5
enter item [2][3] : 6

1   2   3   
4   5   6  

*/

#include<iostream>
using namespace std;
int main(){

	int row,column;
	cout<<"Enter matrix row size: ";cin>>row;
	cout<<"Enter matrix column size: ";cin>>column;
	int item,matrix[row][column];

	// for creat the matrix
	for ( int i=1;i<=row;i++)
		for (int j=1;j<=column;j++){
			cout<<"enter item"<<" ["<<i<<"]"<<"["<<j<<"] : ";cin>>item;
			matrix[i][j] =item;
		}
	cout<<"\n\n";
	// for read the matrix
	for ( int i=1;i<=row;i++){
		for (int j=1;j<=column;j++){
			cout<<matrix[i][j]<<"   ";
		}
		cout<<endl;
	}
}

