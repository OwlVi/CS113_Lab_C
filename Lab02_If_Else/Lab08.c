#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //input
    char size[5],expep[5],exche[5],exmus[5];
    double prize,cost,area,extra,fsize,fexpep,fexche,fexmus;
    
    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(size,5,stdin);
    int isize = atoi(size);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(expep,5,stdin);
    int iexpep = atoi(expep);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(exche,5,stdin);
    int iexche = atoi(exche);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(exmus,5,stdin);
    int iexmus = atoi(exmus);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    //process
    if (isize == 1){
        fsize = 10;
    }else if (isize == 2){
        fsize = 16;
    }else if (isize == 3){
        fsize = 20;
    }
    if (iexpep == 1){
        fexpep = 0.5f;
    }
    if (iexche == 1){
        fexche = 0.25f;
    }
    if (iexmus == 1){
        fexmus = 0.3f;
    }
    extra = fexmus + fexche + fexpep;
    area = (M_PI*(fsize*fsize))/4;
    cost = 5 + (2*area) + (extra*area);
    prize = 1.5f*cost;
    //output
    printf("Your order costs %.2f baht.\nThank you.",prize);
}