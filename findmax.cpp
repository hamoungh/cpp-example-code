// declare i and j
// find their max
#include <iostream>
using namespace std;
int main(){
	int i,j,k;
	cin >> i >> j>> k; 
		
	// calclating max of i  and j : max{i,j}
	int max;
	/*if (i>j) max=i;
	else max=j;
	if (k>max) max=k;*/
	max=i;
	if (j>max) max=j;
	if (k>max) max=k;
	

	cout << max << endl;
	return 0;
}