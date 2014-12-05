// Write a program that reads the students' fname and lname 
// and his/her five test scores. 
//The program should output the fname and lname
// and average test score.
// Output the average test score with two decimal places.
#include <iostream>
#include <iomanip>
#include <string> 
#include <fstream> 
using namespace std; 
int main(){
	ifstream inFile; 
	inFile.open("input.txt"); 
	ofstream outFile; 
	outFile.open("output.txt");
	string fname, lname; 
	double i1, i2, i3, i4, i5; 
	double avg; 
	inFile >> fname >> lname; 
	inFile >> i1 >> i2 >> i3 >> i4 >> i5; 
	outFile << fixed << showpoint << setprecision(2) <<
		"the marks are:"
		<< setw(6) << i1 << setw(6) <<i2 
		<< setw(6) << i3 << setw(6) <<i4
		<< setw(6)<<i5 << endl; 
	avg=(i1+i2+i3+i4+i5)/5;  
	outFile <<fname <<" " <<lname <<"'s average is:"<< avg << endl; 
	inFile.close();
	outFile.close(); 
	return 0; 
}