 
// #include <cstdlib>
#include <cmath>
#include <iostream>
 #include <string>
#include<conio.h>
#include <Windows.h>
#include <ctime>
using namespace std;

int const asteroids_num = 100; // Number of  asteroids.
static float xVal = 0, yVal = 0; // Co-ordinates of the spacecraft.
int arrayAsteroidsX[asteroids_num]; // Global array of asteroids.
int arrayAsteroidsY[asteroids_num];

// Initialization routine. 
void setup() 
{
	// srand(time(NULL));
    for (int i=0; i<asteroids_num; i++)
	{
	        arrayAsteroidsX[i] = rand()%40;
			arrayAsteroidsY[i] = rand()%20; 		
	}
}


void gotoxy( int x, int y )
{
    COORD p = { x, 100-y };
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), p );
}

// Drawing routine.
void drawScene(char ch)
{  
   for (int j=0; j<asteroids_num; j++){
         gotoxy(arrayAsteroidsX[j]-xVal, arrayAsteroidsY[j]-yVal);   
		 cout << ch; 
   }
}


// Keyboard input processing routine.
void keyInputf(unsigned char key)
{
	    switch(key)
        {
        case 'W':
        case 'w':
			yVal++; 
            break;
        case 'A':
        case 'a':
			xVal--;
            break;
        case 's':
        case 'S':
			yVal--; 
            break;
        case 'D':
        case 'd':
			xVal++; 
            break;
		case 27:
			exit(0);
			break;
		default:
			break;
		}

}

 void ClearScreen()
    {
    cout << string( 100, '\n' );
    }


void main1()
{
	char ch=0;
	setup(); 
    do
    {
		drawScene('o'); 
		gotoxy(20, 10 );
		cout << "+";
        ch = _getch(); 
		 drawScene(' '); 
		keyInputf(ch); 

    }while (ch != 'Q' && ch!='q');

}
