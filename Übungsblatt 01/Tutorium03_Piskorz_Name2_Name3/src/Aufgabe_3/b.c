#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main(void)
{	
	int n, i;
	srand(time(NULL));
	n = rand() % 128;


	printf("Zeichen \t|\t ASCII\n");		/* Formatierung der Tabelle*/

	for(i = 0; i < 30; ++i) {
		printf("%c", '_');
	}
	printf("\n");

	for(i = 0; i <= n; ++i) {			/*Ausgabe der Tabelle*/
		if(isalpha(i)) {
			printf("%c \t|\t Ja\n", i);
		} else {
			printf("%c \t|\t Nein\n", i);
		}
	}

	return 0;
}
