#include <iostream>
using namespace std;
int main(){
	// get numbers from input as long a 
	// the number is not -99 
	int i;
	do{
		cin >> i;
		cout << "your number was"<<i << endl; 
	}while(i!=-99);

	return 0;
}