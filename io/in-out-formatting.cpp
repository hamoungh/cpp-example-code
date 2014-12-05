// Write a program that reads the students'
// five test scores. 
//The program should output the average test score.
// Output the average test score with two decimal places.
#include <iostream>
#include <iomanip>
using namespace std; 

int main(){
	double v1,v2,v3,v4,v5; 
	double avg; 
	cin >> v1 >> v2 >>v3 >>v4 >>v5; 
	avg= (v1+v2+v3+v4+v5)/5;
	cout << fixed << showpoint; 
	cout << setprecision(2); 
	cout << "this is the average:" <<avg << endl; 
	return 0; 
}