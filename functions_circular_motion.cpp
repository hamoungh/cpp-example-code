
#include <windows.h>
#include <iostream>	// For cin and cout
#include <conio.h>	// For _getch() which I removed when I put in the game's main loop

using namespace std;

void gotoxy( int x, int y );
//void letUserControl(); 
double positionUnderGravity(double v,double t);
void positionUnderGravityByRef(double v,double t, double& y);  
void circle(); 
void ballPath(); 

int main(){
	//letUserControl();
	//circle();
	 ballPath();
	return 0;
}

void gotoxy( int x, int y )
{
    COORD p = { x, 100-y };
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), p );
}



void letUserControl()
{
	int x = 0;	
	int y = 0;
	char ch=0;
    cout << "Press Q to quit\n";
    do
    {
		gotoxy(x, y );
		cout << "o";
        ch = getch();
		gotoxy(x, y ); 
		cout << " "; 
        switch(ch)
        {
            case 'W':
            case 'w':
				y++; 
                break;
            case 'A':
            case 'a':
				x--;
                break;
            case 's':
            case 'S':
				y--; 
                break;
            case 'D':
            case 'd':
				x++; 
                break;

        }

    }while (ch != 'Q' && ch!='q');
}


 void positionUnderCircularMotion(double t,double& x, double& y){
	x=20+10*cos(t);
	y=20+10*sin(t);

}

void circle(){  
	int numVertices=100; 
	double t=0;
	for(int i=0;i<numVertices; i++){
		 t+=2*3.14/numVertices;
		 double x,y; 
		 positionUnderCircularMotion(t,x,y);
		gotoxy(x,y); 
		cout<<"o";
	}
}   

double positionUnderGravity(double v,double t){
	return -0.5*9.8*pow(t,2.0)+v*t;  
}

void positionUnderGravityByRef(double v,double t, double& y){
	y= -0.5*9.8*pow(t,2.0)+v*t;  
}

void ballPath(){
	int i=1; 
	for(double t=0;t<4; t=t+0.1){
		double loc=positionUnderGravity(20,t);
		gotoxy(i++,loc); 
		cout<<"o";
	}
}


