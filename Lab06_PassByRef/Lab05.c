#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int board[][BOARD_SIZE],int x ,int y) {
    for (int i = 0 ; i < 8 ; i++){ // top left
        if (y-i >= 0 && x-i >= 0){
            board[y-i][x-i] = 'X';
            }
        }
    for (int i = 0 ; i < 8 ; i++){ // top right
        if (y-i >= 0 && x+i < 8){
            board[y-i][x+i] = 'X';
            }
        }
    for (int i = 0 ; i < 8 ; i++){ // bot left
        if (y+i < 8 && x-i >= 0){
            board[y+i][x-i] = 'X';
            }
        }
    for (int i = 0 ; i < 8 ; i++){ // bot right
        if (y+i < 8 && x+i < 8){
            board[y+i][x+i] = 'X';
            }
        }
    board[y][x] = 'B';
}

int main() {
    int table[BOARD_SIZE][BOARD_SIZE];
    int i,j,x,y;

    for (i = 0 ; i < BOARD_SIZE ; i++){
        for (j = 0 ; j < BOARD_SIZE; j++){
            table[i][j] = ' ';
        }
    }

    printf("Enter Bishop's X Y position: ");
    scanf("%d %d",&x,&y);
    
    bishopMoves(table,x,y);

    printf("  0 1 2 3 4 5 6 7\n");
    for (i = 0 ; i < BOARD_SIZE ; i++){
        printf("------------------\n");
        printf("%d|",i);

        for (j = 0 ; j < BOARD_SIZE; j++){
            printf("%c|",table[i][j]);
        }
        printf("\n");
    }
    printf("------------------\n");
}
