#include <stdio.h>

int main(){
    float n,v;
    char op;
    int i = 1;
    printf("Initial Value: ");
    scanf("%f",&n);

    while (i){   
        printf("\nOperator: ");
        scanf(" %c",&op);

        switch (op){
        case '+':
            printf("Input Value: ");
            scanf("%f",&v);
            n = n + v;
            break;
        case '-':
            printf("Input Value: ");
            scanf("%f",&v);
            n = n - v;
            break;
        case '*':
            printf("Input Value: ");
            scanf("%f",&v);
            n = n * v;
            break;
        case '/':
            printf("Input Value: ");
            scanf("%f",&v);
            n = n / v;
            break;
        default:
            i = 0;
            break;
        }
        if (i){
            printf("Present Value is %.4f\n",n);
        }
    }
    printf("\n");
    printf("Finish Calculation. Final Value is %.4f",n);
}