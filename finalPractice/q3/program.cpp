/* 
q3.  write the function 
void fillArrayFromInput(int x[], int size){}
that takes an array of integer and its size and 
	reads enough numbers from the input to fill 
	the array.
	input: 1 1 1
	output: 111
}  
*/
#include <iostream>
using namespace std;

void fillArrayFromInput(int x[], int size); 

int main(){
	int a[3]; 
	fillArrayFromInput(a,3); 
	cout << a[0] << a[1] << a[2] << endl; 
	return 0;
}

