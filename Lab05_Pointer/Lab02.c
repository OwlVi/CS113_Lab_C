#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char input_n[50];
    int count = 0;
    fgets(input_n,sizeof(input_n),stdin);
    int n = atoi(input_n);
    for (int c = 0 ; c < n ; c++){
        for (int b = 0 ; b < c ; b++){
            int a = sqrt((c*c) - (b*b));
                if (((a*a) + (b*b)) == (c*c) && (a + b + c == n) && b > a){
                    printf("(%d, %d, %d)",a,b,c);
                    count++;
            }
        }
    }
    if (count == 0){
        printf("No triple found.");
    }
}