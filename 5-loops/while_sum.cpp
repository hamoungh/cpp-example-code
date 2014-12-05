#include <iostream>
using namespace std;
int main(){
	// read n from the input 
	// average of  1+3+5+7+....+100
	int counter=1;  
	int n; // (1+2)/2=1.5
	cout << "how many numbers?";
	cin >> n; 
	double sum=0; 
	while(counter<=n){
		 // add counter to the sum and store the result in sum
		 sum = sum + counter; 
		 counter=counter+1;
	}
	cout << "average is:" <<sum/n << endl; 

	return 0;
}