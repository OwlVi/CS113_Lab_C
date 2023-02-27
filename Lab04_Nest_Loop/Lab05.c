#include <stdio.h>
#include <stdlib.h>
int Rangoli(int x){
    int row = (x*2)-1; 
    int column = (row*2)-1;
    /*>>>> loop top <<<<*/
    for (int i = row/2,j =0; i > 0; i--,j = j+2)
    {       /*>>>> loop row <<<<*/
        for (int k = column/2,l = 0  ;k >= 0 ; k--,l++){   /*>>>> loop column <<<<*/
            if ( k == 0){
                printf("%c",'a'+i);
            }else if (j >= k && k % 2 == 0 ){
                printf("%c",'a'+(k/2)+i);
            }else{
                printf("-");
            }
        }
        for (int k = 1 ,l = 0  ;k <= column/2 ; k++,l++){   /*>>>> loop column <<<<*/
            if (j >= k && k % 2 == 0 ){
                printf("%c",'a'+(k/2)+i);
            }else{
                printf("-");
            }
        }
        printf("\n");
    }
    /*>>>> loop bottom <<<<*/
    for (int i = 0,j = row-1; i <= row/2; i++,j = j-2) {       /*>>>> loop row <<<<*/
        for (int k = column/2 ; k >= 0 ; k--){   /*>>>> loop column <<<<*/
            if (j >= k && k % 2 == 0 && k != 0){
                printf("%c",'a'+(k/2)+i);
            }else if (k == 0){
                printf("%c",'a'+i);
            }else{
                printf("-");
            }
        }
        for (int k = 1 ; k <= column/2 ; k++){   /*>>>> column <<<<*/
            if (j >= k && k % 2 == 0 && k != 0 ){
                printf("%c",'a'+(k/2)+i);
            }else{
                printf("-");
            }
        }
        printf("\n");
    }
}

int main(){
    char input_n[5];
    fgets(input_n,5,stdin);
    int n = atoi(input_n);
    if (n <= 26 && n > 0){
        Rangoli(n);
    }else{
        printf("-");
    }
}