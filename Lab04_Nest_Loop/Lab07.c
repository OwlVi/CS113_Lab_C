#include <stdio.h>

int main(){
    char input_n[10];
    fgets(input_n,sizeof(input_n),stdin);
    int n = atoi(input_n);
    for (int i = 0 ; i < n; i++){
        for (int j = n-1 ;j < n+i;j++){
            printf("*");
        }
        printf("\n");

    }
    for (int i = 0 ; i < n; i++){
        for (int j = i ;j < n-1;j++){
            printf("*");
        }
        printf("\n");
    }
}