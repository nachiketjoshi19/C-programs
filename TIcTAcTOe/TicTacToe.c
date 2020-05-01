#include <stdio.h>

char matrix[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice, player;
int checkForWin();
void display();
void input(char mark);
void run();
int main()
{
    printf("TIC TAC TOE BY NJ");
    run();
    display();
    return 0;
}
void run()
{
    int gameStatus;
    char mark;
    player = 1;
    do
    {
        display();
        if (player % 2)
        {
            player = 1;
        }
        else
        {
            player = 2;
        }
        printf("Player %d, enter a number:", player);
        scanf("%d", &choice);
        if (player == 1)
        {
            mark = 'X';
        }
        else
        {
            mark = 'O';
        }
        input(mark);
        gameStatus = checkForWin();
        player++;

    } while (gameStatus == -1);
    if (gameStatus == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");
}

int checkForWin()
{
    int returnValue = 0;

    if (matrix[1] == matrix[2] && matrix[2] == matrix[3])
    {
        returnValue = 1;
    }
    else if (matrix[4] == matrix[5] && matrix[5] == matrix[6])
        returnValue = 1;

    else if (matrix[7] == matrix[8] && matrix[8] == matrix[9])
        returnValue = 1;

    else if (matrix[1] == matrix[4] && matrix[4] == matrix[7])
        returnValue = 1;

    else if (matrix[2] == matrix[5] && matrix[5] == matrix[8])
        returnValue = 1;

    else if (matrix[3] == matrix[6] && matrix[6] == matrix[9])
        returnValue = 1;

    else if (matrix[1] == matrix[5] && matrix[5] == matrix[9])
        returnValue = 1;

    else if (matrix[3] == matrix[5] && matrix[5] == matrix[7])
        returnValue = 1;

    else if (matrix[1] != '1' && matrix[2] != '2' && matrix[3] != '3' &&
             matrix[4] != '4' && matrix[5] != '5' && matrix[6] != '6' && matrix[7] != '7' && matrix[8] != '8' && matrix[9] != '9')
        returnValue = 0;
    else
        returnValue = -1;

    return returnValue;
}

void display()
{

    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
    
printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", matrix[1], matrix[2], matrix[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", matrix[4], matrix[5], matrix[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", matrix[7], matrix[8], matrix[9]);

    printf("     |     |     \n");
   
}

void input(char mark)
{
    if (choice == 1 && matrix[1] == '1')
        matrix[1] = mark;

    else if (choice == 2 && matrix[2] == '2')
        matrix[2] = mark;

    else if (choice == 3 && matrix[3] == '3')
        matrix[3] = mark;

    else if (choice == 4 && matrix[4] == '4')
        matrix[4] = mark;

    else if (choice == 5 && matrix[5] == '5')
        matrix[5] = mark;

    else if (choice == 6 && matrix[6] == '6')
        matrix[6] = mark;

    else if (choice == 7 && matrix[7] == '7')
        matrix[7] = mark;

    else if (choice == 8 && matrix[8] == '8')
        matrix[8] = mark;

    else if (choice == 9 && matrix[9] == '9')
        matrix[9] = mark;
    else
    {
        printf("Invalid move ");

        player--;
    }
}