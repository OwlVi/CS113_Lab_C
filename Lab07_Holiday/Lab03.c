#include <stdio.h>

int main ()
{
    int x=1, y=0, z=32;
    float i=65;
    char a='A', b='a';

    printf("%d\n",(b==a+z)&&(x>y));
    
    printf("%d\n",(y==z)&&(!y));
            
    printf("%d\n",(a/4==i/4)||(!z));

    printf("%d\n",(z>=y)&&(a!=65));

    printf("%d\n",(x*y)||(x)&&(z%5));

    printf("%d\n",(b<i)||(z/2));
    
}