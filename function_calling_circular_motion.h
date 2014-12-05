
#include <iostream>	// For cin and cout
#include <cmath>
using namespace std;

void positionUnderCircularMotion(double t,double& x, double& y);
void positionUnderGravityByRef(double v,double t, double& y);  
double positionUnderGravity(double v,double t);

int main(){
	int choice;
	cin>>choice;
	if(choice == 0){
		int numVertices=30; 
		double t=0;
		for(int i=0;i<numVertices; i++){
			 t+=2*3.14/numVertices;
			 double x,y; 
			 positionUnderCircularMotion(t,x,y);
			 cout<<x<<","<<y<<'\n';
		}
	}else if(choice==1){
		int i=1; 
		double x,y; 
		for(double t=0;t<10; t=t+0.1){
			positionUnderGravityByRef(40,t,y);
			cout<<y<<'\n';
		}
	}else if(choice==2){
		double loc;
		for(double t=0;t<4; t=t+0.1){
			loc=positionUnderGravity(20,t);
			cout<<loc<<'\n';
		}
	}
	return 0;
}





