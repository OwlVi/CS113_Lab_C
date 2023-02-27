#include <stdio.h>
#include <stdlib.h>
//04 พิมพ์สี่เหลี่ยมขนมเปียกปูน
int main(){
    char input_x[10], input_y[10];
    fgets(input_x, 10, stdin);
    fgets(input_y, 10, stdin);

    int x,y,i,j,k,l;
    x = atoi(input_x);
    y = atoi(input_y);
    
    for (i = y ; 0 < i; i--){
        for (k=0;k<y-i;k++){
            printf(" ");
        }
        if (i == 1 || i == y){
            for (j = 0 ; j<x ; j++){
                printf("*");
            }
            printf("\n");
        }else{
            printf("*");
            for (l=0;l<x-2;l++){
                printf(" ");
            }
            printf("*");
            printf("\n");
        }

    }
}