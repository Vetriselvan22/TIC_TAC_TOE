#include "Tic_tac_toe.h"

int main() 
{
	struct Tictactoe Game;
	Game.player1='X';
	Game.player2='O';
	int choice;

	do
	{
		printf(">>>> TIC_TAC_TOE GAME <<<<\n");
	    printf("1. Start the Game.\n");
	    printf("2. Exit.\n");
	    scanf("%d",&choice);
		getchar(); 

	    if(choice==1)
	     	initializeBoard(&Game);
	    else
	        printf("Invalid Input\n");
	}while(choice != 2);

}