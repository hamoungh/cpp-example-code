
/*
	q2. write a line of code instead of ...... that
	converts the string c in following program to 
	null-terminated character string or c-string 
*/ 
#include <iostream>
using namespace std; 
void copyString(char a[],string c); 
int main(){
	string c="hello";
	char a[16];
	copyString(a,c); 
	cout << a << endl; 
	return 0;
}