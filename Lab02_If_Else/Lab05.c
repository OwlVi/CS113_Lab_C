#include <stdio.h>
#include <stdlib.h>

int main(){
    //input
    char Sidea[10],Sideb[10],Sidec[10];
    printf("Enter length of side A: ");
    fgets(Sidea,10,stdin);

    printf("Enter length of side B: ");
    fgets(Sideb,10,stdin);

    printf("Enter length of side C: ");
    fgets(Sidec,10,stdin);
    int iSidea = atoi(Sidea),iSideb = atoi(Sideb),iSidec = atoi(Sidec);
    //process
    if ((iSidea + iSideb) <= iSidec || (iSideb + iSidec) <= iSidea || (iSidea + iSidec) <= iSideb) 
    {
        printf("Triangle type is invalid.");
    }
    else if(((iSidea > iSideb) && (iSideb == iSidec) )|| ((iSideb > iSidea) && (iSidea == iSidec)) || ((iSidec > iSideb) && (iSideb == iSidea)))
    {
        printf("Triangle type is isosceles.");
    }
    else if ((iSidea != iSideb) && (iSideb != iSidec) && (iSidec != iSidea))
    {
        printf("Triangle type is scalene.");
    }
    else
    {
        printf("Triangle type is equilateral.");
    }
}