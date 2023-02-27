#include <stdio.h>
#include <string.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

void reportStock(char *filename)
{
    FILE *file = fopen(filename, "r");

    int n, find, index = 0, stockIndex;
    char line[100];

    fgets(line, sizeof(line), file); // get first line 
    sscanf(line, "%d", &n);

    Product stock[n];

    while (fgets(line, sizeof(line), file) != NULL) // loop line 
    {
        char name[30],date[30],time[30];
        int amount;
        double cost;
        sscanf(line, "%[^,],%[^,],%[^,],%d,%lf",date,time, name, &amount, &cost);

        find = 0;
        for (stockIndex = 0; stockIndex < index; stockIndex++)// find duplicate name
        {
            if (strcmp(stock[stockIndex].name, name) == 0)
            {
                find = 1;
                break;
            }
        }
        if (!find)
        {
            strcpy(stock[index].name, name);
            stock[index].amount = 0;
            stock[index].totalCost = 0.0;
            index += 1;
            stockIndex = index - 1;
        }
        
        stock[stockIndex].amount += amount;
        stock[stockIndex].totalCost += cost;
    }

    fclose(file);
    printStock(stock, index);
}


int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    reportStock(filename);

}
