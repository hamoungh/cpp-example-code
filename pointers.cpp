#include "student.h"   
#include "course.h"
#include <iostream>
// course* is a memory address 
// &s1 address of object 
// *s1 is the student objest 
int main(){ 
	course* cc=new course(); 
	course courses[10]; 
	student s1; 
	((&s1)->courses+5)->name="hi";
	s1.courses[0].name="hi"; 
	s1.courses[0].student=&s1; 
	std::cout << s1.courses[0].name;

	student* s2=new student(); 
	(*((*s2).courses+5)).name="hi";

	course* c=new course(); // dereference 
	std::cout << new course(); 
	s1.courses[1] = *c; 
		//(*c).name << c->name; 
	c->name="hamoun"; 

	return 0;
}

