#include <iostream>
#include <string>
using namespace std; 
struct date{
	int day;
	int month;
	int year;
};
struct employee{
	std::string fname;
	date hireDate; 
};
int main(){
	// james, 3/3/98
	employee e[100];
	for(int i=0;i<100;i++){
	cin >>e[i].fname 
		>>e[i].hireDate.day
		>>e[i].hireDate.month
		>>e[i].hireDate.year;
	}

	return 0;
}