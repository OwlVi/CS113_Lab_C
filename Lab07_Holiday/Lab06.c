#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *A,*B;
    //ex malloc() | ptr = (int*) malloc(100 * sizeof(int));
    //ex calloc() | ptr = (int*) calloc(25, sizeof(int));
    //ex realloc()| ptr = realloc(ptr, 100 * sizeof(int));
    A=(int*)malloc(20*sizeof(int)); // ans 1
    B=(int*)calloc(10,sizeof(int)); // ans 2
    A=realloc(A,10*sizeof(int));    // ans 3
    B=realloc(B,15*sizeof(int));    // ans 4
    
}