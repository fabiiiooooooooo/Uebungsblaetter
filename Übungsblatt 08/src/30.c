#include <stdio.h>
#include <limits.h>
#include "my_math.h"



void pascall(int n);
int main()
{

	
	 	
		printf("%lu\n", my_fak(65));
		printf("%lu\n", my_binomial(2, 2));

		pascall(10);
		



	return 0;

}

void pascall(int n)
{
	int i;
	int k;
	unsigned long a[10];

	for(i = 0; i <= n; ++i){
	 	a[i] = 0;
	}

	printf("\nPascall Dreieck: \n\n");
	for(i = 0; i <= n; ++i){
		for(k = 0; k <= i; ++k){
			printf("%lu\t", my_binomial(i, k));
			a[i] += my_binomial(i, k); 

		}
		printf("\n");
	}

	printf("\n");
	printf("\n");
	for(i = 0; i <= n; ++i){
		printf("Summe der Zeile %i: %lu\n",i, a[i]);
	}
}
