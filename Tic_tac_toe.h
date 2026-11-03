#ifndef CONTACT_H
#define CONTACT_H
#include<stdio.h>
#include<string.h>

struct Tictactoe
{
    char Board[3][3];
    char player1,player2;
    int Board_occupaid;

}; 

void initializeBoard(struct Tictactoe *tictactoe);
void getplayerMove(struct Tictactoe *players);
void Display_Board(struct Tictactoe *tictactoe);
int validate_move(struct Tictactoe *tictactoe,char playercoin,int move);
int checkWinner(struct Tictactoe *tictactoe,char playercoin,int moved);
int Horizontal_1(struct Tictactoe *tictactoe,char playercoin);
int Horizontal_2(struct Tictactoe *tictactoe,char playercoin);
int Horizontal_3(struct Tictactoe *tictactoe,char playercoin);
int Vertical_1(struct Tictactoe *tictactoe,char playercoin);
int Vertical_2(struct Tictactoe *tictactoe,char playercoin);
int Vertical_3(struct Tictactoe *tictactoe,char playercoin);
int main_1(struct Tictactoe *tictactoe,char playercoin);
int Diagonal_1(struct Tictactoe *tictactoe,char playercoin);

#endif
