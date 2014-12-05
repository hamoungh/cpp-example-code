#include <iostream> 
using namespace std;
// write a program takes a number between
//  1 and 7 and 
// outputs "weekday" or "weekend"
// based on the number 
int main(){
	int i;
	cin >> i; 
	switch(i){
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:cout<<"weekday"; break; 
	case 6:
	case 7:cout<<"weekend"; break; 
	default: cout<<"not a day"; break; 
	}
	cout << endl;  
	return 0; 
}
