#include "Tic_tac_toe.h"


void initializeBoard(struct Tictactoe *tictactoe)
{

    int i,j;

    for(i=0;i<3;i++)
    {
        
        for(j=0;j<3;j++)
        {
            tictactoe->Board[i][j]=' ';
        }
	}
    
    tictactoe->Board_occupaid=0;

    Display_Board(tictactoe);
    getplayerMove(tictactoe);
}

void Display_Board(struct Tictactoe *tictactoe)
{
    int B_noun=1,i,j,k;

    printf("\n...Tic_Tac_Toe...\n\n");

    printf("------------\n");
    for(i=0;i<3;i++)
    {
        
        for(j=0;j<3;j++)
        {
            printf(" %c ",tictactoe->Board[i][j]);
            printf("|");
        }
        printf("\n");
        for(k=1 ;k<=3;k++)
        {
            printf(" %d  ",B_noun);
            B_noun++;
        }
        printf("\n");
        printf("------------");
        printf("\n");
    }
}

void getplayerMove(struct Tictactoe *players)
{
    int choose, player1_chance = 0 ,player2_chance = 0 ,player1_Win = 0 , player2_Win = 0;
    int check_value,Winners;

    printf("\n**Player 1 always makes the first move and uses 'X', while Player 2 uses 'O'.**\n\n");

    do
    {
        if(player1_chance == 0)
        {
            do
            {
                printf("\nPlayer 1, enter a move number between 1 and 9.\n");
                printf("Enter your choice : ");
                scanf("%d",&choose);
                getchar();
                check_value = validate_move(players,'X',choose);

                if(check_value == 1)
                {
                    player1_chance=1;
                    player2_chance=0;
                    Winners = checkWinner(players,'X',choose);

                    if(Winners == 1)
                    {
                        players->Board_occupaid=9;
                        Display_Board(players);
                        printf("\n>>> Player1 'X' takes the Win <<<\n\n");
                    }
                    else
                    {
                        Display_Board(players);
                    }
                }

            }while(check_value != 1);
        }
        else if(player2_chance == 0)
        {
            do
            {
                printf("\nPlayer 2, enter a move number between 1 and 9.\n");
                printf("Enter your choice : ");
                scanf("%d",&choose);
                getchar();
                check_value = validate_move(players,'O',choose);

                if(check_value == 1)
                {
                    player1_chance=0;
                    player2_chance=1;
                    Winners = checkWinner(players,'O',choose);

                    if(Winners == 1)
                    {
                        players->Board_occupaid=9;
                        Display_Board(players);
                        printf("\n>>> Player2 'O' takes the Win <<<\n\n");
                    }
                    else
                    {
                        Display_Board(players);
                    }
                }

            }while(check_value != 1);
        }
        
    }while(players->Board_occupaid != 9);

    if(Winners == 0 && players->Board_occupaid == 9)
    {
        printf("It's a Draw! No One Wins\n\n");
    }

    char replay;

        printf("Would you like to play again? (Y/N) : ");
    do
    {
        scanf(" %c",&replay);

        if(replay == 'Y' || replay == 'y')
        {
            printf("Let's start New Game\n");
            initializeBoard(players);
        }
        else if(replay == 'N' || replay == 'n')
        {
            printf("\nThanks for playing! See you next time\n");
            return;
        }
        else
        {
            printf("Invalid Input,Enter the valid answer (Y/N)\n");
        }

    }while(replay != 'Y' && replay != 'y');
  
}

int validate_move(struct Tictactoe *tictactoe,char playercoin,int move)
{
    if(move > 0 && move < 10)
    {
        switch(move)
        {
            case 1:

            if(tictactoe->Board[0][0] == 'X' || tictactoe->Board[0][0] == 'O')
            {
                printf("This box is already occupied! \nPlease choose another number between 1 and 9.\n");
                return 0;
            }
            else
            {
                tictactoe->Board[0][0] = playercoin;
                tictactoe->Board_occupaid++;
                return 1;
            }

            case 2:

             if(tictactoe->Board[0][1] == 'X' || tictactoe->Board[0][1] == 'O')
            {
                printf("This box is already occupied! \nPlease choose another number between 1 and 9.\n");
                return 0;
            }
            else
            {
                tictactoe->Board[0][1] = playercoin;
                tictactoe->Board_occupaid++;
                return 1;
            }

            case 3:

             if(tictactoe->Board[0][2] == 'X' || tictactoe->Board[0][2] == 'O')
            {
                printf("This box is already occupied! \nPlease choose another number between 1 and 9.\n");
                return 0;
            }
            else
            {
                tictactoe->Board[0][2] = playercoin;
                tictactoe->Board_occupaid++;
                return 1;
            }

            case 4:

             if(tictactoe->Board[1][0] == 'X' || tictactoe->Board[1][0] == 'O')
            {
                printf("This box is already occupied! \nPlease choose another number between 1 and 9.\n");
                return 0;
            }
            else
            {
                tictactoe->Board[1][0] = playercoin;
                tictactoe->Board_occupaid++;
                return 1;
            }

            case 5:

             if(tictactoe->Board[1][1] == 'X' || tictactoe->Board[1][1] == 'O')
            {
                printf("This box is already occupied! \nPlease choose another number between 1 and 9.\n");
                return 0;
            }
            else
            {
                tictactoe->Board[1][1] = playercoin;
                tictactoe->Board_occupaid++;
                return 1;
            }

            case 6:

             if(tictactoe->Board[1][2] == 'X' || tictactoe->Board[1][2] == 'O')
            {
                printf("This box is already occupied! \nPlease choose another number between 1 and 9.\n");
                return 0;
            }
            else
            {
                tictactoe->Board[1][2] = playercoin;
                tictactoe->Board_occupaid++;
                return 1;
            }

            case 7:

             if(tictactoe->Board[2][0] == 'X' || tictactoe->Board[2][0] == 'O')
            {
                printf("This box is already occupied! \nPlease choose another number between 1 and 9.\n");
                return 0;
            }
            else
            {
                tictactoe->Board[2][0] = playercoin;
                tictactoe->Board_occupaid++;
                return 1;
            }

            case 8:

             if(tictactoe->Board[2][1] == 'X' || tictactoe->Board[2][1] == 'O')
            {
                printf("This box is already occupied! \nPlease choose another number between 1 and 9.\n");
                return 0;
            }
            else
            {
                tictactoe->Board[2][1] = playercoin;
                tictactoe->Board_occupaid++;
                return 1;
            }

            case 9:

             if(tictactoe->Board[2][2] == 'X' || tictactoe->Board[2][2] == 'O')
            {
                printf("This box is already occupied! \nPlease choose another number between 1 and 9.\n");
                return 0;
            }
            else
            {
                tictactoe->Board[2][2] = playercoin;
                tictactoe->Board_occupaid++;
                return 1;
            }
        }
    }
    else
    {
        printf("Invalid input! Please enter a number between 1 and 9.\n");
        return 0;
    }
}

int checkWinner(struct Tictactoe *tictactoe,char playercoin,int moved)
{    
    int Winners_found = 0,i;
    
      switch(moved)
      {
           case 1:
           
           for(i=0;i<3;i++)
           {
              if(i == 0)
              {
                    Winners_found = Horizontal_1(tictactoe,playercoin);
                    if(Winners_found == 1)
                    break;
              }
              else if(i == 1)
              {
                    Winners_found = Vertical_1(tictactoe,playercoin);
                    if(Winners_found == 1)
                    break;

              }
              else if(i == 2)
              {
                    Winners_found = main_1(tictactoe,playercoin);
                    if(Winners_found == 1)
                    break;
              }
           }
           break;

           case 2:

           for(i=0;i<2;i++)
           {
              if(i == 0)
              {
                    Winners_found = Horizontal_1(tictactoe,playercoin);
                     if(Winners_found == 1)
                      break;
              }
              else if(i == 1)
              {
                    Winners_found = Vertical_2(tictactoe,playercoin);
                     if(Winners_found == 1)
                      break;
              }
           }
           break;

           case 3:

           for(i=0;i<3;i++)
           {
              if(i == 0)
              { 
                    Winners_found = Horizontal_1(tictactoe,playercoin);
                     if(Winners_found == 1)
                    break;
              }
              else if(i == 1)
              {
                    Winners_found = Vertical_3(tictactoe,playercoin);
                    if(Winners_found == 1)
                    break;
              }
              else if(i == 2)
              {
                    Winners_found = Diagonal_1(tictactoe,playercoin);
                    if(Winners_found == 1)
                    break;
              }
           }
           break;

           case 4:

           for(i=0;i<2;i++)
           {
              if(i == 0)
              {
                   Winners_found = Horizontal_2(tictactoe,playercoin);
                   if(Winners_found == 1)
                    break;
              }
              else if(i == 1)
              {
                   Winners_found = Vertical_1(tictactoe,playercoin);
                   if(Winners_found == 1)
                    break;
              }
           }
           break;

           case 5:

           for(i=0;i<4;i++)
           {
              if(i == 0)
              {
                   Winners_found = Horizontal_2(tictactoe,playercoin);
                    if(Winners_found == 1)
                    break;
              }
              else if(i == 1)
              {
                   Winners_found = Vertical_2(tictactoe,playercoin);
                    if(Winners_found == 1)
                    break;
              }
              else if(i == 2)
              {
                   Winners_found = main_1(tictactoe,playercoin);
                    if(Winners_found == 1)
                    break;
              }
              else if(i == 3)
              {
                   Winners_found = Diagonal_1(tictactoe,playercoin);
                    if(Winners_found == 1)
                    break;
              }
           }
           break;

           case 6:

           for(i=0;i<2;i++)
           {
              if(i == 0)
              {
                    Winners_found = Horizontal_2(tictactoe,playercoin);
                     if(Winners_found == 1)
                    break;
              }
              else if(i == 1)
              {
                    Winners_found = Vertical_3(tictactoe,playercoin);
                     if(Winners_found == 1)
                    break;
              }
           }
           break;

           case 7:

           for(i=0;i<3;i++)
           {
              if(i == 0)
              {
                     Winners_found = Horizontal_3(tictactoe,playercoin);
                      if(Winners_found == 1)
                    break;
              }
              else if(i == 1)
              {
                     Winners_found = Vertical_1(tictactoe,playercoin);
                      if(Winners_found == 1)
                    break;
              }
              else if(i == 2)
              { 
                    Winners_found = Diagonal_1(tictactoe,playercoin);
                     if(Winners_found == 1)
                    break;
              }
           }
           break;

           case 8:

           for(i=0;i<2;i++)
           {
              if(i == 0)
              {
                    Winners_found = Horizontal_3(tictactoe,playercoin);
                     if(Winners_found == 1)
                    break;
              }
              else if(i == 1)
              {
                    Winners_found = Vertical_2(tictactoe,playercoin);
                     if(Winners_found == 1)
                    break;
              }
           }
           break;

           case 9:

           for(i=0;i<3;i++)
           {
              if(i == 0)
              {
                    Winners_found = Horizontal_3(tictactoe,playercoin);
                     if(Winners_found == 1)
                    break;
              }
              else if(i == 1)
              {
                    Winners_found = Vertical_3(tictactoe,playercoin);
                     if(Winners_found == 1)
                    break;
              }
              else if(i == 2)
              {
                    Winners_found = main_1(tictactoe,playercoin);
                     if(Winners_found == 1)
                    break;
              }
           }
           break;

      }

      if(Winners_found == 1)
      {
        return 1;
      }
      else
      {
        return 0;
      }                                 
}

int Horizontal_1(struct Tictactoe *tictactoe,char playercoin)
{
    int row_found=0,i;

    for(i=0;i<3;i++)
    {
        if(playercoin == tictactoe->Board[0][i])
        {
            row_found++;
        }
    }

    if(row_found == 3)
     return 1;
    else
    return 0;
}
int Horizontal_2(struct Tictactoe *tictactoe,char playercoin)
{
    int row_found=0,i;

    for(i=0;i<3;i++)
    {
        if(playercoin == tictactoe->Board[1][i])
        {
            row_found++;
        }
    }

    if(row_found == 3)
     return 1;
    else
    return 0;
}

int Horizontal_3(struct Tictactoe *tictactoe,char playercoin)
{
    int row_found=0,i;

    for(i=0;i<3;i++)
    {
        if(playercoin == tictactoe->Board[2][i])
        {
            row_found++;
        }
    }

    if(row_found == 3)
     return 1;
    else
    return 0;
}


int Vertical_1(struct Tictactoe *tictactoe,char playercoin)
{
    int colum_found=0,i;

    for(i=0;i<3;i++)
    {
        if(playercoin == tictactoe->Board[i][0])
        {
            colum_found++;
        }
    }

    if(colum_found == 3)
     return 1;
    else
    return 0;
}

int Vertical_2(struct Tictactoe *tictactoe,char playercoin)
{
    int colum_found=0,i;

    for(i=0;i<3;i++)
    {
        if(playercoin == tictactoe->Board[i][1])
        {
            colum_found++;
        }
    }

    if(colum_found == 3)
     return 1;
    else
    return 0;
}

int Vertical_3(struct Tictactoe *tictactoe,char playercoin)
{
    int colum_found=0,i;

    for(i=0;i<3;i++)
    {
        if(playercoin == tictactoe->Board[i][2])
        {
            colum_found++;
        }
    }

    if(colum_found == 3)
     return 1;
    else
    return 0;
}

int main_1(struct Tictactoe *tictactoe,char playercoin)
{
    int main_found=0,i;

    for(i=0;i<3;i++)
    {
        if(playercoin == tictactoe->Board[i][i])
        {
            main_found++;
        }
    }

    if(main_found == 3)
     return 1;
    else
    return 0;
}

int Diagonal_1(struct Tictactoe *tictactoe,char playercoin)
{
    int diagonal_found=0,i,j=2;

    for(i=0;i<3;i++)
    {
        if(playercoin == tictactoe->Board[i][j])
        {
            diagonal_found++;
        }
        j--;
    }

    if(diagonal_found == 3)
     return 1;
    else
    return 0;
}