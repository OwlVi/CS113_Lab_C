#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int L,N,i,j,count,temp = 1;
    
    scanf("%d",&L);
    scanf("%d",&N);
    char str1[L],str2[L];
    scanf("%s",str1);
    
    for (i = 1 ; i < N  ; i++){
        count = 0;
        scanf("%s",str2);
        for (j = 0; j < L; j++){
            if(str2[j] != str1[j]){
                count++;
            }
            if (count >= 3){
                temp = 0;
            }
        }
        if(temp){
            strcpy(str1, str2);
        }

    }
    str1[L] = '\0';
    printf("%s",str1);
}