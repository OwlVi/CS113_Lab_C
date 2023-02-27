#include<stdio.h>
int main()
{   int x,y;
    char ap;
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c",&x,&y,&ap);
    //printf("%d %d %c\n",x,y,ap);

    if (ap == 'a'||ap == 'A'){
        if (x >=12 ){
            x = x - 12;
        }
    }else if (ap == 'p' || ap == 'P'){
        if (x < 12 ){
            x = x + 12;
        }
    }
    printf("Equivalent 24-hour time: %02d:%02d",x,y);
}