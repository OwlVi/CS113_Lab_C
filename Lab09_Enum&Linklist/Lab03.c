#include <stdio.h>
#include <math.h>

typedef struct 
{    
    double x;
    double y;
    
}point;


int main()
{

    int n;
    double result = 0;
    printf("Number of Points: ");
    scanf("%d",&n);

    point points[n];

    for (int i = 0; i < n; i++)
    {   
        printf("P%d.X: ",i+1);
        scanf("%lf",&points[i].x);
        printf("P%d.Y: ",i+1);
        scanf("%lf",&points[i].y);
    }

    printf("Length:\n");
    for (int i = 0; i < n-1;i++)
    {
        result = sqrt(pow(( points[i+1].x - points[i].x ),2) 
                    + pow(( points[i+1].y - points[i].y ),2));
        printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is %.2lf\n",i+1,points[i].x,points[i].y,i+2,points[i+1].x,points[i+1].y,result);
    }
}