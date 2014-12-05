
#include <iostream>
#include "friends.h"
using namespace std;



int main(){
	boy a; boy b; boy c;
	girl q; girl r; 
	a.girlfriend[0]=q; 
	b.girlfriend[0].age=19;
	b.girlfriend[0].address.aptnum = 1705; 
	// print the name of all q's boyfriends 
	for(int i=0; i<10;i++){
		std::cout << b.girlfriend[i].name;
	}
	return 0;
}