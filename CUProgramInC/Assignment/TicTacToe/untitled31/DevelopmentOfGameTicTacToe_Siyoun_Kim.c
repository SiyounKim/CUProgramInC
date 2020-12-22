/*
    Created by Siyoun Kim on 07/12/2020
    This is the implementation of game, tic tac toe
*/
#include <stdio.h>
int determiningWinner();
void ticTacToeBoardDisplay();
char board[3][3] = { {'1', '2', '3'}, { '4', '5', '6'}, {'7', '8', '9'}};

int main()
{
    int player = 1, status, x;
    char fill;

// The purpose of using do while loop is that it executes at least one time so that there would be evaluation of certain conditios.
    do
    {
        ticTacToeBoardDisplay(); // displaying the board every single time when the player plays game.
        // setting two players
        // of note that remainder 1 is always player 1 and remainder 2 is always player 2
        if(player%2)
        {
            player = 1; //odd
        }
        else
        {
            player = 2; //even
        }
        printf("Enter a location (player %d):  ", player);
        scanf("%d", &x); //x is the user's location.
        if(player == 1)
        {
            fill = 'X';
        }
        // if the player is not 1 then the player must be 2
        else
        {
            fill = 'O';
        }
        // filling O or X into specific array location when each player select the location
        if(x == 1 && board[0][0] == '1') {
            board[0][0] = fill;
        }
        else if(x == 2 && board[0][1] == '2')
        {
            board[0][1] = fill;
        }
        else if(x == 3 && board[0][2] == '3')
        {
            board[0][2] = fill;
        }
        else if(x == 4 && board[1][0] == '4')
        {
            board[1][0] = fill;
        }
        else if(x == 5 && board[1][1] == '5')
        {
            board[1][1] = fill;
        }
        else if(x == 6 && board[1][2] == '6')
        {
            board[1][2] = fill;
        }
        else if(x == 7 && board[2][0] == '7')
        {
            board[2][0] = fill;
        }
        else if(x == 8 && board[2][1] == '8')
        {
            board[2][1] = fill;
        }
        else if(x == 9 && board[2][2] == '9')
        {
            board[2][2] = fill;
        }
        else
        {
            printf("Wrong input: ");
            // going backward
            player--;
            //getting player's input again
            getchar();
        }
        status = determiningWinner(); // determining the winner
        player++; //increment to change the player
    }while (status ==  - 1);
// the board should be indicated again to show off the result to the user
    ticTacToeBoardDisplay();
    if (status == 1)
    {
        // --player is required, otherwise, another player would be winner
        printf("The winner is player %d", --player);
    }
    else //status is 0
    {
        printf("Draw");
    }
    return 0;
}

int determiningWinner()
{
// if return value is 1 then tic tak toe is finished and there is winner
    if (board[0][0] == board[0][1] && board[0][1] == board[0][2])
    {
        return 1;
    }
    else if (board[1][0] == board[1][1] && board[1][1] == board[1][2])
    {
        return 1;
    }
    else if (board[2][0] == board[2][1] && board[2][1] == board[2][2])
    {
        return 1;
    }
    else if (board[0][0] == board[1][0] && board[1][0] == board[2][0])
    {
        return 1;
    }
    else if (board[0][1] == board[1][1] && board[1][1] == board[2][1])
    {
        return 1;
    }
    else if (board[0][2] == board[1][2] && board[1][2] == board[2][2])
    {
        return 1;
    }
    else if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return 1;
    }
    else if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return 1;
    }
// when the return value is 0, tic tak toe is finished but there is no winner
    else if (board[0][0] != '1' && board[0][1] != '2' && board[0][2] != '3' && board[1][0] != '4' && board[1][1] != '5' && board[1][2] != '6' && board[2][0]!= '7' && board[2][1] != '8' && board[2][2] != '9')
    {
        return 0;
    }
// when the return value is -1, tic tak toe is not finished yet
    else
    {
      return -1;
    }
}

void ticTacToeBoardDisplay()
{
    printf("Player 1 (X) VS Player 2 (O)\n");
    // implementation of 2d array
    for(int i=0; i<3; i++)
    {
        printf("---|---|---\n");
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        printf("---|---|---\n");
    }
}