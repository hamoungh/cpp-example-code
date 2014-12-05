#include <iostream>
#include <string>
using namespace std;
// find max{i,j,k}
int main(){
	int i=100;
	int j=200;
	int k=1990;

	int max=i;
	if (j>max){max=j;}
	if (k>max){max=k;}
	cout << "maximum is:" << max << endl;
	return 0;
}