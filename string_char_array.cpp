#include <iostream>
#include <cstring>
#include <string> 
using namespace std;
int main(){
	string c="hello";
	char a[16]="hhhhh";
	char b[]="hello";
	strcpy(a, c.c_str());
	if ( strcmp(a,b)==0){
		cout << "equal"; 
	}
	return 0;
}

