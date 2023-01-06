/* Aufgabe 34c*/
#include <stdio.h>

int read_percentage(int *percentage);
void flush();

int main(void)
{	
	int a;
	if(read_percentage(&a)){
		printf("Die Eingabe war erfolgreich: ");
		printf("%i\n", a);
	}else{
		printf("Ungültige Eingabe\n");
	}


	return 0;
}

int read_percentage(int *percentage)
{
	int status;
	printf("Geben Sie eine Zahl zwischen 0 und 100 ein: ");
	status = scanf("%d", percentage);

	if(status == 1 && *percentage >= 0 && *percentage <= 100){
		return 1;
	}else{
		flush();
		return 0;
	}
}

void flush()
{
	while(getchar() != '\n'){

	}
}
