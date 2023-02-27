#include <stdio.h>
#include <stdlib.h>

int main(){
    //input
    char numf[40],numl[40];
    fgets(numf,40,stdin);
    fgets(numl,40,stdin);

    long long Mnum = atoll(numf),Nnum = atoll(numl);
    unsigned long GCD,LCM,x = Mnum,y = Nnum ;

    //process
    if (y > x ){
        x = Nnum;
        y = Mnum;
    } 
    while (y > 0){
        GCD = y;
        y = x%y;
        x = GCD;
    }

    //output
    LCM = Mnum*Nnum/GCD;
    printf("GCD: %lu\n",GCD);
    printf("LCM: %lu\n",LCM);
}