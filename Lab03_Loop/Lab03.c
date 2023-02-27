#include <stdio.h>
#include <stdlib.h>

int main(){
    //input
    char x[10],y[10];
    fgets(x,10,stdin);
    fgets(y,10,stdin);

    int a = atoi(x),b = atoi(y),i = 1;
    //process
    while (a > 1 && b > 1)
    {   i = i+1;
        if (a%i == 0 && b%i == 0 )
            {   
                a = a/i;
                b = b/i;
                i = 1;
            }
        if (i > 10000){
            break;
        }
    }
    //output
    
    if (b == 1){
        printf("= %d",a);
    }else{
        printf("= %d/%d\n",a,b);
    }
}