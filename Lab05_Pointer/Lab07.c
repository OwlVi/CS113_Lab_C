#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of rows or columns: ");
    scanf("%d",&n);
    int a[n][n];

    // Assign value to array a
    for (int x = 0; x < n;x++){
        for (int y = 0; y < n;y++){
            a[x][y] = y+1+x;
        }
    }

    // Print all values in array a
    for(i = 0 ;i < n;i++) {
        for(j = 0 ;j < n;j++)
        printf("%2d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
