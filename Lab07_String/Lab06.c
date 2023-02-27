#include <stdio.h>

int charcount(char *s)
{  int i;
   for (i = 0; s[i] != '\0';i++){
      }
   return i;
}

void charweave(char *s,char *result)
{  
   int len = charcount(s),i,j,k;
   for (i = 0,j = 1,k = 0; i < len*2 ; i++){
      if (i % 2 == 0){
         result[i] = s[k];
         k++;
      }else{
         result[i] = s[len-j];
         j++;
      }
   }
   result[i] = '\0';
}

int main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}