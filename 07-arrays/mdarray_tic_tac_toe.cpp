// http://git.io/E5HMRQ

#include <iostream>

// #include <stdlib.h>
using namespace std; 

char matrix[3][3];  /* the tic tac toe matrix */

char isThereAWinner(void);
void initialize_game(void);
void get_player_move(void);
void get_computer_move(void);
void draw(void);

int main(void)
{
  char done;

  printf("This is the game of Tic Tac Toe.\n");
  printf("You will be playing against the computer.\n");

  done =  ' ';
  initialize_game();

  do {
    draw();
    get_player_move();
    done = isThereAWinner(); /* see if winner */
    if(done!= ' ') break; /* winner!*/
    get_computer_move();
    done = isThereAWinner(); /* see if winner */
  } while(done== ' ');

  if(done=='X') printf("You won!\n");
  else printf("I won!!!!\n");
  draw(); /* show final positions */

  return 0;
}

/* Initialize the matrix. */
void initialize_game(void)
{
  int i, j;

  for(i=0; i<3; i++)
    for(j=0; j<3; j++) matrix[i][j] =  ' ';
}

/* Get a player's move. */
void get_player_move()
{
  int x, y;

  cout << "Enter X,Y coordinates for your move: ";
  cin >> x >> y;
  x--; y--;
  if(matrix[x][y]!= ' '){
    cout << "Invalid move, try again."<<endl;
    get_player_move();
  }
  else matrix[x][y] = 'X';
}

/* Get a move from the computer. */
void get_computer_move(void)
{
  int i, j;
  for(i=0; i<3; i++){
    for(j=0; j<3; j++)
      if(matrix[i][j]==' ') break;
    if(matrix[i][j]==' ') break;
  }

  if(i*j==9)  {
    printf("draw\n");
    exit(0);
  }
  else
    matrix[i][j] = 'O';
}

/* Display the matrix on the screen. */
void draw()
{
  for(int t=0; t<3; t++) {
    cout <<  matrix[t][0] << "|"
         << matrix[t][1] << "|"
		 << matrix [t][2] ;
    if(t!=2) cout << endl <<"-|-|-"<< endl;
  }
  cout << endl; 
}

/* See if there is a winner. */
char isThereAWinner(void)
{
  int i;

  for(i=0; i<3; i++)  /* check rows */
    if(matrix[i][0]==matrix[i][1] &&
       matrix[i][0]==matrix[i][2]) return matrix[i][0];

  for(int i=0; i<3; i++)
      if(matrix[0][i]==matrix[1][i] &&
         matrix[0][i]==matrix[2][i] &&
            matrix[0][i]!=' ')
                return matrix[0][i];


  /* test diagonals */
  if(matrix[0][0]==matrix[1][1] &&
     matrix[1][1]==matrix[2][2])
       return matrix[0][0];

  if(matrix[0][2]==matrix[1][1] &&
     matrix[1][1]==matrix[2][0])
       return matrix[0][2];

  return ' ';
}

