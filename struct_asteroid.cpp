
// #include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>
#include<conio.h>
#include <Windows.h>
#include <ctime>

using namespace std;
const int ROWS= 10; // Number of rows of asteroids.
const int COLUMNS= 10;  // Number of columns of asteroids.

float xVal = 5, yVal = 5;  

void gotoxy( int x, int y )
{
	COORD p = { x+40, 100-y };
	SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), p );
}

struct asteroid{
	float centerX;
	float centerY; 
	int radius;
	void initialize(float x, float y, float r)
	{
		centerX = x;
		centerY = y;
		radius = r;
	}
	void draw(){  
		gotoxy(centerX,centerY); 
		switch(radius){
		case 0:cout << ' '; break; 
		case 1:cout << '.'; break; 
		case 2:cout << 'o'; break; 
		case 3:cout << 'O'; break; 
		}
	}
}; 

asteroid arrayAsteroids[ROWS][COLUMNS];


void setup(){
	for (int j=0; j<COLUMNS; j++)
		for (int i=0; i<ROWS; i++)
			arrayAsteroids[i][j].initialize(
			3*(-COLUMNS/2 + j),  i,  rand()%4); 
}

void drawScene(char playerCh)
{
	for (int j=0; j<COLUMNS; j++)
		for (int i=0; i<ROWS; i++)
			if (arrayAsteroids[i][j].radius>0)
				arrayAsteroids[i][j].draw(); 

	gotoxy(xVal,yVal);   
	cout << playerCh;
}
void keyInputf(unsigned char key)
{
	int tmpX=xVal,tmpY=yVal;
	switch(key){
	case 'w':tmpY++; break;
	case 'a':tmpX--; break; // change to temp value 
	case 's':tmpY--; break;
	case 'd':tmpX++; break;
	case 27:exit(0);break;
	default:break;
	}
	// if (tempX,tempY)  collides with one of the asteroids-->
	 // (use a nested for loop the check all asteroid's 
	// locations )
	// if it collides return;
	for (int j = 0; j < COLUMNS; j++){
		for (int i = 0; i < ROWS; i++){
			if(arrayAsteroids[j][i].radius>0 
				&& arrayAsteroids[j][i].centerX == tmpX
				&& arrayAsteroids[j][i].centerY == tmpY)
				return; 
		}
	}
	// if it didnt collide, assign tempx.tempy to  xVal,yVal
	xVal = tmpX;
	yVal = tmpY;
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
		keyInputf(ch);
	}while (ch != 'Q' && ch!='q');
}






