#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STR_LETTERS 1
#define ERROR 0

int check_string(const char str[]);

int main(void)
{
	char string[10] = "AScDsC";

	printf("check_string(): %s\n", check_string(string) == STR_LETTERS ? "Nur lateinische Buchstaben" : "Fehler");

	return 0;
}

int check_string(const char str[])
{
	int i;
	int alpha = 0;

	for(i = 0; i <= (int)strlen(str); i++){
		alpha += isalpha(str[i]);
	}

	return alpha == (int)strlen(str) ? STR_LETTERS : ERROR;

	
}
