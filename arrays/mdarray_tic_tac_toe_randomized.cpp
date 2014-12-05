#include <iostream>
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */
using namespace std; 

char matrix[3][3];

void initialize_game(){
	for(int i=0; i<=2; i++) 
		for(int j=0; j<=2; j++)
			matrix[i][j]= ' ';
}
void draw(){
	for(int i=0; i<=2; i++){
		cout << matrix[i][0] << "|"
			 << matrix[i][1] << "|"
			 << matrix[i][2];
		if (i!=2) cout << endl << "-|-|-"<< endl; 
	}
	cout << endl; 
}
void get_player_move(){
	cout << "Enter X,Y coordinates for your move: ";
	int x,y; 
	cin >> x >> y; 
	x--; y--; 
	// check if position x,y is empty 
	if (matrix[x][y]!=' '){
		cout << "invalid move"<<endl;
		get_player_move(); 
	} else matrix[x][y]='X'; 
}
void get_computer_move(){
	// generate random between 0 and 2 
	int x,y; 
	do{
		x=rand()%3;
		y=rand()%3;
	} while(matrix[x][y]!=' ');	
	matrix[x][y]='O';
}
int main(){
	// initialize my random seed 
	// based on system time 
	srand (time(NULL)); 
	initialize_game(); 
	do{
		draw(); 
		get_player_move(); 
		get_computer_move(); 
	}while(true);

	return 0; 
}