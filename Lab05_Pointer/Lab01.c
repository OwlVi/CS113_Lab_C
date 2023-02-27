#include <stdio.h>
#include <stdlib.h>

int main(){
    char n[50];
    printf("Input n = ");
    fgets(n,sizeof(n),stdin);
    long long int number = atoi(n),i,j;
    int count = 0,countk = 0;
    
    printf("n^2 = %lld\n",number*number);

    for (int k = number; k > 0 ; k = k / 10){
        countk++;
    }

    for (i = number*number, j= number ; i >= 1 && j != 0; i = i/10, j /= 10){
        if ((j)%10 == (i)%10 ){
            count++;
        }
    }

    if ((count == countk )|| (number == 0) || (number == 1)  ){
        printf("Yes. %lld is automorphic number.",number);
    }else{
        printf("No. %lld is not automorphic number.",number);
    }

}