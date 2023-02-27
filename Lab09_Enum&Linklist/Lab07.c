#include <stdio.h>

double findAverage(char *filename) {
    FILE* fp;
    fp = fopen(filename, "r"); 
    double number, sum = 0.0;
    int count = 0;
    
    while (fscanf(fp, "%lf", &number) != EOF) { 
        sum += number;
        count++;
    }
    return sum / count;
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);

}