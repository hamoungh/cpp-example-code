#include <iostream>
#include <string>
using namespace std; 
// write a program that finds and 
// prints the maximum of two number
// max{a,b}
int main(){

	int day;
	cin >> day; 
	
	if (day>=1 && day<=5) 
		cout << "weekday" << endl;
	else if (day==6 || day==7) 
		cout << "weekend" << endl;
	else{
		cout << "i donno man"<< endl;
	}

	
	

	

	return 0;
}