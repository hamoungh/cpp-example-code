// write a program to sort two numbers
// from large to small 
#include <iostream>
using namespace std; 
int main(){
	int x,y,z;
	cin >> x >> y >> z; 
	/*if(x>=y && x>z){
		if(y>z){

		}
		else {

		}*/
	if (x>=y){
		cout << x << endl << y << endl;
	}
	else{
		cout << y << endl <<  x << endl;
	}
	return 0; 
}


