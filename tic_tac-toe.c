#include<stdio.h>
#define N 3

 void ticTacToe(){

     int flag = -1,i;
    char board[N][N] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};


    printBoard(board);
    while(flag != 1){
            fillBoardFirstPlayer(board);
            if((board[0][0]=='X'&&board[0][1]=='X'&&board[0][2]=='X')||(board[1][0]=='X'&&board[0][0]=='X'&&board[2][0]=='X')||(board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]=='X')||(board[0][2]=='X'&&board[1][2]=='X'&&board[2][2]=='X')||(board[1][0]=='X'&&board[1][1]=='X'&&board[1][2]=='X')||(board[2][0]=='X'&&board[2][1]=='X'&&board[2][2]=='X')||(board[1][1]=='X'&&board[0][0]=='X'&&board[2][2]=='X')||(board[0][2]=='X'&&board[1][1]=='X'&&board[2][0]=='X')){
                flag =1;
                printf("\n\t  Player 1 WON !!\n");
            }
            else{

                if(board[0][0]!='1'&&board[0][1]!='2'&&board[0][2]!='3'&&board[1][0]!='4'&&board[1][1]!='5'&&board[1][2]!='6'&&board[2][0]!='7'&&board[2][1]!='8'&&board[2][2]!='9'){
                flag =1;
                printf("\n\t  It's a DRAW !!\n");
            }else
                fillBoardSecondPlayer(board);

            }
            if((board[0][0]=='O'&&board[0][1]=='O'&&board[0][2]=='O')||(board[1][0]=='O'&&board[0][0]=='O'&&board[2][0]=='O')||(board[0][1]=='O'&&board[1][1]=='O'&&board[2][1]=='O')||(board[0][2]=='O'&&board[1][2]=='O'&&board[2][2]=='O')||(board[1][0]=='O'&&board[1][1]=='O'&&board[1][2]=='O')||(board[2][0]=='O'&&board[2][1]=='O'&&board[2][2]=='O')||(board[1][1]=='O'&&board[0][0]=='O'&&board[2][2]=='O')||(board[0][2]=='O'&&board[1][1]=='O'&&board[2][0]=='O')){
                flag =1;
                printf("\n\t  Player 2 WON !!\n");
            }



    }


}






 int fillBoardFirstPlayer(char board[N][N]){
    int count=0,i,j,loc;


    printf("\nEnter the location (First Player): ");
    scanf("%d",&loc);


     if(loc<1 || loc>9){
        printf("\nEnter the correct location !!\n");

        printBoard(board);
        fillBoardFirstPlayer(board);
    }
    else{
        for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            count++;
            if(count==loc){
                    if(board[i][j]=='X' || board[i][j]=='O'){
                        printf("\nLocation already filled !!\n");
                        printBoard(board);
                        fillBoardFirstPlayer(board);
                    }
                    else{

                board[i][j]='X';
                system("cls");
                printBoard(board);
                    }
            }
        }
    }

    }



 return 0;
 }

 int fillBoardSecondPlayer(char board[N][N]){
    int count=0,i,j,loc;


    printf("\nEnter the location (Second Player): ");
    scanf("%d",&loc);


     if(loc<1 || loc>9){
        printf("\nEnter the correct location !!\n");

        fillBoardSecondPlayer(board);
    }
    else{
        for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            count++;
            if(count==loc){
                if(board[i][j]=='X' || board[i][j]=='O'){
                        printf("\nLocation already filled !!\n");
                        fillBoardSecondPlayer(board);
                    }
                    else{

                board[i][j]='O';
                system("cls");
                printBoard(board);
                    }
            }
            }
        }
    }


 return 0;
 }

 int printBoard(char board[N][N]){
     int i,j;
     printf("\n\n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(j==2)
                printf("  %c  ",board[i][j]);
            else if(j==0)
                printf("\t  %c  |",board[i][j]);
            else
                printf("  %c  |",board[i][j]);
        }
        if(i==2)
            printf("\n");
        else{
            printf("\n");
            printf("\t-----------------\n");
            }
    }

    return 0;
 }

 int main(){

 int select;
 while(select!=0){
 printf("\nSelect from the menu :\n\t1 for Tic Tac Toe game.\n\t0 To quit\n");
 scanf("  %d",&select);

    switch(select){
        case 1: system("cls");
                printf("\n");
                ticTacToe();

        case 0: break;

        default: printf("\nEnter the correct command !!");
    }

 }
 return 0;
 }
