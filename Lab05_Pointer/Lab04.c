#include <stdio.h>
int main(){
    double n,Pi = 0;
    printf("Enter n: ");
    scanf("%lf",&n);
    for (double i = 0,j = 1 ; i < n ; i++,j += 2){
        if ((int)i%2){
            Pi -= (4.0/j);
        }else{
            Pi += (4.0/j);
        }
    }
    printf("%.10lf",Pi);
}