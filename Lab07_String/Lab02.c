#include <stdio.h>

int remove_vowel(char *str) {
    int i = 0,j = 0;
    while(str[i]){
        if (str[i] != 'a' && str[i] != 'A' && 
            str[i] != 'e' && str[i] != 'E' && 
            str[i] != 'i' && str[i] != 'I' && 
            str[i] != 'o' && str[i] != 'O' && 
            str[i] != 'u' && str[i] != 'U'){
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
  char str[80];

  printf(" Input: ");
  gets(str);

  remove_vowel(str);
  printf("Output: %s\n", str);

  return 0;
}
