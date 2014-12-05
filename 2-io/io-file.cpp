#include <iostream>
#include <iomanip> 
#include <string>
#include <fstream> 
using namespace std;
int main(){ 
	ifstream inFile; 
	ofstream outFile; 
	inFile.open("input.txt");
	outFile.open("output.txt"); 
	double m1,m2,m3,m4,m5; 
	string fname, lname; 
	outFile << "reading  from file:" << endl;
	inFile >> fname >> lname; 
	// cout << "enter your numbers:"; 
	inFile >> m1 >> m2 >> m3 >> m4 >> m5; 
	outFile <<"here is your average:"<< fixed 
		<< showpoint 
		<< setprecision(2) <<
		(m1+m2+m3+m4+m5)/5 << endl; 
	inFile.close(); 
	outFile.close(); 
	return 0; 
}