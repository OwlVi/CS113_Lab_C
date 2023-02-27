#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char* stoupper(const char *str) {
	int i;
	char *result = (char *)malloc(sizeof(*str));
	for (i = 0; str[i] != '\0'; i++) {
		result[i] = toupper(str[i]);
	}
	result[i] = '\0';
	return result;
}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}