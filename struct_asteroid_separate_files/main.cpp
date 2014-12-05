
// #include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>
#include<conio.h>
#include <Windows.h>
#include <ctime>
#include "asteroid.h"


using namespace std;


#define PI 3.14159265

const int ROWS= 10; // Number of rows of asteroids.
const int COLUMNS= 10;  // Number of columns of asteroids.
const int FILL_PROBABILITY= 100;  // Percentage probability that a particular row-column slot will be 
// filled with an asteroid. It should be an integer between 0 and 100.

static float xVal = 5, yVal = 5;  // Co-ordinates of the spacecraft.





asteroid arrayasteroids[ROWS][COLUMNS]; // Global array of asteroids.

// Initialization routine.
void setup() 
{
	// Initialize global arrayasteroids.
	for (int j=0; j<COLUMNS; j++)
		for (int i=0; i<ROWS; i++)
				arrayasteroids[i][j].initialize( 
				3*(-COLUMNS/2 + j),  i,  rand()%4);
	

}

// Drawing routine.
void drawScene(char playerCh)
{
	for (int j=0; j<COLUMNS; j++)
		for (int i=0; i<ROWS; i++)
			if (arrayasteroids[i][j].radius>0)
				arrayasteroids[i][j].draw(); 
			

	gotoxy(xVal,yVal);   
	cout << playerCh;
}




// Keyboard input processing routine.
void keyInputf(unsigned char key)
{
	int tmpx, tmpy;
	tmpx = xVal;
	tmpy = yVal;
	switch (key)
	{
	case 'w':tmpy++; break;
	case 'a':tmpx--; break;
	case 's':tmpy--; break;
	case 'd':tmpx++; break;
	case 27:exit(0); break;
	default:
		break;
	}
	for (int j = 0; j < COLUMNS; j++){
		for (int i = 0; i < ROWS; i++){
			if (arrayasteroids[j][i].radius>0
				&& arrayasteroids[j][i].centerX == tmpx
				&& arrayasteroids[j][i].centerY == tmpy)
				return;
		}
	}
	xVal = tmpx;
	yVal = tmpy;
					
		
	
	//collision detection
	//if astroids[tempx][tempy]!= o O .
}

void main()
{
	char ch=0;
	setup(); 
	do
	{
		drawScene('+');  
		ch = _getch(); 
		drawScene(' '); 
		// ClearScreen(); 
		keyInputf(ch); 

	}while (ch != 'Q' && ch!='q'); 
}
