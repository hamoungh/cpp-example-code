#include <iostream>
using namespace std;
// write a program that prints 
// 5 by 5 square of stars 

int main(){
	int n;
	cin >> n; 
	for(int j=1; j<=n; j++){
		for(int i=1; i<=n; i++){
			cout << "*"; 
		}
		cout << endl; 
	}
	return 0; 
}