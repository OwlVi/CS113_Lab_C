#include <stdio.h>
#include <stdlib.h>

int main(){
    char input_n[5];
    fgets(input_n,5,stdin);
    int i,n = atoi(input_n);
    if (n <= 26 && n > 0){
        for ( i = 96+n; i > 97; i--){
            printf("%c", i);
            if (i != 97){
                printf("-");
            }
        }
        for (i = 97 ; i < n+97;i++){   
            if (i != 97){
                printf("-");
            }
            //printf("-");
            printf("%c", i);
        }
    }else{
        printf("-");
    }
}