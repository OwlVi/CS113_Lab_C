#include <stdio.h>

int main(){
    char input_n[10];
    printf("Enter n: ");
    fgets(input_n,sizeof(input_n),stdin);
    int n = atoi(input_n);
    
    for (int i = 0 ; i < n ;i++){
        for (int j = 0;j <= i;j++){
            if (j%2){
                printf("x");
            }else{
                printf("-");
            }
            
        }
        printf("\n");
    }
    for (int i = n-1 ; 0 < i ;i--){
        for (int j = 0;j < i;j++){
            if (j%2){
                printf("x");
            }else{
                printf("-");
            }
        }
        printf("\n");
    }
}