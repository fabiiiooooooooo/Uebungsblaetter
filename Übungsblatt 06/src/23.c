#include <stdio.h>
#include <string.h>

#define SMAX 15

int main(int argc, char *argv[])
{	
	int i;
	char zeichenkette[SMAX];
	int sortierung = 0;
	
	if(argc < 3)
	{
		printf("Bitte geben Sie mindestens 2 Parameter ein\n");
		return -1;
	}

	for(i = 2; i < argc ; ++i){											/*Überprüfung der lexikologischen Reihenfolge*/
			
		if((strcmp(argv[i - 1], argv[i]) > 0)){

			printf("Die %i. Zeichenkette verletzt als erstes die lexikographische Ordnung\n", i);
			sortierung += 1;
			break;
		}	
		
	}

	if(sortierung == 0){
		printf("Die Zeichenkette ist lexikographisch geordnet\n");
	}


	for(i = 0; i < SMAX; ++i){
		
			zeichenkette[i] = argv[1][i]; 


		printf("%c", zeichenkette[i]);
	}

	
	printf("\n");

	return 0;

}
