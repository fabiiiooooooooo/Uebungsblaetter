#include <stdio.h>

int main(void)
{
	int i;

	printf("Zahl \t|\t Quadrat\n"); /* Formatierung der Tabelle*/
	for(i = 0; i < 24; ++i) {
		printf("%c", '-');
	}
	printf("\n");

	for(i = 0; i <= 100; ++i) {		/* Ausgabe der Tabelle*/
		printf("%i \t|\t %i\n", i, i*i);
	}

	return 0;
}
