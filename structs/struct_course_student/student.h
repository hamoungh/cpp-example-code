#include <string> 
#ifndef __STUDENT_H_INCLUDE
    #define __STUDENT_H_INCLUDE
    #ifndef __STUDENT_H_DEFINED
        #define __STUDENT_H_DEFINED
        struct student;
         #include "course.h" 
    #endif

struct student{
	int  age;  
	std::string	first_name;
	course courses[10]; 
	int marks[10]; 
}; 
#endif
