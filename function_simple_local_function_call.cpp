#include <iostream>
#include <string>
using namespace std;

// inside f1 read a name and print it out 
void f1( ){
	string name; 
	cin >> name; 
	cout << "your name was:" << name << endl; 
}


int main( ){
	f1();
	f1(); 
	return 0; 
}