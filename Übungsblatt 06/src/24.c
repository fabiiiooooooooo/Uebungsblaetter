#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define VMAX 125


int check_param(char *argv[]);
int check_prim(int n);

int main(int argc, char *argv[])
{	
	int i, n;
	int ganzzahl;
	int prim[VMAX]; 
	ganzzahl= 0;
	n = 0;

	if(argc != 2){
		printf("Bitte geben Sie genau einen Parameter ein.\n");
		return -1;
	}

	if(check_param(argv) == 1){
		ganzzahl = atoi(argv[1]);
	}

	if(ganzzahl > VMAX || ganzzahl < 1){

		printf("Der eingegebene Parameter entspricht nicht dem Wertebereich.\n");
		return -1;
	}else{

		for(i = 0; i <= ganzzahl; ++i){

		
			if(check_prim(i) != -1){
				prim[i] = check_prim(i);
				n += 1;

			}

		}
		if(n)
		printf("Der Anteil der ersten %i Primzahlen ( ", n);

		for(i = 0; i <= ganzzahl; ++i){
			if(check_prim(i) != -1){
				printf("%i ", prim[i]);
			}
		}
		printf(") an den natürlichen Zahlen bis zur %i ist %.2f", ganzzahl, (double)n / (double)ganzzahl);
		printf("\n");


	
		
	}




	return 0;
}

int check_param(char *argv[])
{
	int i, n;
	n = 1;

	for(i = 0; i < (int)strlen(argv[1]); ++i){

		if(argv[1][i] == 0 || !(isdigit(argv[1][i])) || argv[1][0] == 0){
		  	n -= 1;
		}
			
		
	}
	return n;
}

int check_prim(int n){

	int i, flag;
	flag = 0;

   	if (n == 0 || n == 1){
  		 flag = 1;
  	}

  	for (i = 2; i <= n / 2; ++i) {

   
    		if (n % i == 0) {
     			flag = 1;
      			break;
    		}
  	}


 	if (flag == 0){

    		return n;
	}else{
		return -1;
	}


   	
}
