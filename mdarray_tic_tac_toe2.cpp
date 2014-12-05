#include <iostream>
using namespace std;

char matrix[3][3];

void initialize_game(){
	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			matrix[i][j]=' ';
}
void draw(){
	for(int i=0;i<3; i++){
		cout << matrix[i][0] << "|"
			<< matrix[i][1] << "|"
			<< matrix[i][2] ;
		if (i!=2) cout << endl<< "-|-|-"<<endl;  
	}
	cout << endl; 
}
void get_player_move(){
	cout << "Enter X,Y coordinates for your move:";
	int x,y;
	cin >> x >> y; 
	x--; y--; 
	if(matrix[x][y]!=' '){ // not empty
		cout << "invalid move" << endl;
		get_player_move(); 
	} else matrix[x][y]='X'; 
}
void get_computer_move(){
	// find the next empty spot 
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if (matrix[i][j]==' ') {
				matrix[i][j]='O';
				return; 
			}
		}
	}
}
bool isThereAWinner(char player){
	if (matrix[1][0]==player &&
		matrix[1][1]==player &&
		matrix[1][2]==player) // check second row
			return true; 
	 // another 7 conditions to  check for winning 
	return false; 
}
int main(){
	initialize_game();
	bool done=false;
	int winner=0; 
	do{
		draw();  
		get_player_move(); 
		done = isThereAWinner('X');
		if (done==true) { winner=1; break;} 
		get_computer_move(); 
		done = isThereAWinner('O');
		if (done==true) { winner=2; break;} 
	}while(true);  
	if (winner==1) cout << "congrats"<< endl; 
	else cout << "looser"<< endl; 
	return 0;
}