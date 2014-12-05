#include <iostream>
#include <cmath>
#include <windows.h> 
using namespace std;

const double G=9.8;
double positionUnderGravity(double v,double t);
void positionUnderGravityByRef(double v0,double t, double& y, double& v);
void gotoxy( int x, int y )
{
    COORD p = { x, 100-y };
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), p );
}
int main(){ 
    double v0=20;
    for(double t=0;t<4.0;t+=0.05){
        //double y=positionUnderGravity(v0,t);
		double y; double v;
		positionUnderGravityByRef(v0,t,y,v);
		cout << "position:"<<y << ", speed:"<< v << endl;
		//gotoxy(t*7,y);
		//cout << "o";
    }
	return 0; 
}
void positionUnderGravityByRef(double v0,double t, double& y, double& v ){
        y=-0.5 * G * pow(t,2) + v * t;
		v = v0-0.5*G*t;
}
double positionUnderGravity(double v,double t){
        double height=-0.5 * G * pow(t,2) + v * t;
        return height; 
}



