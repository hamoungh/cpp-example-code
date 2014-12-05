
/*
q5. define the necessary structs that the following code works. 
put your struct definitions into a file called q5-answer.h
*/
#include <iostream>
#include <string>
#include "q5-answer.h" 
using namespace std;


int main(){
	boy a; boy b; boy c;
	girl q; girl r; 
	a.girlfriend[0]=q; 
	b.girlfriend[0].age=19;
	b.girlfriend[0].address.aptnum = 1705; 
	return 0;
}
