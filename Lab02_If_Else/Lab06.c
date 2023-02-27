#include <stdio.h>
#include <stdlib.h>

int main(){
    //input
    char sam = getchar();
    //process
    if ('a'<= sam && sam <= 'z'){
        printf("Output: lower case ");
    }else if ('A'<= sam && sam <= 'Z'){
        printf("Output: upper case ");
    }else if ('0' <= sam && sam <= '9'){
        printf("Output: digit");
    }else{
        printf("Output: others");
    }
}