#include<stdio.h>
#define N 3

 void ticTacToe(){
     int loc,turn=0;
    char board[N][N] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    printBoard(board);

    fillBoardFirstPlayer(board);
    fillBoardSecondPlayer(board);
    fillBoardFirstPlayer(board);
    fillBoardSecondPlayer(board);
    fillBoardFirstPlayer(board);
    fillBoardSecondPlayer(board);
    fillBoardFirstPlayer(board);
    fillBoardSecondPlayer(board);
    fillBoardFirstPlayer(board);
    fillBoardSecondPlayer(board);
 }

 int fillBoardFirstPlayer(char board[N][N]){
    int count=0,i,j,loc;


    printf("\nEnter the location (First Player): ");
    scanf("%d",&loc);


     if(loc<1 || loc>9){
        printf("\nEnter the correct location !!\n");
        fillBoardFirstPlayer(board);
    }
    else{
        for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            count++;
            if(count==loc){
                    if(board[i][j]=='X' || board[i][j]=='O'){
                        printf("\nLocation already filled !!\n");
                    }
                    else{

                board[i][j]='X';
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
                    }
                    else{

                board[i][j]='O';
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
        case 1: printf("\n");
                ticTacToe();

        case 0: break;

        default: printf("\nEnter the correct command !!");
    }

 }
 return 0;
 }
