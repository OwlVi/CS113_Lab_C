#include<stdio.h>
int main()
{  
    int subject,credit;
    char grade;
    float GPA,sum_credit = 0,sum_grade = 0;

    printf("Enter number of subject(s): ");
    scanf("%d",&subject);

    for (int i = 1 ; i <= subject; i++){
        printf("Enter credit,grade for subject #%d: ",i);
        scanf("%d,%c",&credit,&grade);

        if (grade == 'a'|| grade == 'A')
        {
            sum_grade += 4.0*credit;
        }else if (grade == 'b'|| grade == 'B')
        {
            sum_grade += 3.0*credit;
        }else if (grade == 'c'|| grade == 'C')
        {
            sum_grade += 2.0*credit;
        }else if (grade == 'd'|| grade == 'D')
        {
            sum_grade += 1.0*credit;
        }else if (grade == 'f'|| grade == 'F')
        {
            sum_grade += 0.0*credit;
        }
        sum_credit += credit;
    }
    GPA = sum_grade/sum_credit;
    printf("GPA = %.2f",GPA);
}
