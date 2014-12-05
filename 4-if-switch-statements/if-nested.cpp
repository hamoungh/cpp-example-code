#include <iostream>
using namespace std; 
/* write a program :
	define i,j and assign values 
	if i==j print "they are equal"
	else if i>j print "i is bigger"
	else if i<j print "j is bigger"
*/
int main (){
	int i,j;
	cout << "enter two numbers:" << endl; 
	cin >> i >> j; 
	if (i==j) {
		cout << "equal" << endl;
	}
	else {
		if(i>j){
			cout << "i is bigger" << endl;
		}else{	//i<j
			cout << "j is bigger" << endl;
		}
	}
	return 0;
}