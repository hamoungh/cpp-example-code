/*
assume we have a two-dimensional 3-by-3 array called matrix: 
'int matrix[3][3];'
write a function called 'void initialize_game(){'
and inside it use a nested for loop to set all elements of this two-dimensional array to 0: 
input:
output: 
0 0 0
0 0 0
0 0 0
*/
#include <iostream>
using namespace std;   

void initialize_game(int matrix[][3]); 
int main(){

	int m[3][3]; 
	initialize_game(m);
	// printing the array 
	for(int i=0; i<=2; i++) {
		for(int j=0; j<=2; j++)
			cout << m[i][j] << " "; 
		cout << endl; 
	}
}