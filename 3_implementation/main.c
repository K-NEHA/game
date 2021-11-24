#include <stdio.h>
#include"header.h"

char matrix[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int CheckForWin();
void DisplayBoard();
void rules();

int main (){
    int player = 1, i, ch;
    char place;
    rules();

    do
    {
        DisplayBoard(matrix);
        player = (player % 2) ? 1 : 2;
        printf("Player %d, Enter a Number:  ", player);
        scanf("%d", &ch);
        place = (player == 1) ? 'X' : 'O';
       
        if (ch==1 && matrix[1]=='1')
            matrix[1]=place;
        
        else if (ch==2 && matrix[2]=='2')
            matrix[2]=place;

        else if (ch==3 && matrix[3]=='3')
            matrix[3]=place;

        else if (ch==4 && matrix[4]=='4')
            matrix[4]=place;

        else if (ch==5 && matrix[5]=='5')
            matrix[5]=place;

        else if (ch==6 && matrix[6]=='6')
            matrix[6]=place;

        else if (ch==7 && matrix[7]=='7')
            matrix[7]=place;

        else if (ch==8 && matrix[8]=='8')
            matrix[8]=place;

        else if (ch==9 && matrix[9]=='9')
            matrix[9]=place;

        else
        {
            printf("Invalid move ");

            player--;
            char a;
            scanf("%c",&a);
        }
        i=CheckForWin(matrix);
        player++;
     }while (i ==  - 1);
     DisplayBoard(matrix);
     if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    char b;
    scanf("%c",&b);

    return 0;
}




