#include <stdio.h>
#include <stdlib.h>

int bitw(int n){
    if (n == 0){
        return 0;
    }else{
        bitw(n >> 1);
        printf("%d", n & 1);
        
    }
}
int main()
{
    char input_n[10];
    fgets(input_n,sizeof(input_n),stdin);

    float n = atof(input_n);
    if (n == 0){
        printf("0");
    }else{
        bitw(n);
    }
}