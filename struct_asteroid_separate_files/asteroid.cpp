#include <Windows.h>
#include <iostream>
 #include "asteroid.h"


using namespace std;

void gotoxy( int x, int y )
{
	COORD p = { x+40, 100-y };
	SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), p );
}

void asteroid::initialize(float x, float y, float r){
		centerX = x;
		centerY = y;
		radius = r;
	}


	void asteroid::draw(){  
		gotoxy(centerX,centerY); 
		switch(radius){
		case 0:cout << ' '; break; 
		case 1:cout << '.'; break; 
		case 2:cout << 'o'; break; 
		case 3:cout << 'O'; break; 
		}
	}	

	
