#include <stdio.h>
#include <stdlib.h>
//01 แปลงเลขฐาน 4 bit
int main()
{
    char yen[10];
    fgets(yen,10,stdin);
    int num = atoi(yen),i = 0,x = 1,n = num ;
    while (num > 0)
    {
        i += (num%2)*x;
        num = num/2;
        x = x*10;     
    }
    printf("Binary number of %d is %04d.",n,i);
}