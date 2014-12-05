#include <iostream>
using namespace std;
// modify so the  finds out max{i,j,k} 
int main(){
	int i,j,k; 
	cin >> i>> j >> k; 
	int max;
	
	max=i;
	if (j>max) {max=j;} 
	if (k>max) {max=k;}


	cout << max << endl; 
	return 0; 
}