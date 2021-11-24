
#include"header.h"
void DisplayBoard(char* matrix)
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

    printf("     |     |     \n\n");
}