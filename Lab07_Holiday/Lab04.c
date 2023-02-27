#include <stdio.h>

int main()
{
    int a[10] = {0, 1}, *ptr;
    int  k;
    ptr  =  a+2;
    printf("a[%d]:%d    %p\n",0,a[0],&a[0]);
    printf("a[%d]:%d    %p\n",1,a[1],&a[1]);
    for(k=2; k<10; k++){
        a[k] = a[k-1]+a[k-2];
        printf("a[%d]:%d    %p\n",k,a[k],&a[k]);
    }

    /* a คือ FFE0 */

    printf("%d\n",*ptr);        // 1
    printf("%d\n",*(ptr+1));    // 2
    printf("%d\n",ptr);         // FFE8
    printf("%d\n",ptr[3]);      // 5
    printf("%d\n",ptr[-1]);     // 1
    printf("%p\n",&a[4]);       // FFF0
    printf("%d\n",*(ptr+2));    // 3
    printf("%p\n",ptr+3);       // FFF4
    printf("%p\n",&ptr[3]);     // FFF4
    printf("%d\n",ptr[5]);      // 13
}