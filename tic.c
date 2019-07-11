#include <stdio.h>
#include <conio.h>

int win_Condition();
void show_Board(char symb[9]);

char symbols[9]={'1','2','3','4','5','6','7','8','9'};

int main()
{
    
    int player=1,i,choice;
    char mark;
    do{
        show_Board(symbols);
        player = (player % 2) ? 1 : 2;
        printf("\n\t\tPlayer %d Enter a Number : ",player);
        scanf("%d",&choice);
     mark = (player == 1) ? 'x' : 'o' ;
     
     if (choice == 1 && symbols[0] == '1')
            symbols[0] = mark;
            
        else if (choice == 2 && symbols[1] == '2')
            symbols[2] = mark;
            
        else if (choice == 3 && symbols[2] == '3')
            symbols[3] = mark;
            
        else if (choice == 4 && symbols[3] == '4')
            symbols[4] = mark;
            
        else if (choice == 5 && symbols[4] == '5')
            symbols[5] = mark;
            
        else if (choice == 6 && symbols[5] == '6')
            symbols[6] = mark;
            
        else if (choice == 7 && symbols[6] == '7')
            symbols[7] = mark;
            
        else if (choice == 8 && symbols[7] == '8')
            symbols[8] = mark;
            
        else if (choice == 9 && symbols[8] == '9')
            symbols[9] = mark;
            
        else
        {
           printf("Invalid move ");

            player--;
            getch();
        }
       i = win_Condition();

        player++;
    } while(i == -1);
    
      show_Board(symbols);
    
    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");
    getch();
    return 0;
}

int win_Condition()
{
      if(symbols[0] == symbols[1] && symbols[1] == symbols[2])
           return 1;
else  if(symbols[3] == symbols[4] && symbols[4] == symbols[5])
           return 1;    
else  if(symbols[6] == symbols[7] && symbols[7] == symbols[8])
           return 1;    
else  if(symbols[0] == symbols[3] && symbols[3] == symbols[6])
           return 1;             
else  if(symbols[1] == symbols[4] && symbols[4] == symbols[7])
           return 1;               
else  if(symbols[2] == symbols[5] && symbols[5] == symbols[8])
           return 1;    
else  if(symbols[0] == symbols[4] && symbols[4] == symbols[8])
           return 1;    
else  if(symbols[2] == symbols[4] && symbols[4] == symbols[6])
           return 1;     
           
else  if(symbols[0]!=1 && symbols[1]!=2 && symbols[2]!=3 && symbols[3]!=4 &&
         symbols[4]!=5 && symbols[5]!=6 && symbols[6]!=7 && symbols[7]!=8 &&
         symbols[8]!=9)
            
            return 0;
            else
            return -1;
}           
           
           
void show_Board(char symb[9])
{
    printf("Tic Tac Toe Game\n");
    printf("Symbol of Player 1: x  ");
    printf("symbol of Player 2: o");
    printf(" \n\t\t\t    |     |    ");
    printf("\n\t\t\t----|-----|----");
    printf("\n\t\t\t  %c |  %c  |  %c  ",symb[0],symb[1],symb[2]);
    scanf("%c,%c");
    printf("\n\t\t\t----|-----|----");
    printf("\n\t\t\t  %c |  %c  |  %c  ",symb[3],symb[4],symb[5]);
    printf("\n\t\t\t----|-----|----");
    printf("\n\t\t\t  %c |  %c  |  %c  ",symb[6],symb[7],symb[8]);
}