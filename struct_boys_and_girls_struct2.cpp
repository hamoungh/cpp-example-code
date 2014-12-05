#include <iostream>
#include <string> 
using namespace std; 

// define datatypes boy and girl
// define the friendship relationship
struct boy{
	string name;
	girl girlfriends[10]; 
	void initialize(string s){
		name = s; 
	}
};
struct girl{
	string name;
	string lastname;
};
int main(){
	// a,b,c are boys
	boy a,b,c; 
	a.initialize("james");
	b.name = "rob"; 
	c.name = "ylber"; 
	// q,r are girls
	girl q,r; 
	a.girlfriends[0]. = "mary"; 
	return 0;
}