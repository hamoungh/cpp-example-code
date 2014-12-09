/*
Assume the  function 'positionUnderGravityByRef' to compute the vertical position of an object under gravity is already defined:
void positionUnderGravityByRef(double v,double t, double& y); 
write the main() method to read an initial velocity from the input and output the position of the object at t=1. 
*/

#include <iostream>
using namespace std; 

void positionUnderGravityByRef(double v,double t, double& y); 

int main(){
	double v; 
		cin >> v; 
		double y;
		positionUnderGravityByRef(v,1,y);
		cout<<y<<'\n';
	return 0; 
}  

