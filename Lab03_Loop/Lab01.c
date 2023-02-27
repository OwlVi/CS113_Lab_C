#include <stdio.h>
#include <stdlib.h>

int main(){
    //input
    char yen[10];
    fgets(yen,10,stdin);

    int yenchar = atoi(yen);
    //process
    while ( yenchar >= 0){
        //output
        printf("%d \n",yenchar);
        yenchar = yenchar - 1;
    }
}   