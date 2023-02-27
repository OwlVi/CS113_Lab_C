#include <stdio.h>

int main()
{
   int amount = 98;
   int fifb,tweb,fivb,oneb;
    fifb = amount/50;
    tweb = amount % 50 / 20;
    fivb = (amount - fifb*50 - tweb*20) / 5;
    oneb = (amount - fifb*50 - tweb*20 - fivb*5);
    printf("1: %d\n5: %d\n20: %d\n50: %d\n",oneb,fivb,tweb,fifb);


}