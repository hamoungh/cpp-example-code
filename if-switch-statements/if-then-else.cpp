// declare two integer variables
// compare i and j
// if i>=j output "i  was bigger"
// if i<j output "j is bigger"
#include <iostream>
using namespace std;
int main(){
	int i;
	int j; 
	// get i and j from input 
	cin >> i >> j; 
	if (i>j){
		cout << "first one was bigger" << endl;
	}
	else if (i<j){
		cout << "second one  was bigger" << endl;
	}
	else {
		cout << "they are equal" << endl;
	}
	return 0;
}
