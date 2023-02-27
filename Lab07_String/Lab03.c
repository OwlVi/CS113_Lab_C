#include <stdio.h>

void stringcat(char src[], char dest[])
{  
    int i = 0,j = 0;
    while (dest[i] != '\0'){
        i++;
    }
    while (src[j] != '\0'){
        dest[i+j] = src[j];
        j++;
    }
    dest[i+j] = '\0';
    
}

int main()
{
  char in1[100],in2[100];

  printf("Input 1: ");
  gets(in1);  /* read a line of characters from the input to "in1" variable */
  printf("Input 2: ");
  gets(in2);  /* read another line of characters from the input to "in2" variable */
  stringcat(in1,in2);
  printf(" Output: ");
  printf("%s\n",in2);
  return 0;
}