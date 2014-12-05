#include <iostream>
using namespace std;
int main(){
	int i;
	int j; 
	int k;
	cin >> i >> j >> k; 
	int max;
	//..... find and print the maximum between i
	//  and j....
// 	if (i>j && i>k) max=i;
//	....
	max=i; 
	if(max<j) max = j;
	if(max<k) max = k; 

	

	cout << max << endl;
	return 0;
}
