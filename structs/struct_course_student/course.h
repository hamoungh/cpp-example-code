#include <string> 
#ifndef __COURSE_H_INCLUDE
    #define __COURSE_H_INCLUDE
    #ifndef __COURSE_H_DEFINED
        #define __COURSE_H_DEFINED
		struct course; 
        #include "student.h" 
    #endif
 //#include "student.h" 
struct course{
	std::string	name;

	 student* student; 
};
#endif
