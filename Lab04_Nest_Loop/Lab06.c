#include <stdio.h>
#include <stdlib.h>
int main()
{
    char input_goal[10],input_money[10];
    printf("Enter your goal amount: ");
    fgets(input_goal,sizeof(input_goal),stdin);

    float target = atof(input_goal),money = 0;
    int count = 1;

    while (1){   
        printf("Enter money collected today: ");
        fgets(input_money,sizeof(input_money),stdin);
        float collect_money = atof(input_money);
        money = money + collect_money;
        if (money >= target){
            break;  
        }
        printf("Total money collected up to day %d is %.2f. You need %.2f more.\n",count,money,target-money);
        count ++;
    }
    if (count == 1){
        printf("Congratulations! You take %d day to reach your goal.",count);

    }else{
        printf("Congratulations! You take %d days to reach your goal.",count);
    }

}