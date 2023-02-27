#include <stdio.h>

int main() {
    int vowel = 0;
    char str[100];
    printf("String (without a space): ");
    scanf("%s",str);
    
    for (int i = 0 ; str[i] != '\0'; i++){
        if (str[i] == 'a' || str[i] == 'A'){
            printf("%c ",str[i]);
            vowel++;   
        }else if (str[i] == 'e' || str[i] == 'E'){
            printf("%c ",str[i]);
            vowel++;   
        }else if (str[i] == 'i' || str[i] == 'I'){
            printf("%c ",str[i]);
            vowel++;   
        }else if (str[i] == 'o' || str[i] == 'O'){
            printf("%c ",str[i]);
            vowel++;   
        }else if (str[i] == 'u' || str[i] == 'U'){
            printf("%c ",str[i]);
            vowel++;
        }
    }
    if (vowel>=2){
        printf("\nThis string contains %d vowels.",vowel);
    }else{
        printf("\nThis string contains %d vowel.",vowel);
    }
}