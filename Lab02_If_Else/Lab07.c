#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x_str[5], y_str[5];

    printf("Enter the x coordinate: ");
    fgets(x_str, 5, stdin);
    printf("Enter the y coordinate: ");
    fgets(y_str, 5, stdin);
    int x = atoi(x_str);
    int y = atoi(y_str);

    int posx = 0+x,posy = 0+y;

    if (posx > 0 ){
        if (posy > 0){
            printf("North-east");
        }else if (posy < 0){
            printf("South-east");
        }else{
            printf("East");
        }
    }else if (posx < 0){
        if (posy > 0){
            printf("North-west");
        }else if (posy < 0){
            printf("South-west");
        }else{
            printf("West");
        }
    }else {
        if (posy > 0){
            printf("North");
        }else if (posy < 0){
            printf("South");
        }else{
            printf("Center");
        }       
    }

    return 0;
}