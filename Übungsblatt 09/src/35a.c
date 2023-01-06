/* Aufgabe 35a*/

#include <stdio.h>
#include <string.h>

char *str_rchr(const char *cs, int c);

int main(void)
{
	printf("%s\n", str_rchr("", 'g'));
	printf("%s\n", str_rchr("", '\0'));
	printf("%s\n", str_rchr("Schokolade", 'o'));
	printf("%s\n", str_rchr("Schokolade", 'x'));
	

	return 0;
} 

char *str_rchr(const char *cs, int c)
{
	char *p = NULL;

	if(cs == NULL && (char)c != '\0'){
		

		return NULL;
	}

	while(*cs != '\0'){
		if( *cs == (char)c){
			p = (char *)cs;
		}
		++cs;
	}
	return p;
}

