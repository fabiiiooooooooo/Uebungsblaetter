#include <stdio.h>
#include "strecken.h"

#define ERROR 0
#define SUCCESS 1
#define TEILSTRECKEN 5

#define seamile_to_km(a) (a * 1.852)
#define km_to_seamile(a) (double)(a / 1.852)

#define new_line() printf("\n")

void flush()
{
	while(getchar() !='\n'){

	}
}

double gesamtleange(double a[], int size)
{	
	int i;
	double strecke = 0;

	for(i = 0; i < size; ++i){
		strecke += a[i];
	}

	return strecke;

} 

double durchschnitt_laenge(double a[], int size)
{

	return (gesamtleange(a, size) / size); 
}

int einlesen(double a[])
{
	int i = 0;
	int status;

	while(a[i] != 0){
		++i;
	}

	status = scanf("%lf", &a[i]);

	if(!status){
		flush();
	}

	if(i >= TEILSTRECKEN){
		return ERROR;
	}

	return SUCCESS;


}
