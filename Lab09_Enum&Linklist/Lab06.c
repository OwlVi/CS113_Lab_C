#include <stdio.h>

int main()
{   unsigned char x;
    int n;

    printf("Enter an 8-bit number: ");
    scanf("%d", &n);
    x = (unsigned char)n;
    int numbits =
    (x & (1 << 0) ? 1 : 0)+
    (x & (1 << 1) ? 1 : 0)+
    (x & (1 << 2) ? 1 : 0)+
    (x & (1 << 3) ? 1 : 0)+
    (x & (1 << 4) ? 1 : 0)+
    (x & (1 << 5) ? 1 : 0)+
    (x & (1 << 6) ? 1 : 0)+
    (x & (1 << 7) ? 1 : 0);
    
    

    printf("The number %d has %d non-zero bits\n", x, numbits);
    return 0;
}