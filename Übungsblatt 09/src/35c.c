/* Aufgabe 35c*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i;
	char token[20];
	char input[20];
	char *hours;
	char *minutes;
	char *seconds;

	printf("Geben Sie eine Uhrzeit ein: ");
	scanf("%s", input);
	
	strcpy(token, input);

	i = 1;
	strtok(token, ":-/");
	while(strtok(NULL, ":-/") != NULL){
		++i;
	}

	if(i == 3){

		hours = strtok(input, ":-/");
		minutes = strtok(NULL, ":-/");
		seconds = strtok(NULL, ":-/");

		printf("hours: %s, minutes: %s, seconds: %s\n", hours, minutes, seconds);



	}else{
			printf("Formatfehler!\n");

	}

	return 0;	

}
