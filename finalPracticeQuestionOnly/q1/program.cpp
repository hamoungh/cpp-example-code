/* 
Assume the  function 'positionUnderGravityByRef' to compute 
the vertical position of an object under gravity is already
defined in a separate file (i.e. you need to declare its
prototype) 
void positionUnderGravityByRef(double v,double t, double& y); 
write the main() method to read an initial velocity from the input and output the position of the object at t=1.
sample input/output: 5 --> 0.1
*/ 
#include <cmath>

void positionUnderGravityByRef(double v,double t, double& y){
	y= -0.5*9.8*pow(t,2.0)+v*t;  
}

