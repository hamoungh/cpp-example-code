#include <iostream>
using namespace std;
/* Write a program that reads the number N from
	the console then reads N positive integer 
	numbers and returns the minimum and maximum
	values of them. you can assume the given
	numbers are between 0 and 65535.  */
int main(){
	int n;
	cin >> n;  //find max between i1,....,in
	int i,j,k;
	cin >> i; 
	int max=0;
	max=i;

	cin >> j;
	if (max<j) max=j;
	// for loop with  a condition counter<n
	cin >> k;
	if (max<k) max=k;

	cout << "max is "<<max << endl; 
	 
	return 0;
}

