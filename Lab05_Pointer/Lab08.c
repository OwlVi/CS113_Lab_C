#include <stdio.h>

int main(){
    int n,count = 1,step = 0,in_step;

    printf("Input number of stairs: ");
    scanf("%d",&n);

    while (1){
        printf("---- round %d ----\n",count);
        if (step >= n-2 ){
            step = n - 2;
            for (int i = 0 ; i < n ;i++){
                if ((i + step == n-1)){
                    printf("|-^-|\n");
                }else if((i + step == n-2) ){
                    printf("|-O-|\n");
                }else{
                    printf("|---|\n");
                }
            }
        }else if (step <= 0){
            for (int i = 0 ; i < n ;i++){
                if ((i  == n-1)){
                    printf("|-^-|\n");
                }else if((i  == n-2) ){
                    printf("|-O-|\n");
                }else{
                    printf("|---|\n");
                }
            }
            step = 0;
        }else{
            for (int i = 0 ; i < n ;i++){
                if ((i + step == n-1)){
                    printf("|-^-|\n",i+step);
                }else if((i + step == n-2) ){
                    printf("|-O-|\n",i+step);
                }else{
                    printf("|---|\n");
                }
            }
        }

        printf("Input step command: ");
        scanf("%d",&in_step);
       
        if (in_step == 0){
            break;
        }
        step += in_step;
        count++;
    }   
}