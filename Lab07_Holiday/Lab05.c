#include <stdio.h>

int main()
{
    int i, j=12;
    int *pi, *pj=&j;
    *pj = j+3;
    i = *pj+7;
    pi = pj;
    *pi = i+j;

    /*i คือ FF04 และตัวแปร j คือ FF00*/

    printf("%p\n",&i);      //  FF04
    printf("%p\n",&j);      //  FF00
    printf("%p\n",pj);      //  FF00
    printf("%d\n",*pj);     //  37
    printf("%d\n",i);       //  22
    printf("%p\n",pi);      //  FF00
    printf("%d\n",*pi);     //  37
    printf("%p\n",pi+2);    //  FF08
    printf("%d\n",*pi+2);   //  39
    printf("%d\n",*pi+*pj); //  74
}