#include <iostream>
#include<string>


//struct student;
//struct course; 
struct course{
	std::string	name;
	//student* student; 
};
struct student{
	int  age;  
	std::string	first_name;
	course courses[10]; 
	int marks[10]; 
}; 



// course* is a memory address 
// &s1 address of object 
// *s1 is the student objest 
int main1 (){ 

	return 0;
}

